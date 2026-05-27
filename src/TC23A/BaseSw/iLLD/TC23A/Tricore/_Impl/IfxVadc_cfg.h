/**
 * \file IfxVadc_cfg.h
 * \brief VADC on-chip implementation data 
 * \ingroup IfxLld_Vadc 
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
 * \defgroup IfxLld_Vadc VADC
 * \ingroup IfxLld
 * \defgroup IfxLld_Vadc_Impl Implementation
 * \ingroup IfxLld_Vadc
 * \defgroup IfxLld_Vadc_Std Standard Driver
 * \ingroup IfxLld_Vadc
 */

#ifndef IFXVADC_CFG_H
#define IFXVADC_CFG_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "Src/Std/IfxSrc.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/** \brief Number of ADC Groups 
 */
#define IFXVADC_NUM_ADC_GROUPS (2)
                
/** \brief Number of calibrated ADC Groups 
 */
#define IFXVADC_NUM_ADC_CAL_GROUPS (2 )
                
/** \brief Maximum allowed analog frequency 
 */
#define IFXVADC_ANALOG_FREQUENCY_MAX (20000000)
                
/** \brief Minimum allowed analog frequency 
 */
#define IFXVADC_ANALOG_FREQUENCY_MIN (2000000)
                
/** \brief Default analog frequency used in initModuleConfig function 
 */
#define IFXVADC_DEFAULT_ANALOG_FREQ (20000000)
                
/** \brief Number of Conversion request Slots 
 */
#define IFXVADC_NUM_REQUESTSLOTS (3)
                
/** \brief Number of group specific Input Class 
 */
#define IFXVADC_NUM_INPUTCLASSES (2)
                
/** \brief Maximum number of configurable bitfields in ACCPROT0 register 
 */
#define IFXVADC_MAXIMUM_BITFIELDS_IN_ACCPROT0_REGISTER (32)
                
#define IFXVADC_QUEUE_REFILL (1 << IFX_VADC_G_QBUR0_RF_OFF)
                
/** \brief Number of ADC group input classes. 
 */
#define IFXVADC_NUM_GLOBAL_INPUTCLASSES (2)
                
#define IFXVADC_NUM_ADC_COMMON_GROUPS (1)
                
#define IFXVADC_SAMPLETIME_MIN (2)
                
#define IFXVADC_NUM_EMUX_INTERFACE (2)
                
#define IFXVADC_NUM_MODULES (1)
                


/******************************************************************************/
/*-------------------------------Enumerations---------------------------------*/
/******************************************************************************/

/** \brief VADC Groups  
 */
typedef enum
{
    IfxVadc_GroupId_0,           /**< \brief VADC group 0  */
    IfxVadc_GroupId_1,           /**< \brief VADC group 1  */
    IfxVadc_GroupId_global0,     /**< \brief VADC group global0  */
    IfxVadc_GroupId_global1      /**< \brief VADC group global1  */
} IfxVadc_GroupId;


/******************************************************************************/
/*-------------------Global Exported Variables/Constants----------------------*/
/******************************************************************************/

IFX_EXTERN IFX_CONST uint32 IfxVadc_cfg_srcAddresses[(IFXVADC_NUM_ADC_GROUPS *4) + (IFXVADC_NUM_ADC_COMMON_GROUPS * 4) ];


#endif /* IFXVADC_CFG_H */
