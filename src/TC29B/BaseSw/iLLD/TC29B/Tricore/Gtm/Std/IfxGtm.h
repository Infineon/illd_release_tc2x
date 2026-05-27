/**
 * \file IfxGtm.h
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
 * \defgroup IfxLld_Gtm_Std_Basic_Functions Basic Functions
 * \ingroup IfxLld_Gtm_Std
 * \defgroup IfxLld_Gtm_Std_Enumerations Enumerations
 * \ingroup IfxLld_Gtm_Std
 */

#ifndef IFXGTM_H
#define IFXGTM_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxGtm_cfg.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Gtm_Std_Enumerations
 * \{ */
/** \brief Enum for GTM interrupt modes
 */
typedef enum
{
    IfxGtm_IrqMode_level       = 0,
    IfxGtm_IrqMode_pulse       = 1,
    IfxGtm_IrqMode_pulseNotify = 2,
    IfxGtm_IrqMode_singlePulse = 3
} IfxGtm_IrqMode;

/** \brief OCDS Suspend Control (OCDS.SUS)
 */
typedef enum
{
    IfxGtm_SuspendMode_none = 0,  /**< \brief No suspend */
    IfxGtm_SuspendMode_hard = 1,  /**< \brief Hard Suspend */
    IfxGtm_SuspendMode_soft = 2   /**< \brief Soft Suspend */
} IfxGtm_SuspendMode;

/** \} */

/** \addtogroup IfxLld_Gtm_Std_Basic_Functions
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Returs the status of module enabled or disabled
 * \param gtm Pointer to GTM module
 * \return status: TRUE/FALSE
 */
IFX_INLINE boolean IfxGtm_isEnabled(Ifx_GTM *gtm);

/** \brief Returns the module's suspend state.
 * TRUE :if module is suspended.
 * FALSE:if module is not yet suspended.
 * \param gtm Pointer to GTM module registers
 * \return Suspend status (TRUE / FALSE)
 */
IFX_INLINE boolean IfxGtm_isModuleSuspended(Ifx_GTM *gtm);

/** \brief Configure the Module to Hard/Soft suspend mode.
 * Note: The api works only when the OCDS is enabled and in Supervisor Mode. When OCDS is disabled the OCS suspend control is ineffective.
 * \param gtm Pointer to GTM module registers
 * \param mode Module suspend mode
 * \return None
 */
IFX_INLINE void IfxGtm_setSuspendMode(Ifx_GTM *gtm, IfxGtm_SuspendMode mode);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Disables the module
 * \param gtm Pointer to GTM module
 * \return None
 */
IFX_EXTERN void IfxGtm_disable(Ifx_GTM *gtm);

/** \brief Enables the module
 * \param gtm Pointer to GTM module
 * \return None
 */
IFX_EXTERN void IfxGtm_enable(Ifx_GTM *gtm);

/** \} */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief returns the GTM SYSCLK frequency.
 * Refer to the Clock distribution for details on GTM SYS CLK.
 * \return sysFreq
 */
IFX_EXTERN float32 IfxGtm_getSysClkFrequency(void);

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE boolean IfxGtm_isEnabled(Ifx_GTM *gtm)
{
    return gtm->CLC.B.DISS == 0;
}


IFX_INLINE boolean IfxGtm_isModuleSuspended(Ifx_GTM *gtm)
{
    Ifx_GTM_OCS ocs;

    // read the status
    ocs.U = gtm->OCS.U;

    // return the status
    return ocs.B.SUSSTA;
}


IFX_INLINE void IfxGtm_setSuspendMode(Ifx_GTM *gtm, IfxGtm_SuspendMode mode)
{
    Ifx_GTM_OCS ocs;

    // remove protection and configure the suspend mode.
    ocs.B.SUS_P = 1;
    ocs.B.SUS   = mode;

    gtm->OCS.U  = ocs.U;
}


#endif /* IFXGTM_H */
