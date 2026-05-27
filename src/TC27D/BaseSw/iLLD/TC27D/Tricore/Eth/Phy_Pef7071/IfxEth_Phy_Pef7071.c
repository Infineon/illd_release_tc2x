/**
 * \file IfxEth_Phy_Pef7071.c
 * \brief ETH PHY_PEF7071 details
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

#include "IfxEth_Phy_Pef7071.h"

/******************************************************************************/
/*----------------------------------Macros------------------------------------*/
/******************************************************************************/

#define IFXETH_PHY_PEF7071_MDIO_CTRL                       0x00

#define IFXETH_PHY_PEF7071_MDIO_STAT                       0x01

#define IFXETH_PHY_PEF7071_MDIO_PHYID1                     0x02

#define IFXETH_PHY_PEF7071_MDIO_PHYID2                     0x03

#define IFXETH_PHY_PEF7071_MDIO_AN_ADV                     0x04

#define IFXETH_PHY_PEF7071_MDIO_AN_LPA                     0x05

#define IFXETH_PHY_PEF7071_MDIO_AN_EXP                     0x06

#define IFXETH_PHY_PEF7071_MDIO_AN_NPTX                    0x07

#define IFXETH_PHY_PEF7071_MDIO_AN_NPRX                    0x08

#define IFXETH_PHY_PEF7071_MDIO_GCTRL                      0x09

#define IFXETH_PHY_PEF7071_MDIO_GSTAT                      0x0A

#define IFXETH_PHY_PEF7071_MDIO_RES11                      0x0B

#define IFXETH_PHY_PEF7071_MDIO_RES12                      0x0C

#define IFXETH_PHY_PEF7071_MDIO_MMDCTRL                    0x0D

#define IFXETH_PHY_PEF7071_MDIO_MMDDATA                    0x0E

#define IFXETH_PHY_PEF7071_MDIO_XSTAT                      0x0F

#define IFXETH_PHY_PEF7071_MDIO_PHYPERF                    0x10

#define IFXETH_PHY_PEF7071_MDIO_PHYSTAT1                   0x11

#define IFXETH_PHY_PEF7071_MDIO_PHYSTAT2                   0x12

#define IFXETH_PHY_PEF7071_MDIO_PHYCTL1                    0x13

#define IFXETH_PHY_PEF7071_MDIO_PHYCTL2                    0x14

#define IFXETH_PHY_PEF7071_MDIO_ERRCNT                     0x15

#define IFXETH_PHY_PEF7071_MDIO_EECTRL                     0x16

#define IFXETH_PHY_PEF7071_MDIO_MIICTRL                    0x17

#define IFXETH_PHY_PEF7071_MDIO_MIISTAT                    0x18

#define IFXETH_PHY_PEF7071_MDIO_IMASK                      0x19

#define IFXETH_PHY_PEF7071_MDIO_ISTAT                      0x1A

#define IFXETH_PHY_PEF7071_MDIO_LED                        0x1B

#define IFXETH_PHY_PEF7071_MDIO_TPGCTRL                    0x1C

#define IFXETH_PHY_PEF7071_MDIO_TPGDATA                    0x1D

#define IFXETH_PHY_PEF7071_MDIO_FWV                        0x1E

#define IFXETH_PHY_PEF7071_MDIO_RES1F                      0x1F

#define IFXETH_PHY_PEF7071_WAIT_GMII_READY() while (ETH_GMII_ADDRESS.B.GB) {}

/** \brief Access type for indirectly accessing Address Type of MMD register in PHY
 */
#define IFXETH_PHY_PEF7071_MDIO_MMDCTRL_ACCESSTYPE_ADDR    0x00

/** \brief Access type for indirectly accessing Data Type of MMD register in PHY
 */
#define IFXETH_PHY_PEF7071_MDIO_MMDCTRL_ACCESSTYPE_DATA    0x4000

/** \brief Access type for indirectly accessing Data Type with post increment of MMD register in PHY
 */
#define IFXETH_PHY_PEF7071_MDIO_MMDCTRL_ACCESSTYPE_DATA_PI 0x8000

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

uint32 IfxEth_Phy_Pef7071_iPhyInitDone = 0;

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

