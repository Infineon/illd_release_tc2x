/**
 * \file IfxDsadc_PinMap.c
 * \brief DSADC I/O map
 * \ingroup IfxLld_Dsadc
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

#include "IfxDsadc_PinMap.h"

IfxDsadc_Cgpwm_Out IfxDsadc_CGPWMN_P00_5_OUT = {&MODULE_DSADC, {&MODULE_P00, 5}, IfxPort_OutputIdx_alt2};
IfxDsadc_Cgpwm_Out IfxDsadc_CGPWMN_P02_0_OUT = {&MODULE_DSADC, {&MODULE_P02, 0}, IfxPort_OutputIdx_alt4};
IfxDsadc_Cgpwm_Out IfxDsadc_CGPWMN_P33_11_OUT = {&MODULE_DSADC, {&MODULE_P33,11}, IfxPort_OutputIdx_alt6};
IfxDsadc_Cgpwm_Out IfxDsadc_CGPWMP_P00_6_OUT = {&MODULE_DSADC, {&MODULE_P00, 6}, IfxPort_OutputIdx_alt2};
IfxDsadc_Cgpwm_Out IfxDsadc_CGPWMP_P02_1_OUT = {&MODULE_DSADC, {&MODULE_P02, 1}, IfxPort_OutputIdx_alt4};
IfxDsadc_Cgpwm_Out IfxDsadc_CGPWMP_P33_12_OUT = {&MODULE_DSADC, {&MODULE_P33,12}, IfxPort_OutputIdx_alt6};
IfxDsadc_Cin_In IfxDsadc_CIN0A_P00_1_IN = {&MODULE_DSADC, 0, {&MODULE_P00, 1}, Ifx_RxSel_a};
IfxDsadc_Cin_In IfxDsadc_CIN0B_P33_5_IN = {&MODULE_DSADC, 0, {&MODULE_P33, 5}, Ifx_RxSel_b};
IfxDsadc_Cin_In IfxDsadc_CIN2A_P00_5_IN = {&MODULE_DSADC, 2, {&MODULE_P00, 5}, Ifx_RxSel_a};
IfxDsadc_Cin_In IfxDsadc_CIN2B_P33_1_IN = {&MODULE_DSADC, 2, {&MODULE_P33, 1}, Ifx_RxSel_b};
IfxDsadc_Cin_In IfxDsadc_CIN3A_P00_3_IN = {&MODULE_DSADC, 3, {&MODULE_P00, 3}, Ifx_RxSel_a};
IfxDsadc_Cin_In IfxDsadc_CIN3B_P02_7_IN = {&MODULE_DSADC, 3, {&MODULE_P02, 7}, Ifx_RxSel_b};
IfxDsadc_Cout_Out IfxDsadc_COUT0_P00_11_OUT = {&MODULE_DSADC, 0, {&MODULE_P00,11}, IfxPort_OutputIdx_alt4};
IfxDsadc_Cout_Out IfxDsadc_COUT0_P00_1_OUT = {&MODULE_DSADC, 0, {&MODULE_P00, 1}, IfxPort_OutputIdx_alt4};
IfxDsadc_Cout_Out IfxDsadc_COUT0_P33_5_OUT = {&MODULE_DSADC, 0, {&MODULE_P33, 5}, IfxPort_OutputIdx_alt4};
IfxDsadc_Cout_Out IfxDsadc_COUT2_P00_5_OUT = {&MODULE_DSADC, 2, {&MODULE_P00, 5}, IfxPort_OutputIdx_alt4};
IfxDsadc_Cout_Out IfxDsadc_COUT2_P33_1_OUT = {&MODULE_DSADC, 2, {&MODULE_P33, 1}, IfxPort_OutputIdx_alt4};
IfxDsadc_Cout_Out IfxDsadc_COUT3_P00_3_OUT = {&MODULE_DSADC, 3, {&MODULE_P00, 3}, IfxPort_OutputIdx_alt4};
IfxDsadc_Cout_Out IfxDsadc_COUT3_P02_7_OUT = {&MODULE_DSADC, 3, {&MODULE_P02, 7}, IfxPort_OutputIdx_alt4};
IfxDsadc_Din_In IfxDsadc_DIN0A_P00_2_IN = {&MODULE_DSADC, 0, {&MODULE_P00, 2}, Ifx_RxSel_a};
IfxDsadc_Din_In IfxDsadc_DIN0B_P33_6_IN = {&MODULE_DSADC, 0, {&MODULE_P33, 6}, Ifx_RxSel_b};
IfxDsadc_Din_In IfxDsadc_DIN2A_P00_6_IN = {&MODULE_DSADC, 2, {&MODULE_P00, 6}, Ifx_RxSel_a};
IfxDsadc_Din_In IfxDsadc_DIN2B_P33_2_IN = {&MODULE_DSADC, 2, {&MODULE_P33, 2}, Ifx_RxSel_b};
IfxDsadc_Din_In IfxDsadc_DIN3A_P00_4_IN = {&MODULE_DSADC, 3, {&MODULE_P00, 4}, Ifx_RxSel_a};
IfxDsadc_Din_In IfxDsadc_DIN3B_P02_8_IN = {&MODULE_DSADC, 3, {&MODULE_P02, 8}, Ifx_RxSel_b};
IfxDsadc_Dsn_In IfxDsadc_DS0NA_AN3_IN = {&MODULE_DSADC, 0, {NULL_PTR, 3}, Ifx_RxSel_a};
IfxDsadc_Dsn_In IfxDsadc_DS0NB_AN1_IN = {&MODULE_DSADC, 0, {NULL_PTR, 1}, Ifx_RxSel_b};
IfxDsadc_Dsn_In IfxDsadc_DS2NA_AN21_IN = {&MODULE_DSADC, 2, {NULL_PTR,21}, Ifx_RxSel_a};
IfxDsadc_Dsn_In IfxDsadc_DS3NA_AN37_IN = {&MODULE_DSADC, 3, {NULL_PTR,37}, Ifx_RxSel_a};
IfxDsadc_Dsn_In IfxDsadc_DS3NA_P40_7_IN = {&MODULE_DSADC, 3, {&MODULE_P40, 7}, Ifx_RxSel_a};
IfxDsadc_Dsn_In IfxDsadc_DS3NB_AN39_IN = {&MODULE_DSADC, 3, {NULL_PTR,39}, Ifx_RxSel_b};
IfxDsadc_Dsn_In IfxDsadc_DS3NB_P40_9_IN = {&MODULE_DSADC, 3, {&MODULE_P40, 9}, Ifx_RxSel_b};
IfxDsadc_Dsn_In IfxDsadc_DS3NC_AN45_IN = {&MODULE_DSADC, 3, {NULL_PTR,45}, Ifx_RxSel_c};
IfxDsadc_Dsn_In IfxDsadc_DS3ND_AN47_IN = {&MODULE_DSADC, 3, {NULL_PTR,47}, Ifx_RxSel_d};
IfxDsadc_Dsp_In IfxDsadc_DS0PA_AN2_IN = {&MODULE_DSADC, 0, {NULL_PTR, 2}, Ifx_RxSel_a};
IfxDsadc_Dsp_In IfxDsadc_DS0PB_AN0_IN = {&MODULE_DSADC, 0, {NULL_PTR, 0}, Ifx_RxSel_b};
IfxDsadc_Dsp_In IfxDsadc_DS2PA_AN20_IN = {&MODULE_DSADC, 2, {NULL_PTR,20}, Ifx_RxSel_a};
IfxDsadc_Dsp_In IfxDsadc_DS3PA_AN36_IN = {&MODULE_DSADC, 3, {NULL_PTR,36}, Ifx_RxSel_a};
IfxDsadc_Dsp_In IfxDsadc_DS3PA_P40_6_IN = {&MODULE_DSADC, 3, {&MODULE_P40, 6}, Ifx_RxSel_a};
IfxDsadc_Dsp_In IfxDsadc_DS3PB_AN38_IN = {&MODULE_DSADC, 3, {NULL_PTR,38}, Ifx_RxSel_b};
IfxDsadc_Dsp_In IfxDsadc_DS3PB_P40_8_IN = {&MODULE_DSADC, 3, {&MODULE_P40, 8}, Ifx_RxSel_b};
IfxDsadc_Dsp_In IfxDsadc_DS3PC_AN44_IN = {&MODULE_DSADC, 3, {NULL_PTR,44}, Ifx_RxSel_c};
IfxDsadc_Dsp_In IfxDsadc_DS3PD_AN46_IN = {&MODULE_DSADC, 3, {NULL_PTR,46}, Ifx_RxSel_d};
IfxDsadc_Itr_In IfxDsadc_ITR0E_P33_0_IN = {&MODULE_DSADC, 0, {&MODULE_P33, 0}, Ifx_RxSel_e};
IfxDsadc_Itr_In IfxDsadc_ITR0F_P33_4_IN = {&MODULE_DSADC, 0, {&MODULE_P33, 4}, Ifx_RxSel_f};
IfxDsadc_Itr_In IfxDsadc_ITR2E_P33_2_IN = {&MODULE_DSADC, 2, {&MODULE_P33, 2}, Ifx_RxSel_e};
IfxDsadc_Itr_In IfxDsadc_ITR2F_P33_6_IN = {&MODULE_DSADC, 2, {&MODULE_P33, 6}, Ifx_RxSel_f};
IfxDsadc_Itr_In IfxDsadc_ITR3E_P02_8_IN = {&MODULE_DSADC, 3, {&MODULE_P02, 8}, Ifx_RxSel_e};
IfxDsadc_Itr_In IfxDsadc_ITR3F_P00_9_IN = {&MODULE_DSADC, 3, {&MODULE_P00, 9}, Ifx_RxSel_f};
IfxDsadc_Sg_In IfxDsadc_SGNA_P00_4_IN = {&MODULE_DSADC, {&MODULE_P00, 4}, Ifx_RxSel_a};
IfxDsadc_Sg_In IfxDsadc_SGNB_P33_13_IN = {&MODULE_DSADC, {&MODULE_P33,13}, Ifx_RxSel_b};


const IfxDsadc_Cgpwm_Out *IfxDsadc_Cgpwm_Out_pinTable[IFXDSADC_PINMAP_NUM_MODULES][IFXDSADC_PINMAP_CGPWM_OUT_NUM_ITEMS] = {
    {
        &IfxDsadc_CGPWMN_P00_5_OUT,
        &IfxDsadc_CGPWMP_P00_6_OUT,
        &IfxDsadc_CGPWMN_P02_0_OUT,
        &IfxDsadc_CGPWMP_P02_1_OUT,
        &IfxDsadc_CGPWMN_P33_11_OUT,
        &IfxDsadc_CGPWMP_P33_12_OUT
    }
};

const IfxDsadc_Cin_In *IfxDsadc_Cin_In_pinTable[IFXDSADC_PINMAP_NUM_MODULES][IFXDSADC_PINMAP_NUM_CHANNELS][IFXDSADC_PINMAP_CIN_IN_NUM_ITEMS] = {
    {
        {
            &IfxDsadc_CIN0A_P00_1_IN,
            &IfxDsadc_CIN0B_P33_5_IN
        },
        {
            NULL_PTR,
            NULL_PTR
        },
        {
            &IfxDsadc_CIN2A_P00_5_IN,
            &IfxDsadc_CIN2B_P33_1_IN
        },
        {
            &IfxDsadc_CIN3A_P00_3_IN,
            &IfxDsadc_CIN3B_P02_7_IN
        }
    }
};

const IfxDsadc_Cout_Out *IfxDsadc_Cout_Out_pinTable[IFXDSADC_PINMAP_NUM_MODULES][IFXDSADC_PINMAP_NUM_CHANNELS][IFXDSADC_PINMAP_COUT_OUT_NUM_ITEMS] = {
    {
        {
            &IfxDsadc_COUT0_P00_1_OUT,
            &IfxDsadc_COUT0_P00_11_OUT,
            &IfxDsadc_COUT0_P33_5_OUT
        },
        {
            NULL_PTR,
            NULL_PTR,
            NULL_PTR
        },
        {
            &IfxDsadc_COUT2_P00_5_OUT,
            &IfxDsadc_COUT2_P33_1_OUT,
            NULL_PTR
        },
        {
            &IfxDsadc_COUT3_P00_3_OUT,
            &IfxDsadc_COUT3_P02_7_OUT,
            NULL_PTR
        }
    }
};

const IfxDsadc_Din_In *IfxDsadc_Din_In_pinTable[IFXDSADC_PINMAP_NUM_MODULES][IFXDSADC_PINMAP_NUM_CHANNELS][IFXDSADC_PINMAP_DIN_IN_NUM_ITEMS] = {
    {
        {
            &IfxDsadc_DIN0A_P00_2_IN,
            &IfxDsadc_DIN0B_P33_6_IN
        },
        {
            NULL_PTR,
            NULL_PTR
        },
        {
            &IfxDsadc_DIN2A_P00_6_IN,
            &IfxDsadc_DIN2B_P33_2_IN
        },
        {
            &IfxDsadc_DIN3A_P00_4_IN,
            &IfxDsadc_DIN3B_P02_8_IN
        }
    }
};

const IfxDsadc_Dsn_In *IfxDsadc_Dsn_In_pinTable[IFXDSADC_PINMAP_NUM_MODULES][IFXDSADC_PINMAP_NUM_CHANNELS][IFXDSADC_PINMAP_DSN_IN_NUM_ITEMS] = {
    {
        {
            &IfxDsadc_DS0NA_AN3_IN,
            &IfxDsadc_DS0NB_AN1_IN,
            NULL_PTR,
            NULL_PTR
        },
        {
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR
        },
        {
            &IfxDsadc_DS2NA_AN21_IN,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR
        },
        {
            &IfxDsadc_DS3NA_P40_7_IN,
            &IfxDsadc_DS3NB_P40_9_IN,
            &IfxDsadc_DS3NC_AN45_IN,
            &IfxDsadc_DS3ND_AN47_IN
        }
    }
};

const IfxDsadc_Dsp_In *IfxDsadc_Dsp_In_pinTable[IFXDSADC_PINMAP_NUM_MODULES][IFXDSADC_PINMAP_NUM_CHANNELS][IFXDSADC_PINMAP_DSP_IN_NUM_ITEMS] = {
    {
        {
            &IfxDsadc_DS0PA_AN2_IN,
            &IfxDsadc_DS0PB_AN0_IN,
            NULL_PTR,
            NULL_PTR
        },
        {
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR
        },
        {
            &IfxDsadc_DS2PA_AN20_IN,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR
        },
        {
            &IfxDsadc_DS3PA_P40_6_IN,
            &IfxDsadc_DS3PB_P40_8_IN,
            &IfxDsadc_DS3PC_AN44_IN,
            &IfxDsadc_DS3PD_AN46_IN
        }
    }
};

const IfxDsadc_Itr_In *IfxDsadc_Itr_In_pinTable[IFXDSADC_PINMAP_NUM_MODULES][IFXDSADC_PINMAP_NUM_CHANNELS][IFXDSADC_PINMAP_ITR_IN_NUM_ITEMS] = {
    {
        {
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            &IfxDsadc_ITR0E_P33_0_IN,
            &IfxDsadc_ITR0F_P33_4_IN
        },
        {
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR
        },
        {
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            &IfxDsadc_ITR2E_P33_2_IN,
            &IfxDsadc_ITR2F_P33_6_IN
        },
        {
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            NULL_PTR,
            &IfxDsadc_ITR3E_P02_8_IN,
            &IfxDsadc_ITR3F_P00_9_IN
        }
    }
};

const IfxDsadc_Sg_In *IfxDsadc_Sg_In_pinTable[IFXDSADC_PINMAP_NUM_MODULES][IFXDSADC_PINMAP_SG_IN_NUM_ITEMS] = {
    {
        &IfxDsadc_SGNA_P00_4_IN,
        &IfxDsadc_SGNB_P33_13_IN
    }
};
