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
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 4, 16, 6, 0, 1, 5632}, /**< \brief IfxMtu_MbistSel_cpu0Dspr */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 32, 8, 0, 1, 2048}, /**< \brief IfxMtu_MbistSel_cpu0Pspr */
    {2 * 1, 20, 5, 0, 1, 128 }, /**< \brief IfxMtu_MbistSel_cpu0Ptag */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 64, 8, 0, 1, 4096}, /**< \brief IfxMtu_MbistSel_mod4 */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,  0, 0, 0, 0   }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 32, 7, 0, 1, 4096}, /**< \brief IfxMtu_MbistSel_mcan */
};
