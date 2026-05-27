/**
 * \file IfxFft_reg.h
 * \brief
 * \copyright Copyright (c) 2026 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC29XB_UM_V1.3.R0
 * Specification: tc29xB_um_v1.3_MCSFR.xml (Revision: UM_V1.3)
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
 * \defgroup IfxLld_Fft_Cfg Fft address
 * \ingroup IfxLld_Fft
 * 
 * \defgroup IfxLld_Fft_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Fft_Cfg
 * 
 * \defgroup IfxLld_Fft_Cfg_Fft 2-FFT
 * \ingroup IfxLld_Fft_Cfg
 * 
 */
#ifndef IFXFFT_REG_H
#define IFXFFT_REG_H 1
/******************************************************************************/
#include "IfxFft_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Fft_Cfg_BaseAddress
 * \{  */

/** \brief  FFT object */
#define MODULE_FFT /*lint --e(923)*/ (*(Ifx_FFT*)0xF8700C00u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Fft_Cfg_Fft
 * \{  */

/** \brief  0, FFT Clock Control Register */
#define FFT_CLC /*lint --e(923)*/ (*(volatile Ifx_FFT_CLC*)0xF8700C00u)

/** \brief  40, FFT Control and Status Register */
#define FFT_CSR /*lint --e(923)*/ (*(volatile Ifx_FFT_CSR*)0xF8700C40u)

/** \brief  60, FFT History0 Register */
#define FFT_HISTORY0 /*lint --e(923)*/ (*(volatile Ifx_FFT_HISTORY0*)0xF8700C60u)

/** \brief  70, FFT History1 Register */
#define FFT_HISTORY1 /*lint --e(923)*/ (*(volatile Ifx_FFT_HISTORY1*)0xF8700C70u)

/** \brief  8, FFT Identification Register */
#define FFT_ID /*lint --e(923)*/ (*(volatile Ifx_FFT_ID*)0xF8700C08u)

/** \brief  F4, FFT Kernel Reset Register 0 */
#define FFT_KRST0 /*lint --e(923)*/ (*(volatile Ifx_FFT_KRST0*)0xF8700CF4u)

/** \brief  F0, FFT Kernel Reset Register 1 */
#define FFT_KRST1 /*lint --e(923)*/ (*(volatile Ifx_FFT_KRST1*)0xF8700CF0u)

/** \brief  EC, FFT Kernel Reset Status Clear Register */
#define FFT_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_FFT_KRSTCLR*)0xF8700CECu)

/** \brief  E8, FFT OCDS Control and Status */
#define FFT_OCS /*lint --e(923)*/ (*(volatile Ifx_FFT_OCS*)0xF8700CE8u)

/** \brief  E4, FFT OCDS Debug Access Register */
#define FFT_ODA /*lint --e(923)*/ (*(volatile Ifx_FFT_ODA*)0xF8700CE4u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXFFT_REG_H */
