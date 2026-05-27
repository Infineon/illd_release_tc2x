/**
 * \file IfxFlash_cfg.c
 * \brief FLASH on-chip implementation data
 *
 * \version iLLD_1_22_0
 * \copyright Copyright (c) 2026 Infineon Technologies AG. All rights reserved.
 *
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
 *
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxFlash_cfg.h"

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

IFX_CONST IfxFlash_flashSector IfxFlash_dFlashTableEepLog[IFXFLASH_DFLASH_NUM_LOG_SECTORS] = {
    {0xAF000000 + 0 * 0x2000,  0xAF000000 + 1 * 0x2000 - 1 },
    {0xAF000000 + 1 * 0x2000,  0xAF000000 + 2 * 0x2000 - 1 },
    {0xAF000000 + 2 * 0x2000,  0xAF000000 + 3 * 0x2000 - 1 },
    {0xAF000000 + 3 * 0x2000,  0xAF000000 + 4 * 0x2000 - 1 },
    {0xAF000000 + 4 * 0x2000,  0xAF000000 + 5 * 0x2000 - 1 },
    {0xAF000000 + 5 * 0x2000,  0xAF000000 + 6 * 0x2000 - 1 },
    {0xAF000000 + 6 * 0x2000,  0xAF000000 + 7 * 0x2000 - 1 },
    {0xAF000000 + 7 * 0x2000,  0xAF000000 + 8 * 0x2000 - 1 },
    {0xAF000000 + 8 * 0x2000,  0xAF000000 + 9 * 0x2000 - 1 },
    {0xAF000000 + 9 * 0x2000,  0xAF000000 + 10 * 0x2000 - 1},
    {0xAF000000 + 10 * 0x2000, 0xAF000000 + 11 * 0x2000 - 1},
    {0xAF000000 + 11 * 0x2000, 0xAF000000 + 12 * 0x2000 - 1},
};

IFX_CONST IfxFlash_flashSector IfxFlash_dFlashTablePhys[IFXFLASH_DFLASH_NUM_PHYSICAL_SECTORS] = {
    {IFXFLASH_DFLASH_START, IFXFLASH_DFLASH_END},
};

IFX_CONST IfxFlash_flashSector IfxFlash_dFlashTableUcbLog[IFXFLASH_DFLASH_NUM_UCB_LOG_SECTORS] = {
    {0xaf100000, 0xaf1003ff},   // UCB0
    {0xaf100400, 0xaf1007ff},   // UCB1
    {0xaf100800, 0xaf100bff},   // UCB2
    {0xaf100c00, 0xaf100fff},   // UCB3
    {0xaf101000, 0xaf1013ff},   // UCB4
    {0xaf101400, 0xaf1017ff},   // UCB5
    {0xaf101800, 0xaf101bff},   // UCB6
    {0xaf101c00, 0xaf101fff},   // UCB7
    {0xaf102000, 0xaf1023ff},   // UCB8
    {0xaf102400, 0xaf1027ff},   // UCB9
    {0xaf102800, 0xaf102bff},   // UCB10
    {0xaf102c00, 0xaf102fff},   // UCB11
    {0xaf103000, 0xaf1033ff},   // UCB12
    {0xaf103400, 0xaf1037ff},   // UCB13
    {0xaf103800, 0xaf103bff},   // UCB14
    {0xaf103c00, 0xaf103fff},   // UCB15
};

IFX_CONST IfxFlash_flashSector IfxFlash_pFlashTableLog[IFXFLASH_PFLASH_NUM_LOG_SECTORS] = {
    {0xa0000000, 0xa0003fff},   // PF0 S0
    {0xa0004000, 0xa0007fff},   // PF0 S1
    {0xa0008000, 0xa000bfff},   // PF0 S2
    {0xa000c000, 0xa000ffff},   // PF0 S3
    {0xa0010000, 0xa0013fff},   // PF0 S4
    {0xa0014000, 0xa0017fff},   // PF0 S5
    {0xa0018000, 0xa001bfff},   // PF0 S6
    {0xa001c000, 0xa001ffff},   // PF0 S7
    {0xa0020000, 0xa0027fff},   // PF0 S8
    {0xa0028000, 0xa002ffff},   // PF0 S9
    {0xa0030000, 0xa0037fff},   // PF0 S10
    {0xa0038000, 0xa003ffff},   // PF0 S11
    {0xa0040000, 0xa0047fff},   // PF0 S12
    {0xa0048000, 0xa004ffff},   // PF0 S13
    {0xa0050000, 0xa0057fff},   // PF0 S14
    {0xa0058000, 0xa005ffff},   // PF0 S15
    {0xa0060000, 0xa006ffff},   // PF0 S16
    {0xa0070000, 0xa007ffff},   // PF0 S17
    {0xa0080000, 0xa008ffff},   // PF0 S18
    {0xa0090000, 0xa009ffff},   // PF0 S19
    {0xa00a0000, 0xa00bffff},   // PF0 S20
    {0xa00c0000, 0xa00dffff},   // PF0 S21
    {0xa00e0000, 0xa00fffff},   // PF0 S22
    // TC26x has only 1MB PF0 and 1.5MB PF1
    {0xa0100000, 0xa0103fff},   // PF1 S0
    {0xa0104000, 0xa0107fff},   // PF1 S1
    {0xa0108000, 0xa010bfff},   // PF1 S2
    {0xa010c000, 0xa010ffff},   // PF1 S3
    {0xa0110000, 0xa0113fff},   // PF1 S4
    {0xa0114000, 0xa0117fff},   // PF1 S5
    {0xa0118000, 0xa011bfff},   // PF1 S6
    {0xa011c000, 0xa011ffff},   // PF1 S7
    {0xa0120000, 0xa0127fff},   // PF1 S8
    {0xa0128000, 0xa012ffff},   // PF1 S9
    {0xa0130000, 0xa0137fff},   // PF1 S10
    {0xa0138000, 0xa013ffff},   // PF1 S11
    {0xa0140000, 0xa0147fff},   // PF1 S12
    {0xa0148000, 0xa014ffff},   // PF1 S13
    {0xa0150000, 0xa0157fff},   // PF1 S14
    {0xa0158000, 0xa015ffff},   // PF1 S15
    {0xa0160000, 0xa016ffff},   // PF1 S16
    {0xa0170000, 0xa017ffff},   // PF1 S17
    {0xa0180000, 0xa018ffff},   // PF1 S18
    {0xa0190000, 0xa019ffff},   // PF1 S19
    {0xa01a0000, 0xa01bffff},   // PF1 S20
    {0xa01c0000, 0xa01dffff},   // PF1 S21
    {0xa01e0000, 0xa01fffff},   // PF1 S22
    {0xa0200000, 0xa023ffff},   // PF1 S23
    {0xa0240000, 0xa027ffff},   // PF1 S24
};

IFX_CONST IfxFlash_flashSector IfxFlash_pFlashTablePhys[IFXFLASH_PFLASH_NUM_PHYSICAL_SECTORS] = {
    {0xa0000000, 0xa007ffff},   // PF0 PS0
    {0xa0080000, 0xa00fffff},   // PF0 PS1
    {0xa0100000, 0xa017ffff},   // PF1 PS0
    {0xa0180000, 0xa01fffff},   // PF1 PS1
    {0xa0200000, 0xa027ffff},   // PF1 PS2
};
