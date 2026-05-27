/**
 * \file IfxEth_Phy_Pef7071.h
 * \brief ETH PHY_PEF7071 details
 * \ingroup IfxLld_Eth
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
 * \defgroup IfxLld_Eth_Phy_Pef7071 PHY_PEF7071
 * \ingroup IfxLld_Eth
 * \defgroup IfxLld_Eth_Phy_Pef7071_Functions Functions
 * \ingroup IfxLld_Eth_Phy_Pef7071
 */

#ifndef IFXETH_PHY_PEF7071_H
#define IFXETH_PHY_PEF7071_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "Eth/Std/IfxEth.h"
/** \addtogroup IfxLld_Eth_Phy_Pef7071_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/**
 * \return Status
 */
IFX_EXTERN uint32 IfxEth_Phy_Pef7071_init(void);

/**
 * \return Link status
 */
IFX_EXTERN boolean IfxEth_Phy_Pef7071_link(void);

/**
 * \return None
 */
IFX_EXTERN void IfxEth_Phy_Pef7071_read_mdio_reg(uint32 layeraddr, uint32 regaddr, uint32 *pdata);

/**
 * \return None
 */
IFX_EXTERN void IfxEth_Phy_Pef7071_write_mdio_reg(uint32 layeraddr, uint32 regaddr, uint32 data);

/** \brief Write the data into the MMD register of PHY
 * \param layeraddr physical layer address
 * \param devaddr Device address in PHY
 * \param regaddr Register address in PHY
 * \param data Data to be written
 * \return None
 */
IFX_EXTERN void IfxEth_Phy_Pef7071_write_mmd_indirect(uint32 layeraddr, uint32 devaddr, uint32 regaddr, uint32 data);

/** \brief Read data from MMD register of PHY
 * \param layeraddr physical layer address
 * \param devaddr Device address in PHY
 * \param regaddr Register address in PHY
 * \param data Data from PHY register
 * \return None
 */
IFX_EXTERN void IfxEth_Phy_Pef7071_read_mmd_indirect(uint32 layeraddr, uint32 devaddr, uint32 regaddr, uint32 data);

/** \} */

/******************************************************************************/
/*-------------------Global Exported Variables/Constants----------------------*/
/******************************************************************************/

IFX_EXTERN uint32 IfxEth_Phy_Pef7071_iPhyInitDone;

#endif /* IFXETH_PHY_PEF7071_H */
