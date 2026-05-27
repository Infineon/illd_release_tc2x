/**
 * \file IfxOvc_bf.h
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
 * \defgroup IfxLld_Ovc_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxLld_Ovc
 *
 */
#ifndef IFXOVC_BF_H
#define IFXOVC_BF_H                 1
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ovc_BitfieldsMask
 * \{  */

/** \brief  Length for Ifx_OVC_BLK_OMASK_Bits.OMASK */
#define IFX_OVC_BLK_OMASK_OMASK_LEN (12u)

/** \brief  Mask for Ifx_OVC_BLK_OMASK_Bits.OMASK */
#define IFX_OVC_BLK_OMASK_OMASK_MSK (0xfffu)

/** \brief  Offset for Ifx_OVC_BLK_OMASK_Bits.OMASK */
#define IFX_OVC_BLK_OMASK_OMASK_OFF (5u)

/** \brief  Length for Ifx_OVC_BLK_OMASK_Bits.ONE */
#define IFX_OVC_BLK_OMASK_ONE_LEN   (11u)

/** \brief  Mask for Ifx_OVC_BLK_OMASK_Bits.ONE */
#define IFX_OVC_BLK_OMASK_ONE_MSK   (0x7ffu)

/** \brief  Offset for Ifx_OVC_BLK_OMASK_Bits.ONE */
#define IFX_OVC_BLK_OMASK_ONE_OFF   (17u)

/** \brief  Length for Ifx_OVC_BLK_OTAR_Bits.TBASE */
#define IFX_OVC_BLK_OTAR_TBASE_LEN  (23u)

/** \brief  Mask for Ifx_OVC_BLK_OTAR_Bits.TBASE */
#define IFX_OVC_BLK_OTAR_TBASE_MSK  (0x7fffffu)

/** \brief  Offset for Ifx_OVC_BLK_OTAR_Bits.TBASE */
#define IFX_OVC_BLK_OTAR_TBASE_OFF  (5u)

/** \brief  Length for Ifx_OVC_BLK_RABR_Bits.OBASE */
#define IFX_OVC_BLK_RABR_OBASE_LEN  (17u)

/** \brief  Mask for Ifx_OVC_BLK_RABR_Bits.OBASE */
#define IFX_OVC_BLK_RABR_OBASE_MSK  (0x1ffffu)

/** \brief  Offset for Ifx_OVC_BLK_RABR_Bits.OBASE */
#define IFX_OVC_BLK_RABR_OBASE_OFF  (5u)

/** \brief  Length for Ifx_OVC_BLK_RABR_Bits.OMEM */
#define IFX_OVC_BLK_RABR_OMEM_LEN   (3u)

/** \brief  Mask for Ifx_OVC_BLK_RABR_Bits.OMEM */
#define IFX_OVC_BLK_RABR_OMEM_MSK   (0x7u)

/** \brief  Offset for Ifx_OVC_BLK_RABR_Bits.OMEM */
#define IFX_OVC_BLK_RABR_OMEM_OFF   (24u)

/** \brief  Length for Ifx_OVC_BLK_RABR_Bits.OVEN */
#define IFX_OVC_BLK_RABR_OVEN_LEN   (1u)

/** \brief  Mask for Ifx_OVC_BLK_RABR_Bits.OVEN */
#define IFX_OVC_BLK_RABR_OVEN_MSK   (0x1u)

/** \brief  Offset for Ifx_OVC_BLK_RABR_Bits.OVEN */
#define IFX_OVC_BLK_RABR_OVEN_OFF   (31u)

/** \brief  Length for Ifx_OVC_OSEL_Bits.SHOVEN0 */
#define IFX_OVC_OSEL_SHOVEN0_LEN    (1u)

/** \brief  Mask for Ifx_OVC_OSEL_Bits.SHOVEN0 */
#define IFX_OVC_OSEL_SHOVEN0_MSK    (0x1u)

/** \brief  Offset for Ifx_OVC_OSEL_Bits.SHOVEN0 */
#define IFX_OVC_OSEL_SHOVEN0_OFF    (0u)

/** \brief  Length for Ifx_OVC_OSEL_Bits.SHOVEN1 */
#define IFX_OVC_OSEL_SHOVEN1_LEN    (1u)

/** \brief  Mask for Ifx_OVC_OSEL_Bits.SHOVEN1 */
#define IFX_OVC_OSEL_SHOVEN1_MSK    (0x1u)

/** \brief  Offset for Ifx_OVC_OSEL_Bits.SHOVEN1 */
#define IFX_OVC_OSEL_SHOVEN1_OFF    (1u)

/** \brief  Length for Ifx_OVC_OSEL_Bits.SHOVEN2 */
#define IFX_OVC_OSEL_SHOVEN2_LEN    (1u)

/** \brief  Mask for Ifx_OVC_OSEL_Bits.SHOVEN2 */
#define IFX_OVC_OSEL_SHOVEN2_MSK    (0x1u)

/** \brief  Offset for Ifx_OVC_OSEL_Bits.SHOVEN2 */
#define IFX_OVC_OSEL_SHOVEN2_OFF    (2u)

/** \brief  Length for Ifx_OVC_OSEL_Bits.SHOVEN3 */
#define IFX_OVC_OSEL_SHOVEN3_LEN    (1u)

/** \brief  Mask for Ifx_OVC_OSEL_Bits.SHOVEN3 */
#define IFX_OVC_OSEL_SHOVEN3_MSK    (0x1u)

/** \brief  Offset for Ifx_OVC_OSEL_Bits.SHOVEN3 */
#define IFX_OVC_OSEL_SHOVEN3_OFF    (3u)

/** \brief  Length for Ifx_OVC_OSEL_Bits.SHOVEN4 */
#define IFX_OVC_OSEL_SHOVEN4_LEN    (1u)

/** \brief  Mask for Ifx_OVC_OSEL_Bits.SHOVEN4 */
#define IFX_OVC_OSEL_SHOVEN4_MSK    (0x1u)

/** \brief  Offset for Ifx_OVC_OSEL_Bits.SHOVEN4 */
#define IFX_OVC_OSEL_SHOVEN4_OFF    (4u)

/** \brief  Length for Ifx_OVC_OSEL_Bits.SHOVEN5 */
#define IFX_OVC_OSEL_SHOVEN5_LEN    (1u)

/** \brief  Mask for Ifx_OVC_OSEL_Bits.SHOVEN5 */
#define IFX_OVC_OSEL_SHOVEN5_MSK    (0x1u)

/** \brief  Offset for Ifx_OVC_OSEL_Bits.SHOVEN5 */
#define IFX_OVC_OSEL_SHOVEN5_OFF    (5u)

/** \brief  Length for Ifx_OVC_OSEL_Bits.SHOVEN6 */
#define IFX_OVC_OSEL_SHOVEN6_LEN    (1u)

/** \brief  Mask for Ifx_OVC_OSEL_Bits.SHOVEN6 */
#define IFX_OVC_OSEL_SHOVEN6_MSK    (0x1u)

/** \brief  Offset for Ifx_OVC_OSEL_Bits.SHOVEN6 */
#define IFX_OVC_OSEL_SHOVEN6_OFF    (6u)

/** \brief  Length for Ifx_OVC_OSEL_Bits.SHOVEN7 */
#define IFX_OVC_OSEL_SHOVEN7_LEN    (1u)

/** \brief  Mask for Ifx_OVC_OSEL_Bits.SHOVEN7 */
#define IFX_OVC_OSEL_SHOVEN7_MSK    (0x1u)

/** \brief  Offset for Ifx_OVC_OSEL_Bits.SHOVEN7 */
#define IFX_OVC_OSEL_SHOVEN7_OFF    (7u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXOVC_BF_H */
