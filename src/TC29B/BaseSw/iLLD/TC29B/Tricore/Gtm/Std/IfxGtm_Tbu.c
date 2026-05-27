/**
 * \file IfxGtm_Tbu.c
 * \brief GTM  basic functionality
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

#include "IfxGtm_Tbu.h"
#include "IfxGtm_Cmu.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

float32 IfxGtm_Tbu_getClockFrequency(Ifx_GTM *gtm, IfxGtm_Tbu_Ts channel)
{
    float32 result = 0.0F;

    if (channel == IfxGtm_Tbu_Ts_0)
    {
        result = IfxGtm_Cmu_getClkFrequency(gtm, (IfxGtm_Cmu_Clk)gtm->TBU.CH0_CTRL.B.CH_CLK_SRC, TRUE);
    }
    else if (channel == IfxGtm_Tbu_Ts_1)
    {
        result = IfxGtm_Cmu_getClkFrequency(gtm, (IfxGtm_Cmu_Clk)gtm->TBU.CH1_CTRL.B.CH_CLK_SRC, TRUE);
    }
    else if (channel == IfxGtm_Tbu_Ts_2)
    {
        result = IfxGtm_Cmu_getClkFrequency(gtm, (IfxGtm_Cmu_Clk)gtm->TBU.CH2_CTRL.B.CH_CLK_SRC, TRUE);
    }

    return result;
}
