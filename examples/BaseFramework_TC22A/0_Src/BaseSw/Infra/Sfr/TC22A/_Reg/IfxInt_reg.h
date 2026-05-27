/**
 * \file IfxInt_reg.h
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
 * \defgroup IfxLld_Int_Cfg Int address
 * \ingroup IfxLld_Int
 *
 * \defgroup IfxLld_Int_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Int_Cfg
 *
 * \defgroup IfxLld_Int_Cfg_Int 2-INT
 * \ingroup IfxLld_Int_Cfg
 *
 */
#ifndef IFXINT_REG_H
#define IFXINT_REG_H 1
/******************************************************************************/
#include "IfxInt_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Int_Cfg_BaseAddress
 * \{  */

/** \brief  Interrupt router object */
#define MODULE_INT /*lint --e(923)*/ (*(Ifx_INT *)0xF0037000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Int_Cfg_Int
 * \{  */

/** \brief  F4, Access Enable Register 0 */
#define INT_ACCEN00  /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN00 *)0xF00370F4u)

/** \brief  F0, Kernel 0 Access Enable Register 1 */
#define INT_ACCEN01  /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN01 *)0xF00370F0u)

/** \brief  FC, Kernel 1 Access Enable Register 0 */
#define INT_ACCEN10  /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN10 *)0xF00370FCu)

/** \brief  F8, Kernel 1 Access Enable Register 1 */
#define INT_ACCEN11  /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN11 *)0xF00370F8u)

/** \brief  108, Error Capture Register */
#define INT_CH0_ECR  /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_ECR *)0xF0037108u)

/** Alias (User Manual Name) for INT_CH0_ECR.
 * To use register names with standard convension, please use INT_CH0_ECR.
 */
#define INT_ECR0     (INT_CH0_ECR)

/** \brief  104, Last Acknowledged Service Request Register */
#define INT_CH0_LASR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LASR *)0xF0037104u)

/** Alias (User Manual Name) for INT_CH0_LASR.
 * To use register names with standard convension, please use INT_CH0_LASR.
 */
#define INT_LASR0    (INT_CH0_LASR)

/** \brief  100, Latest Winning Service Request Register */
#define INT_CH0_LWSR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LWSR *)0xF0037100u)

/** Alias (User Manual Name) for INT_CH0_LWSR.
 * To use register names with standard convension, please use INT_CH0_LWSR.
 */
#define INT_LWSR0    (INT_CH0_LWSR)

/** \brief  118, Error Capture Register */
#define INT_CH1_ECR  /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_ECR *)0xF0037118u)

/** Alias (User Manual Name) for INT_CH1_ECR.
 * To use register names with standard convension, please use INT_CH1_ECR.
 */
#define INT_ECR1     (INT_CH1_ECR)

/** \brief  114, Last Acknowledged Service Request Register */
#define INT_CH1_LASR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LASR *)0xF0037114u)

/** Alias (User Manual Name) for INT_CH1_LASR.
 * To use register names with standard convension, please use INT_CH1_LASR.
 */
#define INT_LASR1    (INT_CH1_LASR)

/** \brief  110, Latest Winning Service Request Register */
#define INT_CH1_LWSR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LWSR *)0xF0037110u)

/** Alias (User Manual Name) for INT_CH1_LWSR.
 * To use register names with standard convension, please use INT_CH1_LWSR.
 */
#define INT_LWSR1    (INT_CH1_LWSR)

/** \brief  8, Module Identification Register */
#define INT_ID       /*lint --e(923)*/ (*(volatile Ifx_INT_ID *)0xF0037008u)

/** \brief  A0, OTGM IRQ Trace */
#define INT_OIT      /*lint --e(923)*/ (*(volatile Ifx_INT_OIT *)0xF00370A0u)

/** \brief  8C, OTGM IRQ MUX Missed IRQ Select */
#define INT_OIXMS    /*lint --e(923)*/ (*(volatile Ifx_INT_OIXMS *)0xF003708Cu)

/** \brief  90, OTGM IRQ MUX Select 0 */
#define INT_OIXS0    /*lint --e(923)*/ (*(volatile Ifx_INT_OIXS0 *)0xF0037090u)

/** \brief  94, OTGM IRQ MUX Select 1 */
#define INT_OIXS1    /*lint --e(923)*/ (*(volatile Ifx_INT_OIXS1 *)0xF0037094u)

/** \brief  88, OTGM IRQ MUX Trigger Set Select */
#define INT_OIXTS    /*lint --e(923)*/ (*(volatile Ifx_INT_OIXTS *)0xF0037088u)

/** \brief  A8, OTGM MCDS I/F Sensitivity Negedge */
#define INT_OMISN    /*lint --e(923)*/ (*(volatile Ifx_INT_OMISN *)0xF00370A8u)

/** \brief  A4, OTGM MCDS I/F Sensitivity Posedge */
#define INT_OMISP    /*lint --e(923)*/ (*(volatile Ifx_INT_OMISP *)0xF00370A4u)

/** \brief  80, OTGM OTGB0/1 Status */
#define INT_OOBS     /*lint --e(923)*/ (*(volatile Ifx_INT_OOBS *)0xF0037080u)

/** \brief  84, OTGM SSI Control */
#define INT_OSSIC    /*lint --e(923)*/ (*(volatile Ifx_INT_OSSIC *)0xF0037084u)

/** \brief  10, Service Request Broadcast Register 0 */
#define INT_SRB0     /*lint --e(923)*/ (*(volatile Ifx_INT_SRB0 *)0xF0037010u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXINT_REG_H */
