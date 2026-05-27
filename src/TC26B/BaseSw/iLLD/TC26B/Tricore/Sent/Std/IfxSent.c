/**
 * \file IfxSent.c
 * \brief SENT  basic functionality
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

#include "IfxSent.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

float32 IfxSent_getChannelUnitTime(Ifx_SENT *sent, IfxSent_ChannelId channelId)
{
    float32 fFracDiv = IfxSent_getModuleClock(sent);
    float32 fPdiv    = fFracDiv / (float32)(sent->CH[channelId].CPDR.B.PDIV + 1);

    uint32  div      = sent->CH[channelId].CFDR.B.DIV;

    if (div > 0)
    {
        float32 fTick = (fPdiv * 56) / div;
        return 1 / fTick;
    }
    else
    {
        return 0.0f;
    }
}


float32 IfxSent_getModuleClock(Ifx_SENT *sent)
{
    float32 fsys = IfxScuCcu_getSpbFrequency();

    uint32  rmc  = sent->CLC.B.RMC;

    if (rmc < 1)
    {
        rmc = 1;
    }

    float32      fclc = fsys / rmc;

    Ifx_SENT_FDR fdr;
    fdr.U = sent->FDR.U;

    float32      kernelFreq = 0.0f;

    if (fdr.B.DM == 1)
    {
        kernelFreq = fclc / (1024 - fdr.B.STEP);
    }
    else if (fdr.B.DM == 2)
    {
        kernelFreq = (fclc * fdr.B.STEP) / 1024;
    }

    return kernelFreq;
}


void IfxSent_initializeChannelUnitTime(Ifx_SENT *sent, IfxSent_ChannelId channelId, float32 tUnit)
{
    float32      fFracDiv = IfxSent_getModuleClock(sent);

    /* const uint32 divMin   = 560; */
    const uint32 divMax = 3276;

    uint32       pDiv;
    uint32       fDiv;

    float32      tResult;
    tResult = fFracDiv * 56 * tUnit;
    pDiv    = tResult / divMax;
    fDiv    = tResult / pDiv;

    if (fDiv > divMax)
    {
        pDiv = pDiv + 1;
        fDiv = tResult / pDiv;
    }

    if ((pDiv > 1024) || (pDiv < 1))
    {
        pDiv = 1025;
        fDiv = tResult / 1024;
    }

    IfxSent_setChannelPreDivider(sent, channelId, (uint16)pDiv - 1);
    IfxSent_setChannelFractionalDivider(sent, channelId, (uint16)fDiv);
}


void IfxSent_initializeModuleClock(Ifx_SENT *sent, IfxSent_ClockDividerMode dividerMode, uint16 stepValue)
{
    Ifx_SENT_FDR tempFDR;
    tempFDR.U      = 0;
    tempFDR.B.STEP = stepValue;
    tempFDR.B.DM   = dividerMode;
    sent->FDR.U    = tempFDR.U;
}


void IfxSent_resetModule(Ifx_SENT *sent)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();

    IfxScuWdt_clearCpuEndinit(passwd);
    sent->KRST1.B.RST = 1;      /* Only if both Kernel reset bits are set a reset is executed */
    sent->KRST0.B.RST = 1;
    IfxScuWdt_setCpuEndinit(passwd);

    while (0 == sent->KRST0.B.RSTSTAT)  /* Wait until reset is executed */

    {}

    IfxScuWdt_clearCpuEndinit(passwd);
    sent->KRSTCLR.B.CLR = 1;    /* Clear Kernel reset status bit */
    IfxScuWdt_setCpuEndinit(passwd);
}
