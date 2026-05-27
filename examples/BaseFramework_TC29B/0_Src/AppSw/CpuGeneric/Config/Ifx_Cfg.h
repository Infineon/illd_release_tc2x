/**
 * \file Ifx_Cfg.h
 * \brief Project configuration file.
 *
 * \copyright Copyright (c) 2026 Infineon Technologies AG. All rights reserved.
 *
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

#ifndef IFX_CFG_H
#define IFX_CFG_H 1
/******************************************************************************/

/*______________________________________________________________________________
** Configuration for IfxScu_cfg.h
**____________________________________________________________________________*/
#define IFX_CFG_SCU_XTAL_FREQUENCY		(20000000)	/**<allowed values 16000000, 20000000 or 40000000*/
#define IFX_CFG_SCU_PLL_FREQUENCY		(200000000) /**<allowed values 80000000, 133000000, 160000000, 200000000, 240000000 or 300000000 */

/*______________________________________________________________________________
** Configuration for Software managed interrupt
**____________________________________________________________________________*/

//#define IFX_USE_SW_MANAGED_INT

/*______________________________________________________________________________
** Configuration for Trap Hook Functions' Extensions
**____________________________________________________________________________*/

//#define IFX_CFG_EXTEND_TRAP_HOOKS

//#define IFX_CFG_RETURN_FROM_MAIN

/******************************************************************************/

#endif /* IFX_CFG_H */
