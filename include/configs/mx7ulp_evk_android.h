
/*
 * Copyright (C) 2015-2016 Freescale Semiconductor, Inc.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __MX7ULP_EVK_ANDROID_H
#define __MX7ULP_EVK_ANDROID_H
#include "mx_android_common.h"

#define CONFIG_CMD_FS_GENERIC
#define CONFIG_CMD_EXT4
#define CONFIG_CMD_EXT4_WRITE

#define CONFIG_AVB_SUPPORT
#define CONFIG_FASTBOOT_LOCK
#define FSL_FASTBOOT_FB_DEV "mmc"

#define CONFIG_ANDROID_RECOVERY
#define CONFIG_SHA1

#ifdef CONFIG_SYS_CBSIZE
#undef CONFIG_SYS_CBSIZE
#define CONFIG_SYS_CBSIZE 2048
#endif

#ifdef CONFIG_SYS_MAXARGS
#undef CONFIG_SYS_MAXARGS
#define CONFIG_SYS_MAXARGS     64
#endif

#ifdef CONFIG_SYS_MALLOC_LEN
#undef CONFIG_SYS_MALLOC_LEN
#define CONFIG_SYS_MALLOC_LEN           (96 * SZ_1M)
#endif

/* Enable mcu firmware flash */
#ifdef CONFIG_FLASH_MCUFIRMWARE_SUPPORT
#define ANDROID_MCU_FRIMWARE_DEV_TYPE DEV_SF
#define ANDROID_MCU_FIRMWARE_START 0
#define ANDROID_MCU_FIRMWARE_SIZE  0x20000
#endif

#define AVB_AB_I_UNDERSTAND_LIBAVB_AB_IS_DEPRECATED

#endif