uint32 IfxEth_Phy_Pef7071_init(void)
{
    IFXETH_PHY_PEF7071_WAIT_GMII_READY();

    /*  // read once all PHY registers
     * int i;
     * for(i = 0; i < 31; i++)
     * {
     * uint32 value;
     * read_mdio_reg(0, i, &value);
     * } */

    // reset PHY
    IfxEth_Phy_Pef7071_write_mdio_reg(0, IFXETH_PHY_PEF7071_MDIO_CTRL, 0x8000);   // reset
    uint32 value;

    do
    {
        IfxEth_Phy_Pef7071_read_mdio_reg(0, IFXETH_PHY_PEF7071_MDIO_CTRL, &value);
    } while (value & 0x8000);                                                      // wait for reset to finish

    // setup PHY
    IfxEth_Phy_Pef7071_write_mdio_reg(0, IFXETH_PHY_PEF7071_MDIO_MIICTRL, 0xF702); // skew adaptation is needed, RMII mode (10/100MBit)
    IfxEth_Phy_Pef7071_write_mdio_reg(0, IFXETH_PHY_PEF7071_MDIO_GCTRL, 0x0000);   // advertise no 1000BASE-T (full/half duplex)
    IfxEth_Phy_Pef7071_write_mdio_reg(0, IFXETH_PHY_PEF7071_MDIO_AN_ADV, 0x0101);  // advertise 100BASE-TX full duplex only
    IfxEth_Phy_Pef7071_write_mdio_reg(0, IFXETH_PHY_PEF7071_MDIO_CTRL, 0x1200);    // enable auto-negotiation, restart auto-negotiation

    //  we set our loop mode (RJ45) in side the PHY (PHYCTL1 register) if we will have a loop
    //  if (CONFIG_ETH._loop)
    //  write_mdio_reg (0, 0x13, (0x4 << 13) | 0x1);

    // done
    IfxEth_Phy_Pef7071_iPhyInitDone = 1;

    return 1;
}


boolean IfxEth_Phy_Pef7071_link(void)
{
    boolean linkEstablished = FALSE;

    if (IfxEth_Phy_Pef7071_iPhyInitDone)
    {
        uint32 value;
        IfxEth_Phy_Pef7071_read_mdio_reg(0, IFXETH_PHY_PEF7071_MDIO_STAT, &value);
        linkEstablished = ((value & (1 << 2)) != 0) ? TRUE : FALSE;
    }

    return linkEstablished;
}


void IfxEth_Phy_Pef7071_read_mdio_reg(uint32 layeraddr, uint32 regaddr, uint32 *pdata)
{
    // 5bit Physical Layer Adddress, 5bit GMII Regnr, 4bit csrclock divider, Read, Busy
    ETH_GMII_ADDRESS.U = (layeraddr << 11) | (regaddr << 6) | (0 << 2) | (0 << 1) | (1 << 0);

    IFXETH_PHY_PEF7071_WAIT_GMII_READY();

    // get data
    *pdata = ETH_GMII_DATA.U;
}


void IfxEth_Phy_Pef7071_write_mdio_reg(uint32 layeraddr, uint32 regaddr, uint32 data)
{
    // put data
    ETH_GMII_DATA.U = data;

    // 5bit Physical Layer Adddress, 5bit GMII Regnr, 4bit csrclock divider, Write, Busy
    ETH_GMII_ADDRESS.U = (layeraddr << 11) | (regaddr << 6) | (0 << 2) | (1 << 1) | (1 << 0);

    IFXETH_PHY_PEF7071_WAIT_GMII_READY();
}


void IfxEth_Phy_Pef7071_write_mmd_indirect(uint32 layeraddr, uint32 devaddr, uint32 regaddr, uint32 data)
{
    /* Select access type as ADDR for MMD access and select the Device address */
    IfxEth_Phy_Pef7071_write_mdio_reg(layeraddr, IFXETH_PHY_PEF7071_MDIO_MMDCTRL, IFXETH_PHY_PEF7071_MDIO_MMDCTRL_ACCESSTYPE_ADDR | devaddr);
/* Select PHY register for write operation */
    IfxEth_Phy_Pef7071_write_mdio_reg(layeraddr, IFXETH_PHY_PEF7071_MDIO_MMDDATA, regaddr);
/* select the DATA operation and device address */
    IfxEth_Phy_Pef7071_write_mdio_reg(layeraddr, IFXETH_PHY_PEF7071_MDIO_MMDCTRL, IFXETH_PHY_PEF7071_MDIO_MMDCTRL_ACCESSTYPE_DATA | devaddr);
/* Write the data */
    IfxEth_Phy_Pef7071_write_mdio_reg(layeraddr, IFXETH_PHY_PEF7071_MDIO_MMDDATA, data);
}


void IfxEth_Phy_Pef7071_read_mmd_indirect(uint32 layeraddr, uint32 devaddr, uint32 regaddr, uint32 data)
{
    /* Select access type as ADDR for MMD access and select the Device address */
    IfxEth_Phy_Pef7071_write_mdio_reg(layeraddr, IFXETH_PHY_PEF7071_MDIO_MMDCTRL, IFXETH_PHY_PEF7071_MDIO_MMDCTRL_ACCESSTYPE_ADDR | devaddr);
    /* Select PHY register for read operation */
    IfxEth_Phy_Pef7071_write_mdio_reg(layeraddr, IFXETH_PHY_PEF7071_MDIO_MMDDATA, regaddr);
/* select the DATA operation and device address */
    IfxEth_Phy_Pef7071_write_mdio_reg(layeraddr, IFXETH_PHY_PEF7071_MDIO_MMDCTRL, IFXETH_PHY_PEF7071_MDIO_MMDCTRL_ACCESSTYPE_DATA | devaddr);
/* Read the data */
    IfxEth_Phy_Pef7071_read_mdio_reg(layeraddr, IFXETH_PHY_PEF7071_MDIO_MMDDATA, &data);
}
