/**
 * \file IfxEbu_BFlashSpansion.h
 * \brief EBU BFLASHSPANSION details
 * \ingroup IfxLld_Ebu
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
 * \defgroup IfxLld_Ebu_BFlashSpansion_Usage How to use the Spansion Burst Flash Driver?
 * \ingroup IfxLld_Ebu
 *
 * The BFlashSpansion interface driver provides a default EBU configuration to access external Burst Flash devices from Spansion (e.g. S29CD032G)
 *
 * In the following sections it will be described, how to integrate the driver into the application framework.
 *
 * \section IfxLld_Ebu_BFlashSpansion_Preparation Preparation
 * \subsection IfxLld_Ebu_BFlashSpansion_Include Include Files
 *
 * Include following header file into your C code:
 * \code
 * #include <Ebu/BFlashSpansion/IfxEbu_BFlashSpansion.h>
 * \endcode
 *
 * \subsection IfxLld_Ebu_BFlashSpansion_Init Module Initialisation
 *
 * The EBU and external device initialisation can be done as shown in following example.
 * This will configure EBU for 32bit BFlashSpansion device with BurstLength of 8:
 *
 * \code
 *     IfxEbu_BFlashSpansion_Config cfg;
 *     IfxEbu_BFlashSpansion_initMemoryConfig(&cfg, &MODULE_EBU0);
 *     cfg.memoryRegionConfig.baseAddress = 0xa4000000; // specify noncached segment A, driver will also enable the cached segment 8
 *     IfxEbu_BFlashSpansion bflash;
 *     IfxEbu_BFlashSpansion_initMemory(&bflash, &cfg);
 * \endcode
 *
 * After these functions have been executed, it's possible to fetch data and code from the external device.
 *
 * \subsection IfxLld_Ebu_BFlashSpansion_Operations Erase and Program
 *
 * This driver also allows to erase and program the burst flash.
 *
 * Example for erasing the first block:
 * \code
 *     IfxEbu_BFlashSpansion_eraseBlock(&bflash, 0xa4000000);
 * \endcode
 *
 * Example for programming some 32bit words:
 * \code
 *     IfxEbu_BFlashSpansion_programWord(&bflash, 0xa4000000 +  0, 0x11111111);
 *     IfxEbu_BFlashSpansion_programWord(&bflash, 0xa4000000 +  4, 0x22222222);
 *     IfxEbu_BFlashSpansion_programWord(&bflash, 0xa4000000 +  8, 0x33333333);
 *     IfxEbu_BFlashSpansion_programWord(&bflash, 0xa4000000 + 12, 0x44444444);
 * \endcode
 *
 * \defgroup IfxLld_Ebu_BFlashSpansion Spansion Burst Flash Driver
 * \ingroup IfxLld_Ebu
 * \defgroup IfxLld_Ebu_BFlashSpansion_DataStructures Data Structures
 * \ingroup IfxLld_Ebu_BFlashSpansion
 * \defgroup IfxLld_Ebu_BFlashSpansion_Module Module Functions
 * \ingroup IfxLld_Ebu_BFlashSpansion
 * \defgroup IfxLld_Ebu_BFlashSpansion_Operations Flash Operations
 * \ingroup IfxLld_Ebu_BFlashSpansion
 * \defgroup IfxLld_Ebu_BFlashSpansion_Commands Flash Command Sequences
 * \ingroup IfxLld_Ebu_BFlashSpansion
 */

#ifndef IFXEBU_BFLASHSPANSION_H
#define IFXEBU_BFLASHSPANSION_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "Ebu/Std/IfxEbu.h"
#include "Scu/Std/IfxScuWdt.h"
#include "Scu/Std/IfxScuCcu.h"

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

typedef struct
{
    uint16 burstLength : 3;
    uint16 reserved_1 : 3;
    uint16 clockConfiguration : 1;
    uint16 burstSequence : 1;
    uint16 waitConfiguration : 1;
    uint16 dataOutputConfiguration : 1;
    uint16 automaticSleepModeDisable : 4;
    uint16 reserved : 1;
    uint16 readMode : 1;
} IfxEbu_BFlashSpansion_BurstCfgBits;

typedef union
{
    uint16                             U;
    IfxEbu_BFlashSpansion_BurstCfgBits B;
} IfxEbu_BFlashSpansion_BurstCfg;

typedef struct
{
    Ifx_EBU                       *ebu;
    IfxEbu_ChipSelect              chipSelect;
    uint32                         baseAddress;
    IfxEbu_BFlashSpansion_BurstCfg burstCfg;
} IfxEbu_BFlashSpansion;

typedef struct
{
    Ifx_EBU                       *module;
    IfxEbu_ExternalClockRatio      externalClockRatio;
    IfxEbu_ChipSelect              chipSelect;
    IfxEbu_ReadConfig              syncReadConfig;
    IfxEbu_WriteConfig             asyncWriteConfig;
    IfxEbu_ReadAccessParameter     syncReadAccessParameter;
    IfxEbu_WriteAccessParameter    asyncWriteAccessParameter;
    IfxEbu_ModuleConfig            moduleConfig;
    IfxEbu_MemoryRegionConfig      memoryRegionConfig;
    IfxEbu_ReadConfig              asyncReadConfig;
    IfxEbu_ReadAccessParameter     asyncReadAccessParameter;
    IfxEbu_BFlashSpansion_BurstCfg burstCfg;
} IfxEbu_BFlashSpansion_Config;

/** \addtogroup IfxLld_Ebu_BFlashSpansion_Operations
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/**
 * \param bflash burst flash handle
 * \param blockAddress the block address which should be erased
 * \return None
 */
IFX_EXTERN void IfxEbu_BFlashSpansion_eraseBlock(IfxEbu_BFlashSpansion *bflash, uint32 blockAddress);

/**
 * \param bflash burst flash handle
 * \param address the address which should be programmed
 * \param data the data word which should be programmed
 * \return None
 */
IFX_EXTERN void IfxEbu_BFlashSpansion_programWord(IfxEbu_BFlashSpansion *bflash, uint32 address, uint32 data);

/**
 * \return TRUE if ready was notified, (planned, not implemented) FALSE on timeout: device not ready
 */
IFX_EXTERN boolean IfxEbu_BFlashSpansion_waitForReady(IfxEbu_BFlashSpansion *bflash);

/** \} */

/** \addtogroup IfxLld_Ebu_BFlashSpansion_Commands
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/**
 * \param bflash burst flash handle
 * \param burstCfg the burst configuration which will be passed to the Spansion device
 * \return None
 */
IFX_EXTERN void IfxEbu_BFlashSpansion_cmdSetBurstConfig(IfxEbu_BFlashSpansion *bflash, IfxEbu_BFlashSpansion_BurstCfg burstCfg);

/** \} */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/**
 * \param bflash burst flash handle
 * \param config Pointer to BFlashSpansion's config structure
 * \return None
 */
IFX_EXTERN void IfxEbu_BFlashSpansion_initMemory(IfxEbu_BFlashSpansion *bflash, const IfxEbu_BFlashSpansion_Config *config);

/**
 * \param config Pointer to BFlashSpansion's config structure
 * \param ebu pointr to EBU Module
 * \return None
 */
IFX_EXTERN void IfxEbu_BFlashSpansion_initMemoryConfig(IfxEbu_BFlashSpansion_Config *config, Ifx_EBU *ebu);

#endif /* IFXEBU_BFLASHSPANSION_H */
