/**
 * \file Ifx_TypesReg.h
 * \brief
 * \copyright Copyright (c) 2026 Infineon Technologies AG. All rights reserved.
 *
 * Version: IFXREGTYPES_V1.0.R0
 *
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
 */

#ifndef IFX_TYPESREG_H
#define IFX_TYPESREG_H 1
/******************************************************************************/

#if defined(__TASKING__)
#define Ifx_Strict_16Bit unsigned __sfrbit16
#define Ifx_Strict_32Bit unsigned __sfrbit32
#elif defined(__HIGHTEC__)
#define Ifx_Strict_16Bit volatile unsigned short
#define Ifx_Strict_32Bit volatile unsigned int
#elif defined(__GNUC__) && !defined(__HIGHTEC__)
#define Ifx_Strict_16Bit volatile unsigned short
#define Ifx_Strict_32Bit volatile unsigned int
#elif defined(__DCC__)
#define Ifx_Strict_16Bit unsigned short
#define Ifx_Strict_32Bit unsigned int
#elif defined(__ghs__)
#define Ifx_Strict_16Bit volatile unsigned short
#define Ifx_Strict_32Bit volatile unsigned int
#endif

/*Backward Compatibility Macros for VADC registers*/
#define Ifx_VADC_RES	Ifx_VADC_G_RES
#define Ifx_VADC_RESD	Ifx_VADC_G_RESD
#define Ifx_VADC_CHCTR	Ifx_VADC_G_CHCTR
#define Ifx_VADC_RCR 	Ifx_VADC_G_RCR

/******************************************************************************/
#endif /* IFX_TYPESREG_H */
