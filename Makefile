export IDF_TARGET := esp32s3
# when changing the IDF, rerun install.sh in the esp-idf directory
MAKEFILE_PATH := $(abspath $(lastword $(MAKEFILE_LIST)))

# change this, to adapt to your environment
export IDF_PATH := $(HOME)/_dev/_lib/esp-idf_54
export IDF_BUILD := $(HOME)/.espressif
export IDF_COMPILER_VERSION := 14.2.0_20241119
export IDF_PY := idf5.4_py3.13

# MACOS
# export IDF_PY := idf5.3_py3.9

export IDF_TOOLS_PATH := $(IDF_BUILD)
export IDF_PYTHON_ENV_PATH := $(IDF_TOOLS_PATH)/python_env/$(IDF_PY)_env
PATH := ${IDF_PATH}/tools:${IDF_PATH}/components/esptool_py/esptool:${IDF_PATH}/components/espcoredump:${IDF_PATH}:/components/partition_table:${IDF_PATH}/components/app_update:${IDF_BUILD}/tools/xtensa-esp-elf/esp-${IDF_COMPILER_VERSION}/xtensa-esp-elf/bin:$(IDF_BUILD)/python_env/${IDF_PY}_env/bin:$(PATH)
SHELL := /bin/bash
IDFPY := ${IDF_PATH}/tools/idf.py

RC ?= /usr/bin/rc
JLINK_ROOT := /usr/bin
GDB_PORT_NUMBER = 2331
JLINKGDBSERVER := $(JLINK_ROOT)/JLinkGDBServer

BUILDDIR ?= build

PROJECT_NAME := $(shell basename $(CURDIR))

# targets
# ---------------------------------------------------------------------------
.PHONY: cmake all build flash clean size proto

build:
	echo ${PATH}
	${IDFPY} build

flash:
	${IDFPY} flash

clean:
	rm -rf ${BUILDDIR} && rm sdkconfig

size:
	${IDFPY} size-components --format csv --output-file ${BUILDDIR}/size.csv

