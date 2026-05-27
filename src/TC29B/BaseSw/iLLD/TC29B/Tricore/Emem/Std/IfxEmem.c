/**
 * \file IfxEmem.c
 * \brief EMEM  basic functionality
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

#include "IfxEmem.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

IfxEmem_LockedState IfxEmem_getLockedState(void)
{
    return (IfxEmem_LockedState)MODULE_EMEM.SBRCTR.B.STBLOCK;
}


void IfxEmem_setClockEnableState(const IfxEmem_State state)
{
    /* bit is inverted */
    if (IfxEmem_State_enabled == state)
    {
        MODULE_EMEM.CLC.B.DISR = 0;
    }
    else
    {
        MODULE_EMEM.CLC.B.DISR = 1;
    }

    /* wait one cycle for module to be enabled */
    __nop();
}
