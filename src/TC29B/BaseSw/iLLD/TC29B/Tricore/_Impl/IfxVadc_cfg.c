/**
 * \file IfxVadc_cfg.c
 * \brief VADC on-chip implementation data
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

#include "IfxVadc_cfg.h"

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

IFX_CONST uint32 IfxVadc_cfg_srcAddresses[(IFXVADC_NUM_ADC_GROUPS * 4) + (IFXVADC_NUM_ADC_COMMON_GROUPS * 4)] = {
    (uint32)&SRC_VADC_G0_SR0,
    (uint32)&SRC_VADC_G0_SR1,
    (uint32)&SRC_VADC_G0_SR2,
    (uint32)&SRC_VADC_G0_SR3,
    (uint32)&SRC_VADC_G1_SR0,
    (uint32)&SRC_VADC_G1_SR1,
    (uint32)&SRC_VADC_G1_SR2,
    (uint32)&SRC_VADC_G1_SR3,
    (uint32)&SRC_VADC_G2_SR0,
    (uint32)&SRC_VADC_G2_SR1,
    (uint32)&SRC_VADC_G2_SR2,
    (uint32)&SRC_VADC_G2_SR3,
    (uint32)&SRC_VADC_G3_SR0,
    (uint32)&SRC_VADC_G3_SR1,
    (uint32)&SRC_VADC_G3_SR2,
    (uint32)&SRC_VADC_G3_SR3,
    (uint32)&SRC_VADC_G4_SR0,
    (uint32)&SRC_VADC_G4_SR1,
    (uint32)&SRC_VADC_G4_SR2,
    (uint32)&SRC_VADC_G4_SR3,
    (uint32)&SRC_VADC_G5_SR0,
    (uint32)&SRC_VADC_G5_SR1,
    (uint32)&SRC_VADC_G5_SR2,
    (uint32)&SRC_VADC_G5_SR3,
    (uint32)&SRC_VADC_G6_SR0,
    (uint32)&SRC_VADC_G6_SR1,
    (uint32)&SRC_VADC_G6_SR2,
    (uint32)&SRC_VADC_G6_SR3,
    (uint32)&SRC_VADC_G7_SR0,
    (uint32)&SRC_VADC_G7_SR1,
    (uint32)&SRC_VADC_G7_SR2,
    (uint32)&SRC_VADC_G7_SR3,
    (uint32)&SRC_VADC_G8_SR0,
    (uint32)&SRC_VADC_G8_SR1,
    (uint32)&SRC_VADC_G8_SR2,
    (uint32)&SRC_VADC_G8_SR3,
    (uint32)&SRC_VADC_G9_SR0,
    (uint32)&SRC_VADC_G9_SR1,
    (uint32)&SRC_VADC_G9_SR2,
    (uint32)&SRC_VADC_G9_SR3,
    (uint32)&SRC_VADC_G10_SR0,
    (uint32)&SRC_VADC_G10_SR1,
    (uint32)&SRC_VADC_G10_SR2,
    (uint32)&SRC_VADC_G10_SR3,
    (uint32)&SRC_VADC_CG0_SR0,
    (uint32)&SRC_VADC_CG0_SR1,
    (uint32)&SRC_VADC_CG0_SR2,
    (uint32)&SRC_VADC_CG0_SR3,
    (uint32)&SRC_VADC_CG1_SR0,
    (uint32)&SRC_VADC_CG1_SR1,
    (uint32)&SRC_VADC_CG1_SR2,
    (uint32)&SRC_VADC_CG1_SR3
};
