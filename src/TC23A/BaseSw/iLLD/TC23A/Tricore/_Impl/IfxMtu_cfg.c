/**
 * \file IfxMtu_cfg.c
 * \brief Mtu on-chip implementation data
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
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxMtu_cfg.h"

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

const IfxMtu_SramItem IfxMtu_sramTable[IFXMTU_NUM_MBIST_TABLE_ITEMS] = {
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 128, 9, 0, 1, 256 }, /**< \brief IfxMtu_MbistSel_miniMcds */
    {2 * 8, 16,  6, 0, 1, 5888}, /**< \brief IfxMtu_MbistSel_cpu0Dspr */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 32,  8, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_cpu0Pspr */
    {2 * 1, 20,  5, 0, 1, 128 }, /**< \brief IfxMtu_MbistSel_cpu0Ptag */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 35,  7, 0, 1, 1024}, /**< \brief IfxMtu_MbistSel_ethermac */
    {1 * 4, 32,  7, 5, 6, 256 }, /**< \brief IfxMtu_MbistSel_mod1 */
    {1 * 4, 24,  6, 0, 1, 64  }, /**< \brief IfxMtu_MbistSel_mod2 */
    {1 * 2, 32,  7, 5, 6, 3072}, /**< \brief IfxMtu_MbistSel_mod3 */
    {1 * 1, 64,  8, 0, 1, 4096}, /**< \brief IfxMtu_MbistSel_mod4 */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 32,  7, 5, 6, 2048}, /**< \brief IfxMtu_MbistSel_mcan */
    {1 * 1, 32,  7, 5, 6, 2048}, /**< \brief IfxMtu_MbistSel_mcan1 */
    {1 * 2, 32,  7, 5, 6, 64  }, /**< \brief IfxMtu_MbistSel_erayObf */
    {1 * 4, 32,  7, 5, 6, 128 }, /**< \brief IfxMtu_MbistSel_erayIbfTbf */
    {1 * 1, 32,  7, 5, 6, 4096}, /**< \brief IfxMtu_MbistSel_erayMbf */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 4, 32,  8, 0, 1, 1024}, /**< \brief IfxMtu_MbistSel_mcds */
    {1 * 2, 128, 9, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_emem0 */
    {1 * 2, 128, 9, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_emem1 */
    {1 * 2, 128, 9, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_emem2 */
    {1 * 2, 128, 9, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_emem3 */
    {1 * 2, 128, 9, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_emem4 */
    {1 * 2, 128, 9, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_emem5 */
    {1 * 2, 128, 9, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_emem6 */
    {1 * 2, 128, 9, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_emem7 */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 64,  8, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_lmu */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 128, 9, 0, 1, 256 }, /**< \brief IfxMtu_MbistSel_ememXtm0 */
    {1 * 2, 128, 9, 0, 1, 256 }, /**< \brief IfxMtu_MbistSel_ememXtm1 */
    {1 * 4, 64,  8, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_fft0 */
    {1 * 1, 16,  6, 0, 1, 1024}, /**< \brief IfxMtu_MbistSel_fft1 */
};
