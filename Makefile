#  SPDX-FileCopyrightText: Copyright 2025 Clever Design (Switzerland) GmbH
#  SPDX-License-Identifier: Apache-2.0

## Select the esp target to build (esp32 / esp32s3 / exp32c6 / ....)
ESP_TARGET := esp32s3
## Select the zephyr target/board to build
ZEPHYR_TARGET := native_sim/native/64
## Select the Application
BUILD_DIR := build
# include common makefile
include tools/make/makefile.mk

# import settings for the used Platform
ifneq (,$(findstring esp,$(MAKECMDGOALS)))
include tools/make/espidf-54.mk
endif

export CMAKE_GENERATOR=Ninja

TESTS := "-DTEST_IOSTREAM=1"

# ESP-IDF specific targets
# ---------------------------------------------------------------------------
.PHONY: esp esp.build esp.flash esp.clean esp.linux

esp: esp.clean esp.build ## clean and build for the selected TARGET

esp.build: ## (re)compile for the selected TARGET
	@echo "Building for ${var1}"
	${IDFPY} -B ${BUILD_DIR} -DIDF_TARGET=${ESP_TARGET} ${TESTS} build size -l

esp.flash: esp.build ## Flash the firmware to ESP32
	${IDFPY} -B ${BUILD_DIR} flash

## Delete build directory and tyconfig
esp.clean:
	$(RMDIR) ${BUILD_DIR} && $(RM) sdkconfig

esp.size: ## (re)compile for the selected TARGET
	@echo "Building for ${var1}"
	${IDFPY} -B ${BUILD_DIR} -DIDF_TARGET=${ESP_TARGET} ${TESTS} size-components

## Build the firmware for host execution (Linux only)
## This will start the monitor
esp.linux:
	${IDFPY} -B ${BUILD_DIR} ${TESTS} --preview set-target linux build monitor
