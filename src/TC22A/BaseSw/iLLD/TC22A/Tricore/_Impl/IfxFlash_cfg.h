/**
 * \file IfxFlash_cfg.h
 * \brief FLASH on-chip implementation data
 * \ingroup IfxLld_Flash
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
 * \defgroup IfxLld_Flash FLASH
 * \ingroup IfxLld
 * \defgroup IfxLld_Flash_Impl Implementation
 * \ingroup IfxLld_Flash
 * \defgroup IfxLld_Flash_Std Standard Driver
 * \ingroup IfxLld_Flash
 */

#ifndef IFXFLASH_CFG_H
#define IFXFLASH_CFG_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "Cpu/Std/IfxCpu_Intrinsics.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/** \brief number of flash modules.
 * This macro may be deprecated in future. Use IFXFLASH_NUM_MODULES instead.
 */
#define IFXFLASH_NUM_FLASH_MODULES                       (1)

/** \brief base address for general command sequences
 */
#define IFXFLASH_CMD_BASE_ADDRESS                        (0xaf000000)

/** \brief offset between command areas (in DFlash range)
 */
#define IFXFLASH_CMD_BASE_OFFSET                         (0x00100000)

#define IFXFLASH_DFLASH_BANKS                            (1)

/** \brief Dflash burst length
 */
#define IFXFLASH_DFLASH_BURST_LENGTH                     (0x20)

#define IFXFLASH_DFLASH_END                              (IFXFLASH_DFLASH_START + IFXFLASH_DFLASH_SIZE - 1)

#define IFXFLASH_DFLASH_NUM_LOG_SECTORS                  (12)

/** \brief Phy sector for DF
 */
#define IFXFLASH_DFLASH_NUM_PHYSICAL_SECTORS             (1)

#define IFXFLASH_DFLASH_NUM_UCB_LOG_SECTORS              (16)

/** \brief 8 bytes
 */
#define IFXFLASH_DFLASH_PAGE_LENGTH                      (8)

#define IFXFLASH_DFLASH_SIZE                             (IFXFLASH_DFLASH_NUM_LOG_SECTORS * 0x2000)

#define IFXFLASH_DFLASH_START                            (0xaf000000)

/** \brief
 */
#define IFXFLASH_ERROR_TRACKING_MAX_CORRECTABLE_ERRORS   (10)

/** \brief
 */
#define IFXFLASH_ERROR_TRACKING_MAX_UNCORRECTABLE_ERRORS (1)

/** \brief number of flash modules
 */
#define IFXFLASH_NUM_MODULES                             (1)

#define IFXFLASH_PFLASH_BANKS                            (1)

/** \brief P flash burst length
 */
#define IFXFLASH_PFLASH_BURST_LENGTH                     (0x100)

/** \brief p flash end
 */
#define IFXFLASH_PFLASH_END                              ()

/** \brief
 */
#define IFXFLASH_PFLASH_NUM_LOG_SECTORS                  (23)

#define IFXFLASH_PFLASH_NUM_PHYSICAL_SECTORS             (2)

/** \brief offset between PMU PFlash ranges
 */
#define IFXFLASH_PFLASH_OFFSET                           (0x00800000)

#define IFXFLASH_PFLASH_PAGE_LENGTH                      (32)

/** \brief p flash size
 */
#define IFXFLASH_PFLASH_SIZE                             (0x00100000)

/** \brief p flash start
 */
#define IFXFLASH_PFLASH_START                            (0xa0000000)

/******************************************************************************/
/*-------------------------------Enumerations---------------------------------*/
/******************************************************************************/

/** \brief
 */
typedef enum
{
    IfxFlash_FlashType_Fa = 0,  /**< \brief Flash Array */
    IfxFlash_FlashType_D0 = 1,  /**< \brief data flash #0 */
    IfxFlash_FlashType_D1 = 2,  /**< \brief data flash #1 */
    IfxFlash_FlashType_P0 = 3,  /**< \brief program flash #0 */
    IfxFlash_FlashType_P1 = 4,  /**< \brief program flash #1 */
    IfxFlash_FlashType_P2 = 5,  /**< \brief program flash #2 */
    IfxFlash_FlashType_P3 = 6   /**< \brief program flash #3 */
} IfxFlash_FlashType;

/** \brief user configuration block type
 */
typedef enum
{
    IfxFlash_UcbType_ucb0    = 0, /**< \brief UCB 0 */
    IfxFlash_UcbType_ucb1    = 1, /**< \brief UCB 1 */
    IfxFlash_UcbType_ucbHsmc = 5  /**< \brief HSM UCB */
} IfxFlash_UcbType;

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \brief contains start and end address of sectors
 */
typedef struct
{
    uint32 start;       /**< \brief start address of sector */
    uint32 end;         /**< \brief end address of sector */
} IfxFlash_flashSector;

/******************************************************************************/
/*-------------------Global Exported Variables/Constants----------------------*/
/******************************************************************************/
IFX_EXTERN IFX_CONST IfxFlash_flashSector IfxFlash_dFlashTableEepLog[IFXFLASH_DFLASH_NUM_LOG_SECTORS];

IFX_EXTERN IFX_CONST IfxFlash_flashSector IfxFlash_dFlashTablePhys[IFXFLASH_DFLASH_NUM_PHYSICAL_SECTORS];

IFX_EXTERN IFX_CONST IfxFlash_flashSector IfxFlash_dFlashTableUcbLog[IFXFLASH_DFLASH_NUM_UCB_LOG_SECTORS];

IFX_EXTERN IFX_CONST IfxFlash_flashSector IfxFlash_pFlashTableLog[IFXFLASH_PFLASH_NUM_LOG_SECTORS];

IFX_EXTERN IFX_CONST IfxFlash_flashSector IfxFlash_pFlashTablePhys[IFXFLASH_PFLASH_NUM_PHYSICAL_SECTORS];

#endif /* IFXFLASH_CFG_H */
