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
#include "Mtu/Std/IfxMtu.h"

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

const IfxMtu_SramItem IfxMtu_sramTable[IFXMTU_NUM_MBIST_TABLE_ITEMS] = {
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 4, 16,  6, 0, 1, 8192 }, /**< \brief IfxMtu_MbistSel_cpu1Dspr */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 1, 20,  6, 0, 1, 128  }, /**< \brief IfxMtu_MbistSel_cpu1Dtag */
    {1 * 2, 64,  8, 0, 1, 3072 }, /**< \brief IfxMtu_MbistSel_cpu1Pspr */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 1, 20,  5, 0, 1, 256  }, /**< \brief IfxMtu_MbistSel_cpu1Ptag */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 4, 16,  6, 0, 1, 8192 }, /**< \brief IfxMtu_MbistSel_cpu0Dspr */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 32,  8, 0, 1, 3072 }, /**< \brief IfxMtu_MbistSel_cpu0Pspr */
    {2 * 1, 20,  5, 0, 1, 256  }, /**< \brief IfxMtu_MbistSel_cpu0Ptag */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 35,  7, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_ethermac */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 64,  8, 0, 1, 4096 }, /**< \brief IfxMtu_MbistSel_mod4 */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 29,  7, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_gtmFifo */
    {1 * 3, 32,  8, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_gtmMcs0 */
    {1 * 3, 32,  8, 0, 1, 512  }, /**< \brief IfxMtu_MbistSel_gtmMcs1 */
    {1 * 1, 24,  7, 0, 1, 128  }, /**< \brief IfxMtu_MbistSel_gtmDpll1a */
    {1 * 1, 24,  7, 0, 1, 384  }, /**< \brief IfxMtu_MbistSel_gtmDpll1b */
    {1 * 1, 24,  7, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_gtmDpll2 */
    {1 * 1, 32,  8, 0, 1, 192  }, /**< \brief IfxMtu_MbistSel_psi5 */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 1, 32,  8, 0, 1, 2496 }, /**< \brief IfxMtu_MbistSel_mcan */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 32,  8, 0, 1, 64   }, /**< \brief IfxMtu_MbistSel_erayObf */
    {1 * 4, 32,  8, 0, 1, 128  }, /**< \brief IfxMtu_MbistSel_erayIbfTbf */
    {1 * 1, 32,  8, 0, 1, 4096 }, /**< \brief IfxMtu_MbistSel_erayMbf */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {2 * 1, 8,   6, 0, 1, 40960}, /**< \brief IfxMtu_MbistSel_stdbyRam1 */
    {1 * 4, 32,  8, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_mcds */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem0 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem1 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem2 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem3 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem4 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem5 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem6 */
    {1 * 2, 128, 9, 0, 1, 2048 }, /**< \brief IfxMtu_MbistSel_emem7 */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 4, 8,   6, 0, 1, 5120 }, /**< \brief IfxMtu_MbistSel_cifJpeg1_4 */
    {0 * 0, 0,   0, 0, 0, 0    }, /**< \brief IfxMtu_MbistSel_none */
    {1 * 2, 8,   6, 0, 1, 384  }, /**< \brief IfxMtu_MbistSel_cifJpeg3 */
    {1 * 1, 36,  8, 0, 1, 512  }, /**< \brief IfxMtu_MbistSel_cifCif */
    {1 * 1, 8,   6, 0, 1, 20480}, /**< \brief IfxMtu_MbistSel_stdbyRam2 */
    {1 * 4, 64,  8, 0, 1, 256  }, /**< \brief IfxMtu_MbistSel_dma */
    {1 * 2, 128, 9, 0, 1, 256  }, /**< \brief IfxMtu_MbistSel_ememXtm0 */
    {1 * 2, 128, 9, 0, 1, 256  }, /**< \brief IfxMtu_MbistSel_ememXtm1 */
    {1 * 4, 64,  8, 0, 1, 1024 }, /**< \brief IfxMtu_MbistSel_fft0 */
    {1 * 1, 16,  6, 0, 1, 512  }, /**< \brief IfxMtu_MbistSel_fft1 */
};
