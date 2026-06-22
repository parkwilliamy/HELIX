/* linker.ld — IMEM: [0x00000000, 0x00005000)
 *             DMEM: [0x00005000, 0x00007900)
               CSRS: [0x00007700, 0x00007800)
 *             IO:   [0x00007800, 0x00008000)
 */

OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY
{
  IMEM (rx)  : ORIGIN = 0x00000000, LENGTH = 0x00005000
  DMEM (rwx) : ORIGIN = 0x00005000, LENGTH = 0x00002700
  CSRS (rwx) : ORIGIN = 0x00007700, LENGTH = 0x00000100
  IO (rwx)   : ORIGIN = 0x00007800, LENGTH = 0x00000200
}

PROVIDE(__imem_start = ORIGIN(IMEM));
PROVIDE(__imem_end   = ORIGIN(IMEM) + LENGTH(IMEM));
PROVIDE(__dmem_start = ORIGIN(DMEM));
PROVIDE(__dmem_end   = ORIGIN(DMEM) + LENGTH(DMEM));

/* Put the stack at the top of DMEM (full-descending stack). */
PROVIDE(_stack_top = ORIGIN(DMEM) + LENGTH(DMEM));

SECTIONS
{
  /* ---------------- IMEM (flash/ROM-style) ---------------- */

  /* Code + read-only data live in IMEM */
  .text : ALIGN(4)
  {
    __text_start = .;

    KEEP(*(.text.startup))      /* your _start in start.S */
    *(.text .text.*)

    __text_end = .;
  } > IMEM

  .rodata : ALIGN(4)
  {
    __rodata_start = .;
    *(.rodata .rodata.*)
    *(.srodata .srodata.*)
    __rodata_end = .;
  } > IMEM

  /* Exception / unwind stuff (usually unused bare-metal, but harmless) */
  .eh_frame : ALIGN(4) { *(.eh_frame .eh_frame.*) } > IMEM

  /* ---------------- DMEM (RAM) ---------------- */

  /* Initialized data lives in DMEM at runtime, but its initial contents
     are stored in IMEM. The AT> IMEM creates the load image in IMEM. */
  .data : ALIGN(4)
  {
    __data_start = .;
    *(.data .data.*)
    *(.sdata .sdata.*)
    . = ALIGN(4);
    __data_end = .;
  } > DMEM AT > IMEM

  /* Symbols your startup code can use to copy .data from IMEM -> DMEM */
  __data_load_start = LOADADDR(.data);
  __data_load_end   = __data_load_start + SIZEOF(.data);

  /* Zero-initialized data (no load image needed) */
  .bss (NOLOAD) : ALIGN(4)
  {
    __bss_start = .;
    *(.bss .bss.*)
    *(.sbss .sbss.*)
    *(COMMON)
    . = ALIGN(4);
    __bss_end = .;
  } > DMEM

  /* End symbol some libs expect */
  PROVIDE(end = .);
  PROVIDE(_end = .);

}
