/**
 * \file IfxFft_cfg.h
 * \brief FFT on-chip implementation data
 * \ingroup IfxLld_Fft
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
 * \defgroup IfxLld_Fft FFT
 * \ingroup IfxLld
 * \defgroup IfxLld_Fft_Impl Implementation
 * \ingroup IfxLld_Fft
 * \defgroup IfxLld_Fft_Std Standard Driver
 * \ingroup IfxLld_Fft
 */

#ifndef IFXFFT_CFG_H
#define IFXFFT_CFG_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/** \brief Data space starting address
 */
#define IFXFFT_DATA_SPACE           0xBE000000U

/** \brief Window coefficient space starting address
 */
#define IFXFFT_WINDOW_SPACE         0xBE100000U

/** \brief Maximim possible length of the transform
 */
#define IFXFFT_MAX_LENGTH           2048

#define IFXFFT_MAX_WINDOW_LENGTH    (IFXFFT_MAX_LENGTH / 2)

#define IFXFFT_FFT_DMA_SUPPORT      (1)

#define IFXFFT_FFT_OPTIMIZED        (0)

#define IFXFFT_FFT_DMA_CHANNEL_BASE 4

#define IFXFFT_FFT_PIPELINED        (1)

#define IFXFFT_FFT_NUM_JOBS         (8)

#define IFXFFT_NUM_MODULES          (1)

#endif /* IFXFFT_CFG_H */
