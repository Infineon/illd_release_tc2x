/**
 * \file IfxGtm_Tom_Pwm.c
 * \brief GTM PWM details
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

#include "IfxGtm_Tom_Pwm.h"

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

boolean IfxGtm_Tom_Pwm_init(IfxGtm_Tom_Pwm_Driver *driver, const IfxGtm_Tom_Pwm_Config *config)
{
    boolean result = TRUE;

    driver->gtm      = config->gtm;
    driver->tomIndex = config->tom;

    Ifx_GTM_TOM *tomSFR = &config->gtm->TOM[config->tom];
    driver->tom        = tomSFR;
    driver->tomChannel = config->tomChannel;

    if (config->tomChannel <= 7)
    {
        driver->tgc[0] = IfxGtm_Tom_Ch_getTgcPointer(driver->tom, 0);
        driver->tgc[1] = IfxGtm_Tom_Ch_getTgcPointer(driver->tom, 1);
    }
    else
    {
        driver->tgc[0] = IfxGtm_Tom_Ch_getTgcPointer(driver->tom, 1);
        driver->tgc[1] = NULL_PTR; /* NOTE currently no concatenation between TOMs */
    }

    /* Initialize the timer part */
    if (config->synchronousUpdateEnabled == 1)
    {
        IfxGtm_Tom_Tgc_enableChannelUpdate(driver->tgc[0], config->tomChannel, TRUE);
    }

    IfxGtm_Tom_Ch_setClockSource(tomSFR, config->tomChannel, config->clock);

    IfxGtm_Tom_Tgc_setChannelForceUpdate(driver->tgc[0], config->tomChannel, TRUE, TRUE);

    IfxGtm_Tom_Ch_setSignalLevel(tomSFR, config->tomChannel, config->signalLevel);

    if (config->pin.outputPin != NULL_PTR)
    {
        IfxGtm_PinMap_setTomTout(config->pin.outputPin, config->pin.outputMode, config->pin.padDriver);
    }

    // enable and initialise interrupts if chosen
    if ((config->interrupt.ccu0Enabled == 1) || (config->interrupt.ccu1Enabled == 1))
    {
        IfxGtm_Tom_Ch_setNotification(tomSFR, config->tomChannel, config->interrupt.mode, config->interrupt.ccu0Enabled, config->interrupt.ccu1Enabled);

        volatile Ifx_SRC_SRCR *src;
        src = IfxGtm_Tom_Ch_getSrcPointer(config->gtm, config->tom, config->tomChannel);
        IfxSrc_init(src, config->interrupt.isrProvider, config->interrupt.isrPriority);
        IfxSrc_enable(src);
    }

    if (config->synchronousUpdateEnabled == 1)
    {
        IfxGtm_Tom_Ch_setCompareZeroShadow(tomSFR, config->tomChannel, config->period);
        IfxGtm_Tom_Ch_setCompareOneShadow(tomSFR, config->tomChannel, config->dutyCycle);
        IfxGtm_Tom_Tgc_trigger(driver->tgc[0]);
    }
    else
    {
        IfxGtm_Tom_Ch_setCompareZero(tomSFR, config->tomChannel, config->period);
        IfxGtm_Tom_Ch_setCompareOne(tomSFR, config->tomChannel, config->dutyCycle);
    }

    IfxGtm_Tom_Tgc_enableChannel(driver->tgc[0], config->tomChannel, TRUE, FALSE);
    IfxGtm_Tom_Tgc_enableChannelOutput(driver->tgc[0], config->tomChannel, TRUE, FALSE);

    if (config->immediateStartEnabled == TRUE)
    {
        IfxGtm_Tom_Tgc_trigger(driver->tgc[0]);
    }

    return result;
}


void IfxGtm_Tom_Pwm_initConfig(IfxGtm_Tom_Pwm_Config *config, Ifx_GTM *gtm)
{
    config->gtm                      = gtm;
    config->tom                      = IfxGtm_Tom_0;
    config->tomChannel               = IfxGtm_Tom_Ch_0;
    config->clock                    = IfxGtm_Tom_Ch_ClkSrc_cmuFxclk0;
    config->period                   = 20;
    config->dutyCycle                = 10;
    config->signalLevel              = Ifx_ActiveState_high;
    config->oneShotModeEnabled       = FALSE;
    config->synchronousUpdateEnabled = FALSE;
    config->immediateStartEnabled    = TRUE;
    config->interrupt.ccu0Enabled    = FALSE;
    config->interrupt.ccu1Enabled    = FALSE;
    config->interrupt.mode           = IfxGtm_IrqMode_pulseNotify;
    config->interrupt.isrProvider    = IfxSrc_Tos_cpu0;
    config->interrupt.isrPriority    = 0;
    config->pin.outputPin            = NULL_PTR;
    config->pin.outputMode           = IfxPort_OutputMode_pushPull;
    config->pin.padDriver            = IfxPort_PadDriver_cmosAutomotiveSpeed1;
}


void IfxGtm_Tom_Pwm_start(IfxGtm_Tom_Pwm_Driver *driver, boolean immediate)
{
    /* Enable channel if not enabled already */
    IfxGtm_Tom_Tgc_enableChannel(driver->tgc[0], driver->tomChannel, TRUE, immediate);
    IfxGtm_Tom_Tgc_enableChannelOutput(driver->tgc[0], driver->tomChannel, TRUE, immediate);

    /* Trigger the start now */
    IfxGtm_Tom_Tgc_trigger(driver->tgc[0]);
}


void IfxGtm_Tom_Pwm_stop(IfxGtm_Tom_Pwm_Driver *driver, boolean immediate)
{
    /* Disable channels */
    IfxGtm_Tom_Tgc_enableChannel(driver->tgc[0], driver->tomChannel, FALSE, immediate);
    IfxGtm_Tom_Tgc_enableChannelOutput(driver->tgc[0], driver->tomChannel, FALSE, immediate);

    /* Trigger the stop now */
    IfxGtm_Tom_Tgc_trigger(driver->tgc[0]);
}
