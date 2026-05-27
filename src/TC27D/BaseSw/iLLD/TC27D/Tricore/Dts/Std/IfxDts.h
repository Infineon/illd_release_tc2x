/**
 * \file IfxDts.h
 * \brief DTS  basic functionality
 * \ingroup IfxLld_Dts
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
 * \defgroup IfxLld_Dts_Std_Control Control functions
 * \ingroup IfxLld_Dts_Std
 * \defgroup IfxLld_Dts_Std_Status Status functions
 * \ingroup IfxLld_Dts_Std
 */

#ifndef IFXDTS_H
#define IFXDTS_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxDts_cfg.h"
#include "IfxScu_reg.h"
#include "IfxScu_bf.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "Src/Std/IfxSrc.h"

/** \addtogroup IfxLld_Dts_Std_Control
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Disable the writing of register bits except START bit.
 * \return None
 */
IFX_INLINE void IfxDts_disableSensorControl(void);

/** \brief Enables the DTS sensor
 * \return None
 */
IFX_INLINE void IfxDts_enableSensor(void);

/** \brief Starts the next temperature measurement.
 * \return None
 */
IFX_INLINE void IfxDts_startSensor(void);

/** \} */

/** \addtogroup IfxLld_Dts_Std_Status
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Gets the Interrupt request source.
 * \return Address of interrupt request source
 */
IFX_INLINE volatile Ifx_SRC_SRCR *IfxDts_getSrcPointer(void);

/** \brief Read the temperature measurement result
 * \return Temperature measurement result
 */
IFX_INLINE uint16 IfxDts_getTemperatureValue(void);

/** \brief Returns the current BUSY status of the Sensor
 * \return TRUE if Sensor is busy in measuring temperature otherwise FALSE
 */
IFX_INLINE boolean IfxDts_isBusy(void);

/** \} */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the current READY status of the Sensor.
 * \return TRUE if Sensor is ready for measuring temperature otherwise FALSE
 */
IFX_EXTERN boolean IfxDts_isReady(void);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE void IfxDts_disableSensorControl(void)
{
    MODULE_SCU.DTSCON.B.SLCK = 1;
    MODULE_SCU.DTSLIM.B.SLCK = 1;
}


IFX_INLINE void IfxDts_enableSensor(void)
{
    MODULE_SCU.DTSCON.B.PWD = 0;
}


IFX_INLINE volatile Ifx_SRC_SRCR *IfxDts_getSrcPointer(void)
{
    return &SRC_SCUDTS;
}


IFX_INLINE uint16 IfxDts_getTemperatureValue(void)
{
    return (uint16)MODULE_SCU.DTSSTAT.B.RESULT;
}


IFX_INLINE boolean IfxDts_isBusy(void)
{
    return MODULE_SCU.DTSSTAT.B.BUSY == 1 ? TRUE : FALSE;
}


IFX_INLINE void IfxDts_startSensor(void)
{
    MODULE_SCU.DTSCON.B.START = 1;
}


#endif /* IFXDTS_H */
