# Memory Hierarchy — AXI Reference

Working notes for adding AXI-based I\$/D\$ with a shared memory bus to BRAM.
Spec: `axi_specs.pdf` = ARM IHI 0022 **Issue L** (Aug 2025). Note: this issue documents
**AXI5** — AXI3/AXI4/AXI4-Lite content was removed in Issue J. The base AXI5 signal set
(all optional properties disabled) is equivalent to AXI4 for our purposes; every extension
signal has a spec-defined "omit and tie off" rule. Page numbers below are the spec's
internal page numbers (bottom of each page).

## Reading guide

| Section | Pages | Why it matters |
|---|---|---|
| A1.2–A1.3 | 10–16 | Five-channel architecture (AW, W, B, AR, R), Manager/Subordinate terminology |
| **A2.1** | 27 | ACLK/ARESETn rules: reset asserts async, deasserts sync; VALID low during reset; no combinatorial input→output paths |
| **A2.3** (incl. A2.3.2) | 29–32 | VALID/READY handshake + **channel dependency rules** — the #1 source of deadlock bugs |
| **A3.1** | 43–52 | Size/Length/Burst attributes, 4KB rule, WRAP bursts for cache lines, address equations (A3.1.6) + transfer pseudocode (A3.1.7) — implement this in the BRAM subordinate's burst counter |
| **A3.2** | 53–60 | W/R data channels: WSTRB, WLAST/RLAST, byte-invariant little-endian lanes (matches the existing `web` byte-lane scheme) |
| **A3.3** | 61–64 | BRESP/RRESP encodings (OKAY/EXOKAY/SLVERR/DECERR) — bus decoder can map access faults to DECERR |
| A4.2, A4.5 | 68, 77–78 | AxCACHE / AxPROT semantics — mostly to justify omitting them; AxPROT[2] = instruction/data hint (I\$ vs D\$) |
| **A5.1, A5.3–A5.6** | 90–105 | IDs and ordering. Key: a Manager with one outstanding transaction may omit ID signals entirely. A5.4 = how an interconnect appends ID bits when merging managers |
| **B1.1, B1.2, B1.4** | 275–283 | Definitive signal list with widths and sources |
| B2.1–B2.2 | 285–295 | Interface classes + signal matrix. AXI5-Lite is single-beat only → unusable for line fills; use the full base interface |

**Skip:** A2.4 (credited transport), A6 (atomics/exclusives — no A extension), A7 (snoop
opcodes), A8–A9 (system-level cacheability/stashing/CMOs — not about building your own
cache), A10–A16, B1.3 (MPAM, MTE, MMU, DVM, parity, snoop channels — optional AXI5
extensions).

## Configuration

- Topology: I\$ (read-only manager) + D\$ (read/write manager) → 2×1 shared bus
  (arbiter + address decoder) → AXI BRAM subordinate. Single clock (`clk_out1`), no CDC.
- `DATA_WIDTH = 32`, `ADDR_WIDTH = 32` (decoder uses the `mem_constants` map)
- `BRESP_WIDTH = RRESP_WIDTH = 2` (classic OKAY/EXOKAY/SLVERR/DECERR)
- IDs omitted at cache interfaces (one outstanding transaction each); the interconnect
  either holds the grant until RLAST/BVALID (no IDs anywhere) or appends a 1-bit ID
  (0 = I\$, 1 = D\$) if both may be outstanding at once.

## Signal list

Global (all interfaces): `ACLK`, `ARESETn` (active-low, matches existing `rst_n_*`).

### Read request channel (AR) — I\$ and D\$

| Signal | Width | Notes |
|---|---|---|
| ARVALID / ARREADY | 1 / 1 | handshake |
| ARADDR | 32 | line-aligned fill address |
| ARLEN | 8 | beats − 1 (4-word line → 3) |
| ARSIZE | 3 | `0b010` = 4 bytes, constant |
| ARBURST | 2 | `0b10` WRAP (critical-word-first) or `0b01` INCR with aligned addresses (simpler subordinate) |

### Read data channel (R) — I\$ and D\$

| Signal | Width | Notes |
|---|---|---|
| RVALID / RREADY | 1 / 1 | handshake |
| RDATA | 32 | |
| RRESP | 2 | OKAY expected; DECERR from decoder on bad address |
| RLAST | 1 | marks final beat of the burst |

### Write request channel (AW) — D\$ only

