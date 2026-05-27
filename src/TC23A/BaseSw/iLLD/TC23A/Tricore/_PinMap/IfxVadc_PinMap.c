/**
 * \file IfxVadc_PinMap.c
 * \brief VADC I/O map
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
 */

#include "IfxVadc_PinMap.h"

IfxVadc_Emux_Out IfxVadc_EMUX00_P02_6_OUT = {&MODULE_VADC, {&MODULE_P02, 6}, IfxPort_OutputIdx_alt5};
IfxVadc_Emux_Out IfxVadc_EMUX00_P33_3_OUT = {&MODULE_VADC, {&MODULE_P33, 3}, IfxPort_OutputIdx_alt5};
IfxVadc_Emux_Out IfxVadc_EMUX01_P02_7_OUT = {&MODULE_VADC, {&MODULE_P02, 7}, IfxPort_OutputIdx_alt5};
IfxVadc_Emux_Out IfxVadc_EMUX01_P33_2_OUT = {&MODULE_VADC, {&MODULE_P33, 2}, IfxPort_OutputIdx_alt5};
IfxVadc_Emux_Out IfxVadc_EMUX02_P02_8_OUT = {&MODULE_VADC, {&MODULE_P02, 8}, IfxPort_OutputIdx_alt5};
IfxVadc_Emux_Out IfxVadc_EMUX02_P33_1_OUT = {&MODULE_VADC, {&MODULE_P33, 1}, IfxPort_OutputIdx_alt5};
IfxVadc_Emux_Out IfxVadc_EMUX10_P00_6_OUT = {&MODULE_VADC, {&MODULE_P00, 6}, IfxPort_OutputIdx_alt5};
IfxVadc_Emux_Out IfxVadc_EMUX10_P33_6_OUT = {&MODULE_VADC, {&MODULE_P33, 6}, IfxPort_OutputIdx_alt5};
IfxVadc_Emux_Out IfxVadc_EMUX11_P00_7_OUT = {&MODULE_VADC, {&MODULE_P00, 7}, IfxPort_OutputIdx_alt5};
IfxVadc_Emux_Out IfxVadc_EMUX11_P33_5_OUT = {&MODULE_VADC, {&MODULE_P33, 5}, IfxPort_OutputIdx_alt5};
IfxVadc_Emux_Out IfxVadc_EMUX12_P00_8_OUT = {&MODULE_VADC, {&MODULE_P00, 8}, IfxPort_OutputIdx_alt5};
IfxVadc_Emux_Out IfxVadc_EMUX12_P33_4_OUT = {&MODULE_VADC, {&MODULE_P33, 4}, IfxPort_OutputIdx_alt5};
IfxVadc_GxBfl_Out IfxVadc_G0BFL0_P33_4_OUT = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P33, 4}, IfxPort_OutputIdx_alt6};
IfxVadc_GxBfl_Out IfxVadc_G0BFL1_P33_5_OUT = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P33, 5}, IfxPort_OutputIdx_alt6};
IfxVadc_GxBfl_Out IfxVadc_G0BFL2_P33_6_OUT = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P33, 6}, IfxPort_OutputIdx_alt6};
IfxVadc_GxBfl_Out IfxVadc_G0BFL3_P33_7_OUT = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P33, 7}, IfxPort_OutputIdx_alt6};
IfxVadc_GxBfl_Out IfxVadc_G1BFL0_P00_4_OUT = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P00, 4}, IfxPort_OutputIdx_alt5};
IfxVadc_GxBfl_Out IfxVadc_G1BFL0_P33_0_OUT = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P33, 0}, IfxPort_OutputIdx_alt6};
IfxVadc_GxBfl_Out IfxVadc_G1BFL1_P00_5_OUT = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P00, 5}, IfxPort_OutputIdx_alt5};
IfxVadc_GxBfl_Out IfxVadc_G1BFL1_P33_1_OUT = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P33, 1}, IfxPort_OutputIdx_alt6};
IfxVadc_GxBfl_Out IfxVadc_G1BFL2_P00_6_OUT = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P00, 6}, IfxPort_OutputIdx_alt3};
IfxVadc_GxBfl_Out IfxVadc_G1BFL2_P33_2_OUT = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P33, 2}, IfxPort_OutputIdx_alt6};
IfxVadc_GxBfl_Out IfxVadc_G1BFL3_P00_7_OUT = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P00, 7}, IfxPort_OutputIdx_alt3};
IfxVadc_GxBfl_Out IfxVadc_G1BFL3_P33_3_OUT = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P33, 3}, IfxPort_OutputIdx_alt6};
IfxVadc_Vadcg_In IfxVadc_G0_0_P40_0_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40, 0}, 0};
IfxVadc_Vadcg_In IfxVadc_G0_10_P40_10_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40,10}, 10};
IfxVadc_Vadcg_In IfxVadc_G0_11_P40_11_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40,11}, 11};
IfxVadc_Vadcg_In IfxVadc_G0_1_P40_1_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40, 1}, 1};
IfxVadc_Vadcg_In IfxVadc_G0_2_P40_2_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40, 2}, 2};
IfxVadc_Vadcg_In IfxVadc_G0_3_P40_3_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40, 3}, 3};
IfxVadc_Vadcg_In IfxVadc_G0_4_P40_4_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40, 4}, 4};
IfxVadc_Vadcg_In IfxVadc_G0_5_P40_5_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40, 5}, 5};
IfxVadc_Vadcg_In IfxVadc_G0_6_P40_6_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40, 6}, 6};
IfxVadc_Vadcg_In IfxVadc_G0_7_P40_7_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40, 7}, 7};
IfxVadc_Vadcg_In IfxVadc_G0_8_P40_8_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40, 8}, 8};
IfxVadc_Vadcg_In IfxVadc_G0_9_P40_9_IN = {&MODULE_VADC, IfxVadc_GroupId_0, {&MODULE_P40, 9}, 9};
IfxVadc_Vadcg_In IfxVadc_G1_0_P41_0_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41, 0}, 0};
IfxVadc_Vadcg_In IfxVadc_G1_10_P41_10_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41,10}, 10};
IfxVadc_Vadcg_In IfxVadc_G1_11_P41_11_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41,11}, 11};
IfxVadc_Vadcg_In IfxVadc_G1_1_P41_1_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41, 1}, 1};
IfxVadc_Vadcg_In IfxVadc_G1_2_P41_2_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41, 2}, 2};
IfxVadc_Vadcg_In IfxVadc_G1_3_P41_3_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41, 3}, 3};
IfxVadc_Vadcg_In IfxVadc_G1_4_P41_4_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41, 4}, 4};
IfxVadc_Vadcg_In IfxVadc_G1_5_P41_5_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41, 5}, 5};
IfxVadc_Vadcg_In IfxVadc_G1_6_P41_6_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41, 6}, 6};
IfxVadc_Vadcg_In IfxVadc_G1_7_P41_7_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41, 7}, 7};
IfxVadc_Vadcg_In IfxVadc_G1_8_P41_8_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41, 8}, 8};
IfxVadc_Vadcg_In IfxVadc_G1_9_P41_9_IN = {&MODULE_VADC, IfxVadc_GroupId_1, {&MODULE_P41, 9}, 9};


