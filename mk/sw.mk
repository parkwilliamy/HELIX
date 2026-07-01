# RISC-V program build: C / assembly -> ELF -> bin -> .hex
# Usage: make PROG=<name> [PROG_DIR=tests/debug]   (default target builds from src/<PROG>.c)

COMPILER_FLAGS := -march=rv32im_zicsr -mabi=ilp32 -mstrict-align -ffreestanding -fno-builtin -nostdlib -nostartfiles -T ./scripts/link.ld ./tests/start.s -O0 -I ./tests/
PROG :=
PROG_DIR := tests/debug

.PHONY: default asm

default:
	riscv32-unknown-elf-gcc $(COMPILER_FLAGS) $(PROG_DIR)/src/$(PROG).c -o $(PROG_DIR)/out/$(PROG).elf
	riscv32-unknown-elf-objcopy -O binary $(PROG_DIR)/out/$(PROG).elf $(PROG_DIR)/out/$(PROG).bin
	hexdump -v -e '1/4 "%08X\n"' $(PROG_DIR)/out/$(PROG).bin > $(PROG_DIR)/hex/$(PROG).hex
asm:
	riscv32-unknown-elf-gcc $(COMPILER_FLAGS) $(PROG_DIR)/asm/$(PROG).s -o $(PROG_DIR)/out/$(PROG).elf
	riscv32-unknown-elf-objcopy -O binary $(PROG_DIR)/out/$(PROG).elf $(PROG_DIR)/out/$(PROG).bin
	hexdump -v -e '1/4 "%08X\n"' $(PROG_DIR)/out/$(PROG).bin > $(PROG_DIR)/hex/$(PROG).hex
