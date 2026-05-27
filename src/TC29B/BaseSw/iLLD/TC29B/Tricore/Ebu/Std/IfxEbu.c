/**
 * \file IfxEbu.c
 * \brief EBU  basic functionality
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
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxEbu.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

void IfxEbu_setExternalClockRatio(Ifx_EBU *ebu, IfxEbu_ExternalClockRatio ratio)
{
    Ifx_EBU_CLC clc;
    clc.U = ebu->CLC.U;

    switch (ratio)
    {
    case IfxEbu_ExternalClockRatio_1:
        clc.B.EBUDIV = 0;
        clc.B.DIV2   = 0;
        break;
    case IfxEbu_ExternalClockRatio_2:
        clc.B.EBUDIV = 1;
        clc.B.DIV2   = 0;
        break;
    case IfxEbu_ExternalClockRatio_3:
        clc.B.EBUDIV = 2;
        clc.B.DIV2   = 0;
        break;
    case IfxEbu_ExternalClockRatio_4:
        clc.B.EBUDIV = 3;
        clc.B.DIV2   = 0;
        break;
    case IfxEbu_ExternalClockRatio_6:
        clc.B.EBUDIV = 2;
        clc.B.DIV2   = 1;
        break;
    case IfxEbu_ExternalClockRatio_8:
        clc.B.EBUDIV = 3;
        clc.B.DIV2   = 1;
        break;
    }

    ebu->CLC.U = clc.U;
}


void IfxEbu_setByteControlEnable(Ifx_EBU *ebu, IfxEbu_ByteControlEnable byteControlEnable)
{
    ebu->USERCON.B.RES = byteControlEnable;
}


void IfxEbu_disableModule(Ifx_EBU *ebu)
{
    uint16 psw = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(psw); /* clears the endinit protection*/
    ebu->CLC.B.DISR = 1;
    IfxScuWdt_setCpuEndinit(psw);   /* sets the endinit protection back on*/
}
