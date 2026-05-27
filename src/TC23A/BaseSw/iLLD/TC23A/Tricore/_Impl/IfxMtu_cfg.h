/**
 * \file IfxMtu_cfg.h
 * \brief Mtu on-chip implementation data
 * \ingroup IfxLld_Mtu
 *
 * \version iLLD_1_22_0
 * \copyright Copyright (c) 2026 Infineon Technologies AG. All rights reserved.
 *
 *
 *                                 IMPORTANT NOTICE
 *
 * Infineon Technologies AG (Infineon) licenses this file to you under the
 * Infineon Automotive SW Lab License v2025-01 (IFASLL). You may not use
 * this file except in compliance with IFASLL.
 *
 * The full license text is contained in IFASLL202501.pdf delivered with this SW.
 * Unless required by applicable law or agreed to in writing, software distributed
 * under this license is distributed "AS IS" without any warranty or liability of any
 * kind and Infineon hereby expressly disclaims any warranties or representations,
 * whether express, implied, statutory or otherwise, including but not limited to
 * warranties of workmanship, merchantability, fitness for a particular purpose,
 * defects in the licensed items, or non-infringement of third parties'
 * intellectual property rights. See the full license text for the specific
 * language governing permissions and limitations under IFASLL.
 *
 * \defgroup IfxLld_Mtu MTU
 * \ingroup IfxLld
 * \defgroup IfxLld_Mtu_Impl Implementation
 * \ingroup IfxLld_Mtu
 * \defgroup IfxLld_Mtu_Std Standard Driver
 * \ingroup IfxLld_Mtu
 */

#ifndef IFXMTU_CFG_H
#define IFXMTU_CFG_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "Cpu/Std/IfxCpu.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "IfxMtu_reg.h"
#include "IfxMc_reg.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/** \brief Base address of first MBIST Control Block
 */
#define IFXMTU_MC_ADDRESS_BASE       (0xF0061000u)

/** \brief Number of MBIST Table items
 */
#define IFXMTU_NUM_MBIST_TABLE_ITEMS (88)

/** \brief Maximum number of tracked SRAM addresses (ETTR)
 */
#define IFXMTU_MAX_TRACKED_ADDRESSES (5)

/******************************************************************************/
/*-------------------------------Enumerations---------------------------------*/
/******************************************************************************/

/** \brief MBIST Selection
 */
typedef enum
{
    IfxMtu_MbistSel_none       = -1,
    IfxMtu_MbistSel_miniMcds   = 13,
    IfxMtu_MbistSel_cpu0Dspr   = 14,
    IfxMtu_MbistSel_cpu0Pspr   = 16,
    IfxMtu_MbistSel_cpu0Ptag   = 17,
    IfxMtu_MbistSel_ethermac   = 22,
    IfxMtu_MbistSel_mod1       = 23,
    IfxMtu_MbistSel_mod2       = 24,
    IfxMtu_MbistSel_mod3       = 25,
    IfxMtu_MbistSel_mod4       = 26,
    IfxMtu_MbistSel_mcan       = 36,
    IfxMtu_MbistSel_mcan1      = 37,
    IfxMtu_MbistSel_erayObf    = 38,
    IfxMtu_MbistSel_erayIbfTbf = 39,
    IfxMtu_MbistSel_erayMbf    = 40,
    IfxMtu_MbistSel_mcds       = 45,
    IfxMtu_MbistSel_emem0      = 46,
    IfxMtu_MbistSel_emem1      = 47,
    IfxMtu_MbistSel_emem2      = 48,
    IfxMtu_MbistSel_emem3      = 49,
    IfxMtu_MbistSel_emem4      = 50,
    IfxMtu_MbistSel_emem5      = 51,
    IfxMtu_MbistSel_emem6      = 52,
    IfxMtu_MbistSel_emem7      = 53,
    IfxMtu_MbistSel_lmu        = 79,
    IfxMtu_MbistSel_ememXtm0   = 84,
    IfxMtu_MbistSel_ememXtm1   = 85,
    IfxMtu_MbistSel_fft0       = 86,
    IfxMtu_MbistSel_fft1       = 87
} IfxMtu_MbistSel;

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \brief Describes physical parameters of a SRAM memory
 */
typedef struct
{
    uint8  numBlocks;      /**< \brief number of SRAM blocks */
    uint16 dataSize;       /**< \brief Data Size of each memory block */
    uint8  eccSize;        /**< \brief ECC Size of each memory block */
    uint8  eccInvPos0;     /**< \brief First ECC bit which needs to be inverted */
    uint8  eccInvPos1;     /**< \brief Second ECC bit which needs to be inverted */
    uint32 mbistDelay;     /**< \brief Mbist Delay  */
} IfxMtu_SramItem;

/******************************************************************************/
/*-------------------Global Exported Variables/Constants----------------------*/
/******************************************************************************/

IFX_EXTERN const IfxMtu_SramItem IfxMtu_sramTable[IFXMTU_NUM_MBIST_TABLE_ITEMS];

#endif /* IFXMTU_CFG_H */
