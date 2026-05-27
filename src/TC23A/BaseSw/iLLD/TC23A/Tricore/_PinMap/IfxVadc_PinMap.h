/**
 * \file IfxVadc_PinMap.h
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
 * \defgroup IfxLld_Vadc_pinmap VADC Pin Mapping
 * \ingroup IfxLld_Vadc
 */

#ifndef IFXVADC_PINMAP_H
#define IFXVADC_PINMAP_H

#include <IfxVadc_reg.h>
#include <_Impl/IfxVadc_cfg.h>
#include <Port/Std/IfxPort.h>
#include "Ifx_PinMap.h"

/** \addtogroup IfxLld_Vadc_pinmap
 * \{ */

/** \brief VADC Boundary Flag pin mapping structure */
typedef const struct
{
    Ifx_VADC*         module;    /**< \brief Base address */
    IfxVadc_GroupId   groupId;   /**< \brief Group ID */
    IfxPort_Pin       pin;       /**< \brief Port pin */
    IfxPort_OutputIdx select;    /**< \brief Port control code */
} IfxVadc_GxBfl_Out;

/** \brief VADC External Mux pin mapping structure */
typedef const struct
{
    Ifx_VADC*         module;    /**< \brief Base address */
    IfxPort_Pin       pin;       /**< \brief Port pin */
    IfxPort_OutputIdx select;    /**< \brief Port control code */
} IfxVadc_Emux_Out;

/** \brief VADC Analog Input */
typedef const struct
{
    Ifx_VADC*         module;    /**< \brief Base address */
    IfxVadc_GroupId   groupId;   /**< \brief Group ID */
    IfxPort_Pin       pin;       /**< \brief Port pin */
    uint8             channelId; /**< \brief Channel ID */
} IfxVadc_Vadcg_In;

IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX00_P02_6_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX00_P33_3_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX01_P02_7_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX01_P33_2_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX02_P02_8_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX02_P33_1_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX10_P00_6_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX10_P33_6_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX11_P00_7_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX11_P33_5_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX12_P00_8_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Emux_Out IfxVadc_EMUX12_P33_4_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G0BFL0_P33_4_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G0BFL1_P33_5_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G0BFL2_P33_6_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G0BFL3_P33_7_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G1BFL0_P00_4_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G1BFL0_P33_0_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G1BFL1_P00_5_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G1BFL1_P33_1_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G1BFL2_P00_6_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G1BFL2_P33_2_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G1BFL3_P00_7_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_GxBfl_Out IfxVadc_G1BFL3_P33_3_OUT;  /**< \brief VADC output */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_0_P40_0_IN;  /**< \brief VADC input channel 0 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_10_P40_10_IN;  /**< \brief VADC input channel 10 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_11_P40_11_IN;  /**< \brief VADC input channel 11 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_1_P40_1_IN;  /**< \brief VADC input channel 1 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_2_P40_2_IN;  /**< \brief VADC input channel 2 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_3_P40_3_IN;  /**< \brief VADC input channel 3 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_4_P40_4_IN;  /**< \brief VADC input channel 4 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_5_P40_5_IN;  /**< \brief VADC input channel 5 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_6_P40_6_IN;  /**< \brief VADC input channel 6 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_7_P40_7_IN;  /**< \brief VADC input channel 7 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_8_P40_8_IN;  /**< \brief VADC input channel 8 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G0_9_P40_9_IN;  /**< \brief VADC input channel 9 of group 0 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_0_P41_0_IN;  /**< \brief VADC input channel 0 of group 1 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_10_P41_10_IN;  /**< \brief VADC input channel 10 of group 1 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_11_P41_11_IN;  /**< \brief VADC input channel 11 of group 1 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_1_P41_1_IN;  /**< \brief VADC input channel 1 of group 1 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_2_P41_2_IN;  /**< \brief VADC input channel 2 of group 1 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_3_P41_3_IN;  /**< \brief VADC input channel 3 of group 1 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_4_P41_4_IN;  /**< \brief VADC input channel 4 of group 1 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_5_P41_5_IN;  /**< \brief VADC input channel 5 of group 1 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_6_P41_6_IN;  /**< \brief VADC input channel 6 of group 1 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_7_P41_7_IN;  /**< \brief VADC input channel 7 of group 1 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_8_P41_8_IN;  /**< \brief VADC input channel 8 of group 1 */
IFX_EXTERN IfxVadc_Vadcg_In IfxVadc_G1_9_P41_9_IN;  /**< \brief VADC input channel 9 of group 1 */

/** \brief Table dimensions */
#define IFXVADC_PINMAP_NUM_MODULES 1
#define IFXVADC_PINMAP_NUM_GROUPS 2
#define IFXVADC_PINMAP_EMUX_OUT_NUM_ITEMS 12
#define IFXVADC_PINMAP_GXBFL_OUT_NUM_ITEMS 8
#define IFXVADC_PINMAP_VADCG_IN_NUM_ITEMS 12


/** \brief IfxVadc_Emux_Out table */
IFX_EXTERN const IfxVadc_Emux_Out *IfxVadc_Emux_Out_pinTable[IFXVADC_PINMAP_NUM_MODULES][IFXVADC_PINMAP_EMUX_OUT_NUM_ITEMS];

/** \brief IfxVadc_GxBfl_Out table */
IFX_EXTERN const IfxVadc_GxBfl_Out *IfxVadc_GxBfl_Out_pinTable[IFXVADC_PINMAP_NUM_MODULES][IFXVADC_PINMAP_NUM_GROUPS][IFXVADC_PINMAP_GXBFL_OUT_NUM_ITEMS];

/** \brief IfxVadc_Vadcg_In table */
IFX_EXTERN const IfxVadc_Vadcg_In *IfxVadc_Vadcg_In_pinTable[IFXVADC_PINMAP_NUM_MODULES][IFXVADC_PINMAP_NUM_GROUPS][IFXVADC_PINMAP_VADCG_IN_NUM_ITEMS];

/** \} */

#endif /* IFXVADC_PINMAP_H */
