/**
 * \file IfxGtm_Tbu.h
 * \brief GTM  basic functionality
 * \ingroup IfxLld_Gtm
 *
 * \version iLLD_1_22_0
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
 *
 * \defgroup IfxLld_Gtm_Std_Tbu Tbu Basic Functionality
 * \ingroup IfxLld_Gtm_Std
 * \defgroup IfxLld_Gtm_Std_Tbu_Enumerations TBU Enumerations
 * \ingroup IfxLld_Gtm_Std_Tbu
 * \defgroup IfxLld_Gtm_Std_Tbu_Basic_Functions TBU Basic Functions
 * \ingroup IfxLld_Gtm_Std_Tbu
 */

#ifndef IFXGTM_TBU_H
#define IFXGTM_TBU_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxGtm_cfg.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Gtm_Std_Tbu_Enumerations
 * \{ */
/** \brief GTM TOM TBU Time stamps
 */
typedef enum
{
    IfxGtm_Tbu_Ts_0,
    IfxGtm_Tbu_Ts_1,
    IfxGtm_Tbu_Ts_2
} IfxGtm_Tbu_Ts;

/** \} */

/** \addtogroup IfxLld_Gtm_Std_Tbu_Basic_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Enables the channel
 * \param gtm Pointer to GTM module
 * \param channel TBU Time stamps
 * \return None
 */
IFX_INLINE void IfxGtm_Tbu_enableChannel(Ifx_GTM *gtm, IfxGtm_Tbu_Ts channel);

/** \brief Function to check if a TBU channel is enabled.
 * Returns TRUE if the corresponding channel is enabled
 * Returns FALSE if the corresponding channel is disabled.
 * \param gtm Pointer to GTM SFR
 * \param channel Channel of TBU
 * \return TRUE: channel is enabled
 */
IFX_INLINE boolean IfxGtm_Tbu_isChannelEnabled(Ifx_GTM *gtm, IfxGtm_Tbu_Ts channel);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returns the clock frequency
 * \param gtm Pointer to GTM module
 * \param channel TBU Time stamps
 * \return frequency
 */
IFX_EXTERN float32 IfxGtm_Tbu_getClockFrequency(Ifx_GTM *gtm, IfxGtm_Tbu_Ts channel);

/** \} */

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE void IfxGtm_Tbu_enableChannel(Ifx_GTM *gtm, IfxGtm_Tbu_Ts channel)
{
    uint32 shift = channel * 2;

    __ldmst_c(&gtm->TBU.CHEN.U, (3U << shift), (IfxGtm_FeatureControl_enable << shift));
}


IFX_INLINE boolean IfxGtm_Tbu_isChannelEnabled(Ifx_GTM *gtm, IfxGtm_Tbu_Ts channel)
{
    uint32 shift         = channel * 2;
    uint32 enable_status = (gtm->TBU.CHEN.U & ((uint32)3 << shift)) >> shift;

    return enable_status == (uint32)IfxGtm_FeatureControl_enabled;
}


#endif /* IFXGTM_TBU_H */
