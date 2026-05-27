/**
 * \file IfxPmu_regdef.h
 * \brief
 * \copyright Copyright (c) 2026 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC22X_UM_V1.1.R0
 * Specification: tc22x_um_sfrs_MCSFR.xml (Revision: UM_V1.1)
 * MAY BE CHANGED BY USER [yes/no]: No
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
 * \defgroup IfxLld_Pmu Pmu
 * \ingroup IfxLld
 *
 * \defgroup IfxLld_Pmu_Bitfields Bitfields
 * \ingroup IfxLld_Pmu
 *
 * \defgroup IfxLld_Pmu_union Union
 * \ingroup IfxLld_Pmu
 *
 * \defgroup IfxLld_Pmu_struct Struct
 * \ingroup IfxLld_Pmu
 *
 */
#ifndef IFXPMU_REGDEF_H
#define IFXPMU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Pmu_Bitfields
 * \{  */

/** \brief  PMU0 Identification Register */
typedef struct _Ifx_PMU_ID_Bits
{
    unsigned int MODREV : 8;                  /**< \brief [7:0] Module Revision Number (r) */
    unsigned int MODTYPE : 8;                 /**< \brief [15:8] Module Type (r) */
    unsigned int MODNUMBER : 16;              /**< \brief [31:16] Module Number Value (r) */
} Ifx_PMU_ID_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pmu_union
 * \{  */

/** \brief  PMU0 Identification Register */
typedef union
{
    unsigned int    U;                      /**< \brief Unsigned access */
    signed int      I;                      /**< \brief Signed access */
    Ifx_PMU_ID_Bits B;                      /**< \brief Bitfield access */
} Ifx_PMU_ID;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pmu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief  PMU object */
typedef volatile struct _Ifx_PMU
{
    unsigned char reserved_0[8];            /**< \brief 0, \internal Reserved */
    Ifx_PMU_ID    ID;                       /**< \brief 8, PMU0 Identification Register */
    unsigned char reserved_C[245];          /**< \brief C, \internal Reserved */
} Ifx_PMU;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXPMU_REGDEF_H */