const IfxVadc_Emux_Out *IfxVadc_Emux_Out_pinTable[IFXVADC_PINMAP_NUM_MODULES][IFXVADC_PINMAP_EMUX_OUT_NUM_ITEMS] = {
    {
        &IfxVadc_EMUX10_P00_6_OUT,
        &IfxVadc_EMUX11_P00_7_OUT,
        &IfxVadc_EMUX12_P00_8_OUT,
        &IfxVadc_EMUX00_P02_6_OUT,
        &IfxVadc_EMUX01_P02_7_OUT,
        &IfxVadc_EMUX02_P02_8_OUT,
        &IfxVadc_EMUX02_P33_1_OUT,
        &IfxVadc_EMUX01_P33_2_OUT,
        &IfxVadc_EMUX00_P33_3_OUT,
        &IfxVadc_EMUX12_P33_4_OUT,
        &IfxVadc_EMUX11_P33_5_OUT,
        &IfxVadc_EMUX10_P33_6_OUT
    }
};

const IfxVadc_GxBfl_Out *IfxVadc_GxBfl_Out_pinTable[IFXVADC_PINMAP_NUM_MODULES][IFXVADC_PINMAP_NUM_GROUPS][IFXVADC_PINMAP_GXBFL_OUT_NUM_ITEMS] = {
    {
        {
            &IfxVadc_G0BFL0_P33_4_OUT,
            &IfxVadc_G0BFL1_P33_5_OUT,
            &IfxVadc_G0BFL2_P33_6_OUT,
            &IfxVadc_G0BFL3_P33_7_OUT,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR
        },
        {
            &IfxVadc_G1BFL0_P00_4_OUT,
            &IfxVadc_G1BFL1_P00_5_OUT,
            &IfxVadc_G1BFL2_P00_6_OUT,
            &IfxVadc_G1BFL3_P00_7_OUT,
            &IfxVadc_G1BFL0_P33_0_OUT,
            &IfxVadc_G1BFL1_P33_1_OUT,
            &IfxVadc_G1BFL2_P33_2_OUT,
            &IfxVadc_G1BFL3_P33_3_OUT
        }
    }
};

const IfxVadc_Vadcg_In *IfxVadc_Vadcg_In_pinTable[IFXVADC_PINMAP_NUM_MODULES][IFXVADC_PINMAP_NUM_GROUPS][IFXVADC_PINMAP_VADCG_IN_NUM_ITEMS] = {
    {
        {
            &IfxVadc_G0_0_P40_0_IN,
            &IfxVadc_G0_1_P40_1_IN,
            &IfxVadc_G0_2_P40_2_IN,
            &IfxVadc_G0_3_P40_3_IN,
            &IfxVadc_G0_4_P40_4_IN,
            &IfxVadc_G0_5_P40_5_IN,
            &IfxVadc_G0_6_P40_6_IN,
            &IfxVadc_G0_7_P40_7_IN,
            &IfxVadc_G0_8_P40_8_IN,
            &IfxVadc_G0_9_P40_9_IN,
            &IfxVadc_G0_10_P40_10_IN,
            &IfxVadc_G0_11_P40_11_IN
        },
        {
            &IfxVadc_G1_0_P41_0_IN,
            &IfxVadc_G1_1_P41_1_IN,
            &IfxVadc_G1_2_P41_2_IN,
            &IfxVadc_G1_3_P41_3_IN,
            &IfxVadc_G1_4_P41_4_IN,
            &IfxVadc_G1_5_P41_5_IN,
            &IfxVadc_G1_6_P41_6_IN,
            &IfxVadc_G1_7_P41_7_IN,
            &IfxVadc_G1_8_P41_8_IN,
            &IfxVadc_G1_9_P41_9_IN,
            &IfxVadc_G1_10_P41_10_IN,
            &IfxVadc_G1_11_P41_11_IN
        }
    }
};
