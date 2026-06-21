# R500 build entry point.
#
# This is the single makefile you invoke -- run targets as usual, e.g.
#   make PROG=foo        software build (mk/sw.mk)
#   make lint            Verilator lint (mk/verilator.mk)
#   make compliance      Verilator compliance sim (mk/verilator.mk)
#   make build sim       Vivado xsim (mk/vivado.mk)
#   make synth fpga bit  Vivado implementation (mk/vivado.mk)
#
# Shared source lists live in mk/common.mk so every tool sees one definition.
# The mk/*.mk files are includes, not standalone makefiles.

ROOT := $(dir $(realpath $(firstword $(MAKEFILE_LIST))))
.DEFAULT_GOAL := default

include mk/common.mk
include mk/sw.mk
include mk/verilator.mk
include mk/vivado.mk
