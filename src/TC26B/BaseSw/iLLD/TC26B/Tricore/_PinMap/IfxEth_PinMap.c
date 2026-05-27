/**
 * \file IfxEth_PinMap.c
 * \brief ETH I/O map
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
 */

#include "IfxEth_PinMap.h"

IfxEth_Crsdv_In IfxEth_CRSDVA_P11_11_IN = {&MODULE_ETH, {&MODULE_P11,11}, Ifx_RxSel_a};
IfxEth_Mdc_Out IfxEth_MDC_P02_8_OUT = {&MODULE_ETH, {&MODULE_P02, 8}, IfxPort_OutputIdx_alt6};
IfxEth_Mdc_Out IfxEth_MDC_P21_0_OUT = {&MODULE_ETH, {&MODULE_P21, 0}, IfxPort_OutputIdx_alt6};
IfxEth_Mdc_Out IfxEth_MDC_P21_2_OUT = {&MODULE_ETH, {&MODULE_P21, 2}, IfxPort_OutputIdx_alt5};
IfxEth_Mdio_InOut IfxEth_MDIOA_P00_0_INOUT = {&MODULE_ETH, {&MODULE_P00, 0}, Ifx_RxSel_a, IfxPort_OutputIdx_alt1};
IfxEth_Mdio_InOut IfxEth_MDIOD_P21_3_INOUT = {&MODULE_ETH, {&MODULE_P21, 3}, Ifx_RxSel_d, IfxPort_OutputIdx_alt1};
IfxEth_Mdio_InOut IfxEth_MDIO_P21_1_INOUT = {&MODULE_ETH, {&MODULE_P21, 1}, Ifx_RxSel_b, IfxPort_OutputIdx_alt6};
IfxEth_Refclk_In IfxEth_REFCLK_P11_12_IN = {&MODULE_ETH, {&MODULE_P11,12}, Ifx_RxSel_a};
IfxEth_Rxclk_In IfxEth_RXCLKA_P11_12_IN = {&MODULE_ETH, {&MODULE_P11,12}, Ifx_RxSel_a};
IfxEth_Rxd_In IfxEth_RXD0_P11_10_IN = {&MODULE_ETH, {&MODULE_P11,10}, Ifx_RxSel_a};
IfxEth_Rxd_In IfxEth_RXD1_P11_9_IN = {&MODULE_ETH, {&MODULE_P11, 9}, Ifx_RxSel_a};
IfxEth_Rxer_In IfxEth_RXERB_P21_7_IN = {&MODULE_ETH, {&MODULE_P21, 7}, Ifx_RxSel_b};
IfxEth_Txclk_In IfxEth_TXCLKB_P11_12_IN = {&MODULE_ETH, {&MODULE_P11,12}, Ifx_RxSel_b};
IfxEth_Txd_Out IfxEth_TXD0_P11_3_OUT = {&MODULE_ETH, {&MODULE_P11, 3}, IfxPort_OutputIdx_alt6};
IfxEth_Txd_Out IfxEth_TXD1_P11_2_OUT = {&MODULE_ETH, {&MODULE_P11, 2}, IfxPort_OutputIdx_alt6};
IfxEth_Txen_Out IfxEth_TXEN_P11_6_OUT = {&MODULE_ETH, {&MODULE_P11, 6}, IfxPort_OutputIdx_alt6};


const IfxEth_Crsdv_In *IfxEth_Crsdv_In_pinTable[IFXETH_PINMAP_NUM_MODULES][IFXETH_PINMAP_CRSDV_IN_NUM_ITEMS] = {
    {
        &IfxEth_CRSDVA_P11_11_IN
    }
};

const IfxEth_Mdc_Out *IfxEth_Mdc_Out_pinTable[IFXETH_PINMAP_NUM_MODULES][IFXETH_PINMAP_MDC_OUT_NUM_ITEMS] = {
    {
        &IfxEth_MDC_P02_8_OUT,
        &IfxEth_MDC_P21_0_OUT,
        &IfxEth_MDC_P21_2_OUT
    }
};

const IfxEth_Mdio_InOut *IfxEth_Mdio_InOut_pinTable[IFXETH_PINMAP_NUM_MODULES][IFXETH_PINMAP_MDIO_INOUT_NUM_ITEMS] = {
    {
        NULL_PTR,
        &IfxEth_MDIOA_P00_0_INOUT,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        NULL_PTR,
        &IfxEth_MDIO_P21_1_INOUT
    }
};

const IfxEth_Refclk_In *IfxEth_Refclk_In_pinTable[IFXETH_PINMAP_NUM_MODULES][IFXETH_PINMAP_REFCLK_IN_NUM_ITEMS] = {
    {
        &IfxEth_REFCLK_P11_12_IN
    }
};

const IfxEth_Rxclk_In *IfxEth_Rxclk_In_pinTable[IFXETH_PINMAP_NUM_MODULES][IFXETH_PINMAP_RXCLK_IN_NUM_ITEMS] = {
    {
        &IfxEth_RXCLKA_P11_12_IN
    }
};

const IfxEth_Rxd_In *IfxEth_Rxd_In_pinTable[IFXETH_PINMAP_NUM_MODULES][IFXETH_PINMAP_RXD_IN_NUM_ITEMS] = {
    {
        &IfxEth_RXD1_P11_9_IN
    }
};

const IfxEth_Rxer_In *IfxEth_Rxer_In_pinTable[IFXETH_PINMAP_NUM_MODULES][IFXETH_PINMAP_RXER_IN_NUM_ITEMS] = {
    {
        NULL_PTR,
        &IfxEth_RXERB_P21_7_IN
    }
};

const IfxEth_Txclk_In *IfxEth_Txclk_In_pinTable[IFXETH_PINMAP_NUM_MODULES][IFXETH_PINMAP_TXCLK_IN_NUM_ITEMS] = {
    {
        NULL_PTR,
        &IfxEth_TXCLKB_P11_12_IN
    }
};

const IfxEth_Txd_Out *IfxEth_Txd_Out_pinTable[IFXETH_PINMAP_NUM_MODULES][IFXETH_PINMAP_TXD_OUT_NUM_ITEMS] = {
    {
        &IfxEth_TXD1_P11_2_OUT,
        &IfxEth_TXD0_P11_3_OUT
    }
};

const IfxEth_Txen_Out *IfxEth_Txen_Out_pinTable[IFXETH_PINMAP_NUM_MODULES][IFXETH_PINMAP_TXEN_OUT_NUM_ITEMS] = {
    {
        &IfxEth_TXEN_P11_6_OUT
    }
};
