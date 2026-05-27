/**
 * \file IfxEmem_reg.h
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
 * \defgroup IfxLld_Emem_Cfg Emem address
 * \ingroup IfxLld_Emem
 *
 * \defgroup IfxLld_Emem_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Emem_Cfg
 *
 * \defgroup IfxLld_Emem_Cfg_Emem 2-EMEM
 * \ingroup IfxLld_Emem_Cfg
 *
 */
#ifndef IFXEMEM_REG_H
#define IFXEMEM_REG_H 1
/******************************************************************************/
#include "IfxEmem_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Emem_Cfg_BaseAddress
 * \{  */

/** \brief  EMEM object */
#define MODULE_EMEM /*lint --e(923)*/ (*(Ifx_EMEM *)0xF90E6000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Emem_Cfg_Emem
 * \{  */

/** \brief  0, Clock Control Register */
#define EMEM_CLC        /*lint --e(923)*/ (*(volatile Ifx_EMEM_CLC *)0xF90E6000u)

/** \brief  8, Module Identification Register */
#define EMEM_ID         /*lint --e(923)*/ (*(volatile Ifx_EMEM_ID *)0xF90E6008u)

/** \brief  34, Standby RAM Control Register */
#define EMEM_SBRCTR     /*lint --e(923)*/ (*(volatile Ifx_EMEM_SBRCTR *)0xF90E6034u)

/** \brief  20, Tile Configuration Register */
#define EMEM_TILECONFIG /*lint --e(923)*/ (*(volatile Ifx_EMEM_TILECONFIG *)0xF90E6020u)

/** \brief  2C, Tile Status Register */
#define EMEM_TILESTATE  /*lint --e(923)*/ (*(volatile Ifx_EMEM_TILESTATE *)0xF90E602Cu)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEMEM_REG_H */
