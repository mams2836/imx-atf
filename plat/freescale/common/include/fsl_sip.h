/*
 * Copyright 2017 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __SOC_FSL_SIP_H
#define __SOC_FSL_SIP_H

#define FSL_SIP_GPC			0xC2000000
#define FSL_SIP_CONFIG_GPC_MASK		0x00
#define FSL_SIP_CONFIG_GPC_UNMASK	0x01
#define FSL_SIP_CONFIG_GPC_SET_WAKE	0x02
#define FSL_SIP_CONFIG_GPC_PM_DOMAIN	0x03
#define FSL_SIP_CONFIG_GPC_SET_AFF	0x04

#define FSL_SIP_CPUFREQ			0xC2000001
#define FSL_SIP_SET_CPUFREQ		0x00

#define FSL_SIP_SRTC			0xC2000002
#define FSL_SIP_SRTC_SET_TIME		0x00
#define FSL_SIP_SRTC_START_WDOG		0x01
#define FSL_SIP_SRTC_STOP_WDOG		0x02
#define FSL_SIP_SRTC_SET_WDOG_ACT	0x03
#define FSL_SIP_SRTC_PING_WDOG		0x04
#define FSL_SIP_SRTC_SET_TIMEOUT_WDOG	0x05
#define FSL_SIP_SRTC_GET_WDOG_STAT	0x06
#define FSL_SIP_SRTC_SET_PRETIME_WDOG	0x07

#define FSL_SIP_BUILDINFO		0xC2000003
#define FSL_SIP_BUILDINFO_GET_COMMITHASH	0x00

#define FSL_SIP_DDR_DVFS		0xc2000004

#define FSL_SIP_SRC			0xc2000005
#define FSL_SIP_SRC_M4_START		0x00
#define FSL_SIP_SRC_M4_STARTED		0x01

#define FSL_SIP_GET_SOC_INFO            0xc2000006

#define FSL_SIP_HAB            0xc2000007
#define FSL_SIP_HAB_AUTHENTICATE	0x00
#define FSL_SIP_HAB_ENTRY			0x01
#define FSL_SIP_HAB_EXIT			0x02
#define FSL_SIP_HAB_REPORT_EVENT	0x03
#define FSL_SIP_HAB_REPORT_STATUS	0x04

#define FSL_SIP_NOC			0xc2000008
#define FSL_SIP_NOC_LCDIF		0x0

#endif
