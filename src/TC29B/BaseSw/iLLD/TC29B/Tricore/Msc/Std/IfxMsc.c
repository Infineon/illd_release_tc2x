/**
 * \file IfxMsc.c
 * \brief MSC  basic functionality
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

#include "IfxMsc.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

void IfxMsc_clearDataFrameInterruptFlag(Ifx_MSC *msc)
{
    /* Data Frame Interrupt Clear */
    msc->ISC.B.CDEDI = 1;
}


void IfxMsc_clearReset(Ifx_MSC *msc)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();

    IfxScuWdt_clearCpuEndinit(passwd);

    if (msc->KRST0.B.RSTSTAT == 1)
    {
        msc->KRSTCLR.B.CLR = 1; /* Clear Kernel reset status bit */
    }

    IfxScuWdt_setCpuEndinit(passwd);
}


void IfxMsc_disableModule(Ifx_MSC *msc)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(passwd);
    /* Disable module  */
    msc->CLC.B.DISR = 1;
    IfxScuWdt_setCpuEndinit(passwd);
}


uint32 IfxMsc_downstreamAbraBaudCalculator(uint32 baud)
{
    uint32 fsys = IfxScuCcu_getSpbFrequency();
    uint32 ndd  = 0;

    /* DSTE.NDD = fsys / 2*BR */

    ndd = fsys / (2 * baud);

    return ndd - 1;
}


uint64 IfxMsc_downstreamFractionalBaudCalculator(Ifx_MSC *msc, uint32 baud)
{
    IFX_UNUSED_PARAMETER(msc);

    float32 fsys = IfxScuCcu_getSpbFrequency();
    uint64  step = 0;

    step = (uint64)((uint64)(2 * baud * 1024)) / fsys;

    return step;
}


uint32 IfxMsc_downstreamNormalBaudCalculator(Ifx_MSC *msc, uint32 baud)
{
    IFX_UNUSED_PARAMETER(msc);

    float32 fsys = IfxScuCcu_getSpbFrequency();
    uint32  step = 0;

    /* FDR.STEP = 1024 - fsys / (2*BR) */

    step = 1024 - (fsys / (2 * baud));

    return step;
}


void IfxMsc_enableModule(Ifx_MSC *msc)
{
    /* Disable module disable bit */
    msc->CLC.U = 0;
}


boolean IfxMsc_getActiveDataFrameStatus(Ifx_MSC *msc)
{
    return msc->DSS.B.DFA;
}


Ifx_MSC *IfxMsc_getAddress(IfxMsc_Index msc)
{
    Ifx_MSC *module;

    if (msc < IFXMSC_NUM_MODULES)
    {
        module = (Ifx_MSC *)IfxMsc_cfg_indexMap[msc].module;
    }
    else
    {
        module = NULL_PTR;
    }

    return module;
}


boolean IfxMsc_getDataFrameInterruptFlag(Ifx_MSC *msc)
{
    boolean flag = 0;

    flag = msc->ISR.B.DEDI;

    return flag;
}


IfxMsc_Index IfxMsc_getIndex(Ifx_MSC *msc)
{
    uint32       index;
    IfxMsc_Index result;

    result = IfxMsc_Index_none;

    for (index = 0; index < IFXMSC_NUM_MODULES; index++)
    {
        if (IfxMsc_cfg_indexMap[index].module == msc)
        {
            result = (IfxMsc_Index)IfxMsc_cfg_indexMap[index].index;
            break;
        }
    }

    return result;
}


void IfxMsc_resetModule(Ifx_MSC *msc)
{
    uint16 passwd = IfxScuWdt_getCpuWatchdogPassword();

    IfxScuWdt_clearCpuEndinit(passwd);

    /* Reset kernel */
    msc->KRST1.B.RST = 1;
    msc->KRST0.B.RST = 1;               /* Only if both Kernel reset bits are set a reset is executed */

    while (msc->KRST0.B.RSTSTAT == 0)   /* Wait until reset is executed */

    {}

    /* TODO Check if CLC enable is required */
    //msc->KRSTCLR.B.CLR = 1; /* Clear Kernel reset status bit */

    IfxScuWdt_setCpuEndinit(passwd);
}


uint64 IfxMsc_upstreamFractionalBaudCalculator(Ifx_MSC *msc, uint32 baud)
{
    float32 fsys = IfxScuCcu_getSpbFrequency();
    uint64  step = 0;
    uint32  df   = 1;

    /* FDR.STEP = DF*BR*1024 / fsys */

    if (msc->USR.B.URR != 0)
    {
        df = 1 << (msc->USR.B.URR + 1);
    }
    else
    {
        df = 0;
    }

    step = (uint64)((uint64)((df * baud) * 1024)) / fsys;

    return step;
}


uint32 IfxMsc_upstreamNormalBaudCalculator(Ifx_MSC *msc, uint32 baud)
{
    float32 fsys = IfxScuCcu_getSpbFrequency();
    uint32  step = 0;
    uint32  df   = 1;

    /* FDR.STEP = 1024 - fsys / DF*BR */

    if (msc->USR.B.URR != 0)
    {
        df = 1 << (msc->USR.B.URR + 1);
    }
    else
    {
        df = 0;
    }

    step = 1024 - (fsys / (df * baud));

    return step;
}
