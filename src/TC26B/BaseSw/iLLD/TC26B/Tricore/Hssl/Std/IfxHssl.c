/**
 * \file IfxHssl.c
 * \brief HSSL  basic functionality
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

#include "IfxHssl.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

void IfxHssl_disableHsctModule(Ifx_HSCT *hsct)
{
    uint16 psw = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(psw); /* clears the endinit protection */
    hsct->CLC.B.DISR = 1;           /* disables the module */
    IfxScuWdt_setCpuEndinit(psw);   /* sets the endinit protection back on */
}


void IfxHssl_disableHsslModule(Ifx_HSSL *hssl)
{
    uint16 psw = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(psw); /* clears the endinit protection */
    hssl->CLC.B.DISR = 1;           /* disables the module */
    IfxScuWdt_setCpuEndinit(psw);   /* sets the endinit protection back on */
}


void IfxHssl_enableHsctModule(Ifx_HSCT *hsct)
{
    uint16 psw = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(psw); /* clears the endinit protection */
    hsct->CLC.B.DISR = 0;           /* enables the module */
    IfxScuWdt_setCpuEndinit(psw);   /* sets the endinit protection back on */
}


void IfxHssl_enableHsslModule(Ifx_HSSL *hssl)
{
    uint16 psw = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(psw); /* clears the endinit protection */
    hssl->CLC.B.DISR = 0;           /* enables the module */
    IfxScuWdt_setCpuEndinit(psw);   /* sets the endinit protection back on */
}


Ifx_HSCT *IfxHssl_getHsctAddress(IfxHssl_hsctIndex hsct)
{
    Ifx_HSCT *module;

    if (hsct < IFXHSSL_NUM_MODULES)
    {
        module = (Ifx_HSCT *)IfxHssl_cfg_hsctIndexMap[hsct].module;
    }
    else
    {
        module = NULL_PTR;
    }

    return module;
}


IfxHssl_hsctIndex IfxHssl_getHsctIndex(Ifx_HSCT *hsct)
{
    uint32            index;
    IfxHssl_hsctIndex result;

    result = IfxHssl_hsctIndex_none;

    for (index = 0; index < IFXHSSL_NUM_MODULES; index++)
    {
        if (IfxHssl_cfg_hsctIndexMap[index].module == hsct)
        {
            result = (IfxHssl_hsctIndex)IfxHssl_cfg_hsctIndexMap[index].index;
            break;
        }
    }

    return result;
}


volatile Ifx_SRC_SRCR *IfxHssl_getHsctSrcPointer(Ifx_HSCT *hsct)
{
    IFX_UNUSED_PARAMETER(hsct);
    return &MODULE_SRC.HSCT.HSCT[0].SR;
}


Ifx_HSSL *IfxHssl_getHsslAddress(IfxHssl_hsslIndex hssl)
{
    Ifx_HSSL *module;

    if (hssl < IFXHSSL_NUM_MODULES)
    {
        module = (Ifx_HSSL *)IfxHssl_cfg_hsslIndexMap[hssl].module;
    }
    else
    {
        module = NULL_PTR;
    }

    return module;
}


volatile Ifx_SRC_SRCR *IfxHssl_getHsslCOKSrcPointer(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId)
{
    IFX_UNUSED_PARAMETER(hssl);
    return &MODULE_SRC.HSSL.HSSL[(uint32)channelId].COK;
}


volatile Ifx_SRC_SRCR *IfxHssl_getHsslERRSrcPointer(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId)
{
    IFX_UNUSED_PARAMETER(hssl);
    return &MODULE_SRC.HSSL.HSSL[(uint32)channelId].ERR;
}


volatile Ifx_SRC_SRCR *IfxHssl_getHsslEXISrcPointer(Ifx_HSSL *hssl)
{
    IFX_UNUSED_PARAMETER(hssl);
    return &MODULE_SRC.HSSL.EXI;
}


IfxHssl_hsslIndex IfxHssl_getHsslIndex(Ifx_HSSL *hssl)
{
    uint32            index;
    IfxHssl_hsslIndex result;

    result = IfxHssl_hsslIndex_none;

    for (index = 0; index < IFXHSSL_NUM_MODULES; index++)
    {
        if (IfxHssl_cfg_hsslIndexMap[index].module == hssl)
        {
            result = (IfxHssl_hsslIndex)IfxHssl_cfg_hsslIndexMap[index].index;
            break;
        }
    }

    return result;
}


volatile Ifx_SRC_SRCR *IfxHssl_getHsslRDISrcPointer(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId)
{
    IFX_UNUSED_PARAMETER(hssl);
    return &MODULE_SRC.HSSL.HSSL[(uint32)channelId].RDI;
}


volatile Ifx_SRC_SRCR *IfxHssl_getHsslTRGSrcPointer(Ifx_HSSL *hssl, IfxHssl_ChannelId channelId)
{
    IFX_UNUSED_PARAMETER(hssl);
    return &MODULE_SRC.HSSL.HSSL[(uint32)channelId].TRG;
}


void IfxHssl_resetHsctKernel(Ifx_HSCT *hsct)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();

    IfxScuWdt_clearCpuEndinit(passwd);
    hsct->KRST0.B.RST = 1;          /* Only if both Kernel reset bits are set a reset is executed */
    hsct->KRST1.B.RST = 1;
    IfxScuWdt_setCpuEndinit(passwd);

    while (0 == hsct->KRST0.B.RSTSTAT)  /* Wait until reset is executed */

    {}

    IfxScuWdt_clearCpuEndinit(passwd);
    hsct->KRSTCLR.B.CLR = 1;            /* Clear Kernel reset status bit */
    IfxScuWdt_setCpuEndinit(passwd);
}


void IfxHssl_resetHsslKernel(Ifx_HSSL *hssl)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();

    IfxScuWdt_clearCpuEndinit(passwd);
    hssl->KRST0.B.RST = 1;          /* Only if both Kernel reset bits are set a reset is executed */
    hssl->KRST1.B.RST = 1;
    IfxScuWdt_setCpuEndinit(passwd);

    while (0 == hssl->KRST0.B.RSTSTAT)  /* Wait until reset is executed */

    {}

    IfxScuWdt_clearCpuEndinit(passwd);
    hssl->KRSTCLR.B.CLR = 1;            /* Clear Kernel reset status bit */
    IfxScuWdt_setCpuEndinit(passwd);
}
