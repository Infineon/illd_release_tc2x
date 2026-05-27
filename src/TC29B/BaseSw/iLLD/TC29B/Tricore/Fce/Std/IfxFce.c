/**
 * \file IfxFce.c
 * \brief FCE  basic functionality
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
 *
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxFce.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

Ifx_FCE_STS IfxFce_getCrc16InterruptStatus(Ifx_FCE *fce)
{
    Ifx_FCE_STS interruptStatus;
    interruptStatus.U = fce->IN2.STS.U;
    return interruptStatus;
}


Ifx_FCE_STS IfxFce_getCrc32InterruptStatus(Ifx_FCE *fce, IfxFce_Crc32Kernel crc32Kernel)
{
    Ifx_FCE_STS interruptStatus;

    if (crc32Kernel == IfxFce_Crc32Kernel_0)
    {
        interruptStatus.U = fce->IN0.STS.U;
    }
    else
    {
        interruptStatus.U = fce->IN1.STS.U;
    }

    return interruptStatus;
}


Ifx_FCE_STS IfxFce_getCrc8InterruptStatus(Ifx_FCE *fce)
{
    Ifx_FCE_STS interruptStatus;
    interruptStatus.U = fce->IN3.STS.U;
    return interruptStatus;
}


uint32 IfxFce_reflectCrc32(uint32 crcStartValue, uint8 crcLength)
{
    uint32 ReversedData = 0x0U;
    uint8  inputDataCounter;

    for (inputDataCounter = 0; inputDataCounter < crcLength; ++inputDataCounter)
    {
        if (crcStartValue & 0x01)
        {
            ReversedData |= (uint32)((uint32)1 << ((crcLength - 1) - inputDataCounter));
        }

        crcStartValue = (uint32)((uint32)crcStartValue >> (uint32)1);
    }

    return ReversedData;
}


void IfxFce_resetModule(Ifx_FCE *fce)
{
    uint16 password = IfxScuWdt_getCpuWatchdogPassword();

    IfxScuWdt_clearCpuEndinit(password);
    fce->KRST1.B.RST = 1;  /* Only if both Kernel reset bits are set a reset is executed */
    fce->KRST0.B.RST = 1;
    IfxScuWdt_setCpuEndinit(password);

    while (0 == fce->KRST0.B.RSTSTAT)  /* Wait until reset is executed */

    {}

    IfxScuWdt_clearCpuEndinit(password);
    fce->KRSTCLR.B.CLR = 1;     /* Clear Kernel reset status bit */
    IfxScuWdt_setCpuEndinit(password);
}