| Signal | Width | Notes |
|---|---|---|
| AWVALID / AWREADY | 1 / 1 | handshake |
| AWADDR | 32 | |
| AWLEN | 8 | 0 for write-through single-beat stores; line-sized only if write-back later |
| AWSIZE | 3 | `0b010` |
| AWBURST | 2 | `0b01` INCR |

### Write data channel (W) — D\$ only

| Signal | Width | Notes |
|---|---|---|
| WVALID / WREADY | 1 / 1 | handshake |
| WDATA | 32 | |
| WSTRB | 4 | byte lanes, carries the existing sb/sh/sw `web_final` semantics |
| WLAST | 1 | |

### Write response channel (B) — D\$ only

| Signal | Width | Notes |
|---|---|---|
| BVALID / BREADY | 1 / 1 | handshake |
| BRESP | 2 | |

### Omitted signals (tie-offs if ever connecting third-party IP)

`AxLOCK` (no LR/SC), `AxCACHE` (tie `0b0011` for Xilinx interconnect), `AxPROT`
(tie `0b000`, or carry with bit2 = 1 on the I\$), `AxQOS`/`AxREGION` (tie 0), and all
AXI5 extensions in the B1 tables: `*PENDING`/`*CRDT*`, `AxSNOOP`, `AxDOMAIN`,
stash/trace/loop/MMU/PBHA/MECID/NSAID/MPAM/ATOP/CMO/TAGOP, `WTAG`/`RTAG`,
`WPOISON`/`RPOISON`, `RCHUNK*`, `BCOMP`/`BPERSIST`/`BBUSY`/`RBUSY`, all `xUSER`,
AC/CR snoop channels.

## Protocol rules to bake into the FSMs (A2.3.2, A3)

- A Manager must never wait for READY before asserting VALID; once VALID is high it
  stays high with stable payload until the handshake clock edge.
- Subordinate asserts `BVALID` only after **both** the AW handshake and the `WLAST`
  beat; `RVALID` only after the AR handshake. Default-high READY on request channels
  is recommended for latency.
- No early burst termination — the subordinate always delivers `ARLEN + 1` beats,
  incrementing/wrapping the address per the A3.1.7 pseudocode.
- WRAP bursts: length must be 2/4/8/16 and start address size-aligned; wrap boundary =
  address aligned to `Size × Length`.
- Transactions must not cross 4KB (trivially satisfied by line-sized bursts).
- Reset: VALIDs deasserted during reset, earliest assertion one cycle after `ARESETn`
  goes high.

## Design decisions and sequencing

Decide the protocol contract **before** writing cache RTL (the miss FSM's ports are the
bus); the arbitration scheme is a **late, local** decision inside the interconnect.

1. **Pipeline stall support first** — the core currently assumes fixed 1-cycle memory
   (IF reads `doa` every cycle; MEM assumes `dob`/`web` complete in one cycle). Add a
   native valid/ready request/response interface for IF and MEM and extend the
   StallUnit to hold the pipeline on a miss. This core-side interface should *not* be
   AXI — keep it a simple req/resp handshake.
2. **Freeze the contract**: line size + burst shape; **write-through, no-write-allocate
   first** (single-beat writes, no eviction bursts, BRAM stays current so the
   testbench `tohost` watch and MemAccess read-back keep working); MMIO stays decoded
   in-core initially (`MEM_io` split) so the D\$ never sees IO addresses.
3. **AXI BRAM subordinate** (wrap `BRAM.sv` / `blk_mem_gen` with a burst counter),
   verified standalone — optionally run the core cacheless through a trivial
   core-to-AXI adapter to prove plumbing before any cache exists.
4. **I\$** (read-only, simpler), then **D\$**.
5. **Interconnect/arbiter last**: fixed priority (D\$ wins — a MEM stall blocks
   everything), grant held until RLAST/BRESP. Round-robin is a drop-in upgrade if I\$
   starvation appears. The MemAccess loader is effectively a third manager — keep the
   existing `mem_control` mux between interconnect and BRAM for now, absorb it later.
   The interconnect's address decoder is the natural new home for the DECERR /
   access-fault behavior currently raised in EX.

Caveat: with a true dual-port BRAM, each cache could own a port and no bus is needed —
the shared bus is a deliberate choice for learning AXI and for hanging future
subordinates (DDR, peripherals) off one interconnect.

Extracted spec text (grep-able): `scratchpad/axi_specs.txt` in the session scratchpad,
regenerate with `gs -dNOPAUSE -dBATCH -dQUIET -sDEVICE=txtwrite -sOutputFile=out.txt axi_specs.pdf`.
