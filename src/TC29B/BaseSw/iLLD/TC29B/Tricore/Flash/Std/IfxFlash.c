/**
 * \file IfxFlash.c
 * \brief FLASH  basic functionality
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
 *
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxFlash.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

void IfxFlash_clearCorrectableErrorTracking(IfxFlash_PortId portId)
{
    MODULE_FLASH0.CBAB[portId].CFG.B.CLR = 1;
}


void IfxFlash_clearUncorrectableErrorTracking(IfxFlash_PortId portId)
{
    MODULE_FLASH0.UBAB[portId].CFG.B.CLR = 1;
}


void IfxFlash_disableCorrectableErrorTracking(IfxFlash_PortId portId, boolean disable)
{
    MODULE_FLASH0.CBAB[portId].CFG.B.DIS = disable;
}


void IfxFlash_disableUncorrectableErrorTracking(IfxFlash_PortId portId, boolean disable)
{
    MODULE_FLASH0.UBAB[portId].CFG.B.DIS = disable;
}


void IfxFlash_disableWriteProtection(uint32 flash, IfxFlash_UcbType ucb, uint32 *password)
{
    IFX_UNUSED_PARAMETER(flash);
    volatile uint32 *addr1 = (volatile uint32 *)(IFXFLASH_CMD_BASE_ADDRESS | 0x553c);
    uint32           i;

    *addr1 = ucb;

    for (i = 0; i < 8; i++)
    {
        *addr1 = password[i];
    }

    __dsync();
}


uint32 IfxFlash_getTrackedCorrectableErrors(IfxFlash_PortId portId, IfxFlash_ErrorTracking_Address *trackedFlashAdresses)
{
    uint32 numErrors    = 0;
    uint32 fillingLevel = MODULE_FLASH0.CBAB[portId].STAT.U;

    int    i;

    for (i = 0;
         i < IFXFLASH_ERROR_TRACKING_MAX_CORRECTABLE_ERRORS &&
         (fillingLevel & (1 << i)) != 0;
         ++i)
    {
        Ifx_FLASH_CBAB_TOP top;
        top.U = MODULE_FLASH0.CBAB[portId].TOP.U;

        if (top.B.VLD)
        {
            trackedFlashAdresses[numErrors].address   = 0xa0000000 | (top.B.ADDR << 5);
            trackedFlashAdresses[numErrors].errorType = (IfxFlash_ErrorTracking)top.B.ERR;
            ++numErrors;
        }

        // clear entry
        MODULE_FLASH0.CBAB[portId].TOP.U = (((uint32)1) << 31);
    }

    return numErrors;
}


uint32 IfxFlash_getTrackedUncorrectableErrors(IfxFlash_PortId portId, IfxFlash_ErrorTracking_Address *trackedFlashAdresses)
{
    uint32 numErrors    = 0;
    uint32 fillingLevel = MODULE_FLASH0.UBAB[portId].STAT.U;

    int    i;

    for (i = 0;
         i < IFXFLASH_ERROR_TRACKING_MAX_UNCORRECTABLE_ERRORS &&
         (fillingLevel & (1 << i)) != 0;
         ++i)
    {
        Ifx_FLASH_UBAB_TOP top;
        top.U = MODULE_FLASH0.UBAB[portId].TOP.U;

        if (top.B.VLD)
        {
            trackedFlashAdresses[numErrors].address   = 0xa0000000 | (top.B.ADDR << 5);
            trackedFlashAdresses[numErrors].errorType = (IfxFlash_ErrorTracking)top.B.ERR;
            ++numErrors;
        }

        // clear entry
        MODULE_FLASH0.UBAB[portId].TOP.U = (((uint32)1) << 31);
    }

    return numErrors;
}


void IfxFlash_selectCorrectableErrorTracking(IfxFlash_PortId portId, IfxFlash_ErrorTracking errorTracking)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR,
        errorTracking == IfxFlash_ErrorTracking_none ||
        errorTracking == IfxFlash_ErrorTracking_correctedSingleBitError ||
        errorTracking == IfxFlash_ErrorTracking_correctedDoubleBitError ||
        errorTracking == IfxFlash_ErrorTracking_correctedSingleOrDoubleBitError);

    MODULE_FLASH0.CBAB[portId].CFG.B.SEL = errorTracking;
}


void IfxFlash_selectUncorrectableErrorTracking(IfxFlash_PortId portId, IfxFlash_ErrorTracking errorTracking)
{
    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR,
        errorTracking == IfxFlash_ErrorTracking_none ||
        errorTracking == IfxFlash_ErrorTracking_uncorrectableMultiBitError);

    MODULE_FLASH0.UBAB[portId].CFG.B.SEL = errorTracking;
}
