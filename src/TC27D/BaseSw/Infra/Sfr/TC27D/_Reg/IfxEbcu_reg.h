/**
 * \file IfxEbcu_reg.h
 * \brief
 * \copyright Copyright (c) 2026 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC2XXED_TS_V1.0.R2
 * Specification: AurixED_TS_V1.0_CPU_VIEW_SFR.xml (Revision: V1.0)
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
 * \defgroup IfxLld_Ebcu_Cfg Ebcu address
 * \ingroup IfxLld_Ebcu
 * 
 * \defgroup IfxLld_Ebcu_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Ebcu_Cfg
 * 
 * \defgroup IfxLld_Ebcu_Cfg_Ebcu0 2-EBCU0
 * \ingroup IfxLld_Ebcu_Cfg
 * 
 */
#ifndef IFXEBCU_REG_H
#define IFXEBCU_REG_H 1
/******************************************************************************/
#include "IfxEbcu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Ebcu_Cfg_BaseAddress
 * \{  */

/** \brief  EBCU object */
#define MODULE_EBCU0 /*lint --e(923)*/ (*(Ifx_EBCU*)0xF90E0100u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ebcu_Cfg_Ebcu0
 * \{  */

/** \brief  FC, Access Enable Register 0 */
#define EBCU0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ACCEN0*)0xF90E01FCu)

/** Alias (User Manual Name) for EBCU0_ACCEN0.
* To use register names with standard convension, please use EBCU0_ACCEN0.
*/
#define	EBCU_ACCEN0	(EBCU0_ACCEN0)

/** \brief  F8, Access Enable Register 1 */
#define EBCU0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ACCEN1*)0xF90E01F8u)

/** Alias (User Manual Name) for EBCU0_ACCEN1.
* To use register names with standard convension, please use EBCU0_ACCEN1.
*/
#define	EBCU_ACCEN1	(EBCU0_ACCEN1)

/** \brief  10, EBCU Control Register */
#define EBCU0_CON /*lint --e(923)*/ (*(volatile Ifx_EBCU_CON*)0xF90E0110u)

/** Alias (User Manual Name) for EBCU0_CON.
* To use register names with standard convension, please use EBCU0_CON.
*/
#define	EBCU_CON	(EBCU0_CON)

/** \brief  24, Error Address Capture Register */
#define EBCU0_EADD /*lint --e(923)*/ (*(volatile Ifx_EBCU_EADD*)0xF90E0124u)

/** Alias (User Manual Name) for EBCU0_EADD.
* To use register names with standard convension, please use EBCU0_EADD.
*/
#define	EBCU_EADD	(EBCU0_EADD)

/** \brief  20, Error Control Capture Register */
#define EBCU0_ECON /*lint --e(923)*/ (*(volatile Ifx_EBCU_ECON*)0xF90E0120u)

/** Alias (User Manual Name) for EBCU0_ECON.
* To use register names with standard convension, please use EBCU0_ECON.
*/
#define	EBCU_ECON	(EBCU0_ECON)

/** \brief  28, Error Data Capture Register */
#define EBCU0_EDAT /*lint --e(923)*/ (*(volatile Ifx_EBCU_EDAT*)0xF90E0128u)

/** Alias (User Manual Name) for EBCU0_EDAT.
* To use register names with standard convension, please use EBCU0_EDAT.
*/
#define	EBCU_EDAT	(EBCU0_EDAT)

/** \brief  8, Module Identification Register */
#define EBCU0_ID /*lint --e(923)*/ (*(volatile Ifx_EBCU_ID*)0xF90E0108u)

/** Alias (User Manual Name) for EBCU0_ID.
* To use register names with standard convension, please use EBCU0_ID.
*/
#define	EBCU_ID	(EBCU0_ID)

/** \brief  14, Arbiter Priority Register */
#define EBCU0_PRIOH /*lint --e(923)*/ (*(volatile Ifx_EBCU_PRIOH*)0xF90E0114u)

/** Alias (User Manual Name) for EBCU0_PRIOH.
* To use register names with standard convension, please use EBCU0_PRIOH.
*/
#define	EBCU_PRIOH	(EBCU0_PRIOH)

/** \brief  18, Arbiter Priority Register */
#define EBCU0_PRIOL /*lint --e(923)*/ (*(volatile Ifx_EBCU_PRIOL*)0xF90E0118u)

/** Alias (User Manual Name) for EBCU0_PRIOL.
* To use register names with standard convension, please use EBCU0_PRIOL.
*/
#define	EBCU_PRIOL	(EBCU0_PRIOL)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEBCU_REG_H */
