/**
 * \file IfxDsadc_cfg.h
 * \brief DSADC on-chip implementation data.
 *
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

#ifndef IFXDSADC_CFG_H_
#define IFXDSADC_CFG_H_

#include "IfxDsadc_reg.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"

/** \brief Number of channels -- NOTE: only channel 0 and 3 are implemented! */
#define IFXDSADC_NUM_CHANNELS  (4)

/** \brief DSADC channel resources definition. */
typedef enum
{
    IfxDsadc_ChannelId_0 = 0,   /**< DSADC Channel 0 */
    IfxDsadc_ChannelId_3 = 3,   /**< DSADC Channel 3 */
} IfxDsadc_ChannelId;

#endif /* IFXDSADC_CFG_H_ */
