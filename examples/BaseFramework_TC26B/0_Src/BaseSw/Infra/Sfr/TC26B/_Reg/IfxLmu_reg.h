/**
 * \file IfxLmu_reg.h
 * \brief
 * \copyright Copyright (c) 2026 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC26XB_UM_V1.2.R0
 * Specification: tc26xB_um_v1.2_MCSFR.xml (Revision: UM_V1.2)
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
 * \defgroup IfxLld_Lmu_Cfg Lmu address
 * \ingroup IfxLld_Lmu
 * 
 * \defgroup IfxLld_Lmu_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Lmu_Cfg
 * 
 * \defgroup IfxLld_Lmu_Cfg_Lmu 2-LMU
 * \ingroup IfxLld_Lmu_Cfg
 * 
 */
#ifndef IFXLMU_REG_H
#define IFXLMU_REG_H 1
/******************************************************************************/
#include "IfxLmu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_Cfg_BaseAddress
 * \{  */

/** \brief  LMU object */
#define MODULE_LMU /*lint --e(923)*/ (*(Ifx_LMU*)0xF8700800u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_Cfg_Lmu
 * \{  */

/** \brief  10, LMU Access Enable Register 0 */
#define LMU_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN0*)0xF8700810u)

/** \brief  14, LMU Access Enable Register 1 */
#define LMU_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN1*)0xF8700814u)

/** \brief  30, LMU Buffer Control Register */
#define LMU_BUFCON0 /*lint --e(923)*/ (*(volatile Ifx_LMU_BUFCON*)0xF8700830u)

/** \brief  34, LMU Buffer Control Register */
#define LMU_BUFCON1 /*lint --e(923)*/ (*(volatile Ifx_LMU_BUFCON*)0xF8700834u)

/** \brief  38, LMU Buffer Control Register */
#define LMU_BUFCON2 /*lint --e(923)*/ (*(volatile Ifx_LMU_BUFCON*)0xF8700838u)

/** \brief  0, LMU Clock Control Register */
#define LMU_CLC /*lint --e(923)*/ (*(volatile Ifx_LMU_CLC*)0xF8700800u)

/** \brief  20, LMU Memory Control Register */
#define LMU_MEMCON /*lint --e(923)*/ (*(volatile Ifx_LMU_MEMCON*)0xF8700820u)

/** \brief  8, LMU Module ID Register */
#define LMU_MODID /*lint --e(923)*/ (*(volatile Ifx_LMU_MODID*)0xF8700808u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXLMU_REG_H */
