/**
 * \file BlinkeyLedExample.c
 * \brief An example for blinking LEDs.
 *
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
 */

#include "IfxSrc.h"
#include "IfxStm.h"
#include "IfxPort.h"
#include "IfxCpu.h"

#define LED0_BLINK_INTERVAL_IN_SECONDS (1)

extern volatile uint32 ledBlink0;
#if (IFXCPU_NUM_MODULES > 1)

extern volatile uint32 ledBlink1;
#if (IFXCPU_NUM_MODULES > 2)

extern volatile uint32 ledBlink2;
#endif /*#if (IFXCPU_NUM_MODULES > 2)*/
#endif /*#if (IFXCPU_NUM_MODULES > 1)*/

void BlinkLed(void)
{
    switch (IfxCpu_getCoreIndex())
    {
    case 0:
        IfxPort_setPinState(&MODULE_P33, 6, ledBlink0 ? IfxPort_State_high : IfxPort_State_low);
        break;

#if (IFXCPU_NUM_MODULES > 1)
    case 1:
        IfxPort_setPinState(&MODULE_P33, 7, ledBlink1 ? IfxPort_State_high : IfxPort_State_low);
        break;

#if (IFXCPU_NUM_MODULES > 2)
    case 2:
        IfxPort_setPinState(&MODULE_P33, 8, ledBlink2 ? IfxPort_State_high : IfxPort_State_low);
        break;
#endif /*#if (IFXCPU_NUM_MODULES > 2)*/
#endif /*#if (IFXCPU_NUM_MODULES > 1)*/

    default:
        break;
    }
}


#define STM0_ISR_PRIORITY 10

void Initialize_StmTicks(void)
{
    IfxStm_CompareConfig stmCompareConfig;
    //    test_var= 1;
    // suspend by debugger enabled
    IfxStm_enableOcdsSuspend(&MODULE_STM0);

    //Call the constructor of configuration
    IfxStm_initCompareConfig(&stmCompareConfig);
    //Modify only the number of ticks and enable the trigger output
    stmCompareConfig.ticks           = 1000; /*Interrupt after 1000 ticks from now */
    stmCompareConfig.triggerPriority = STM0_ISR_PRIORITY;
    stmCompareConfig.typeOfService   = IfxSrc_Tos_cpu0;

    //Now Compare functionality is initialized
    IfxStm_initCompare(&MODULE_STM0, &stmCompareConfig);
}


void BlinkeyLedExample_init(void)
{
    P33_OUT.B.P6  = 1;
    IfxPort_setPinMode(&MODULE_P33, 6, IfxPort_Mode_outputPushPullGeneral);

#if (IFXCPU_NUM_MODULES > 1)
    P33_OUT.B.P7  = 1;
    IfxPort_setPinMode(&MODULE_P33, 7, IfxPort_Mode_outputPushPullGeneral);

#if (IFXCPU_NUM_MODULES > 2)
    P33_OUT.B.P8  = 1;
    IfxPort_setPinMode(&MODULE_P33, 8, IfxPort_Mode_outputPushPullGeneral);
#endif /*#if (IFXCPU_NUM_MODULES > 2)*/
#endif /*#if (IFXCPU_NUM_MODULES > 1)*/

    Initialize_StmTicks();
}


IFX_INTERRUPT(Stm0_Isr, 0, STM0_ISR_PRIORITY)
{
    uint32 stmTicks;
    __enable();
    stmTicks = (uint32)(LED0_BLINK_INTERVAL_IN_SECONDS * IfxStm_getFrequency(&MODULE_STM0));
    IfxStm_updateCompare(&MODULE_STM0, IfxStm_Comparator_0, IfxStm_getCompare(&MODULE_STM0, IfxStm_Comparator_0) + stmTicks);

    if (ledBlink0 == 1)
    {
        ledBlink0 = 0;
#if (IFXCPU_NUM_MODULES > 1)
        ledBlink1 = 0;
#if (IFXCPU_NUM_MODULES > 2)
        ledBlink2 = 0;
#endif /*#if (IFXCPU_NUM_MODULES > 2)*/
#endif /*#if (IFXCPU_NUM_MODULES > 1)*/
    }
    else
    {
        ledBlink0 = 1;
#if (IFXCPU_NUM_MODULES > 1)
        ledBlink1 = 1;
#if (IFXCPU_NUM_MODULES > 2)
        ledBlink2 = 1;
#endif /*#if (IFXCPU_NUM_MODULES > 2)*/
#endif /*#if (IFXCPU_NUM_MODULES > 1)*/
    }
}
