/**
 * \file IfxPmu_reg.h
 * \brief
 * \copyright Copyright (c) 2026 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC23XADAS_UM_V1.1.R0
 * Specification: tc23xadas_um_sfrs_MCSFR.xml (Revision: UM_V1.1)
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
 * \defgroup IfxLld_Pmu_Cfg Pmu address
 * \ingroup IfxLld_Pmu
 *
 * \defgroup IfxLld_Pmu_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Pmu_Cfg
 *
 * \defgroup IfxLld_Pmu_Cfg_Pmu0 2-PMU0
 * \ingroup IfxLld_Pmu_Cfg
 *
 */
#ifndef IFXPMU_REG_H
#define IFXPMU_REG_H 1
/******************************************************************************/
#include "IfxPmu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Pmu_Cfg_BaseAddress
 * \{  */

/** \brief  PMU object */
#define MODULE_PMU0 /*lint --e(923)*/ (*(Ifx_PMU *)0xF8000500u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pmu_Cfg_Pmu0
 * \{  */

/** \brief  8, PMU0 Identification Register */
#define PMU0_ID /*lint --e(923)*/ (*(volatile Ifx_PMU_ID *)0xF8000508u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXPMU_REG_H */
