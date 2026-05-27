/**
 * \file IfxFce.h
 * \brief FCE  basic functionality
 * \ingroup IfxLld_Fce
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
 *
 * \defgroup IfxLld_Fce_Std_Enum Enumerations
 * \ingroup IfxLld_Fce_Std
 * \defgroup IfxLld_Fce_Std_Module Module Functions
 * \ingroup IfxLld_Fce_Std
 * \defgroup IfxLld_Fce_Std_Support Support Function
 * \ingroup IfxLld_Fce_Std
 * \defgroup IfxLld_Fce_Std_InterruptStatus Interrupt Status Functions
 * \ingroup IfxLld_Fce_Std
 */

#ifndef IFXFCE_H
#define IFXFCE_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxFce_cfg.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"
#include "Scu/Std/IfxScuWdt.h"
#include "IfxFce_reg.h"
#include "Src/Std/IfxSrc.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Fce_Std_Enum
 * \{ */
/** \brief Ifx_FCE_INx(x= 0,1), Specifies the kernel used for CRC-32
 */
typedef enum
{
    IfxFce_Crc32Kernel_0 = 0,      /**< \brief Specifies the kernel0 used for CRC-32  */
    IfxFce_Crc32Kernel_1           /**< \brief Specifies the kernel1 used for CRC-32  */
} IfxFce_Crc32Kernel;

/** \brief Specifies the CRC mode
 */
typedef enum
{
    IfxFce_CrcMode_8  = 0,  /**< \brief Specifies the 8-bit CRC mode */
    IfxFce_CrcMode_16 = 1,  /**< \brief Specifies the 16-bit CRC mode */
    IfxFce_CrcMode_32 = 2   /**< \brief Specifies the 32-bit CRC mode */
} IfxFce_CrcMode;

/** \} */

/** \addtogroup IfxLld_Fce_Std_Module
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Disable the control of FCE module
 * \param fce Specifies pointer to FCE module registers
 * \return None
 */
IFX_INLINE void IfxFce_disableModule(Ifx_FCE *fce);

/** \brief Enable the control of FCE module
 * \param fce Specifies pointer to FCE module registers
 * \return None
 */
IFX_INLINE void IfxFce_enableModule(Ifx_FCE *fce);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Reset the module by clearing the kernel
 * \param fce Specifies pointer to FCE module registers
 * \return None
 */
IFX_EXTERN void IfxFce_resetModule(Ifx_FCE *fce);

/** \} */

/** \addtogroup IfxLld_Fce_Std_Support
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Reflects the CRC data and returns it
 * \param crcStartValue start value for reflection
 * \param crcLength length of reflected value
 * \return Reflected CRC data
 */
IFX_EXTERN uint32 IfxFce_reflectCrc32(uint32 crcStartValue, uint8 crcLength);

/** \} */

/** \addtogroup IfxLld_Fce_Std_InterruptStatus
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Clears the CRC-16 error flags
 * \param fce Specifies pointer to FCE module registers
 * \return None
 */
IFX_INLINE void IfxFce_clearCrc16ErrorFlags(Ifx_FCE *fce);

/** \brief Clears the CRC-32 error flags
 * \param fce Specifies pointer to FCE module registers
 * \param crc32Kernel Specifies the kernel used for CRC-32
 * \return None
 */
IFX_INLINE void IfxFce_clearCrc32ErrorFlags(Ifx_FCE *fce, IfxFce_Crc32Kernel crc32Kernel);

/** \brief Clears the CRC-8 error flags
 * \param fce Specifies pointer to FCE module registers
 * \return None
 */
IFX_INLINE void IfxFce_clearCrc8ErrorFlags(Ifx_FCE *fce);

/** \brief Returns the SRC pointer for FCE
 * \param fce Specifies pointer to FCE module registers
 */
IFX_INLINE volatile Ifx_SRC_SRCR *IfxFce_getSrcPointer(Ifx_FCE *fce);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Gets the CRC-16 interrupt status
 * \param fce Specifies pointer to FCE module registers
 * \return Current CRC-16 interrupt status
 */
IFX_EXTERN Ifx_FCE_STS IfxFce_getCrc16InterruptStatus(Ifx_FCE *fce);

/** \brief Gets the CRC-32 interrupt status
 * \param fce Specifies pointer to FCE module registers
 * \param crc32Kernel Specifies the kernel used for CRC-32
 * \return Current CRC-32 interrupt status
 */
IFX_EXTERN Ifx_FCE_STS IfxFce_getCrc32InterruptStatus(Ifx_FCE *fce, IfxFce_Crc32Kernel crc32Kernel);

/** \brief Gets the CRC-8 interrupt status
 * \param fce Specifies pointer to FCE module registers
 * \return Current CRC-8 interrupt status
 */
IFX_EXTERN Ifx_FCE_STS IfxFce_getCrc8InterruptStatus(Ifx_FCE *fce);

/** \} */

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE void IfxFce_clearCrc16ErrorFlags(Ifx_FCE *fce)
{
    fce->IN2.STS.U = 0x0000000fU;
}


IFX_INLINE void IfxFce_clearCrc32ErrorFlags(Ifx_FCE *fce, IfxFce_Crc32Kernel crc32Kernel)
{
    if (crc32Kernel == IfxFce_Crc32Kernel_0)
    {
        fce->IN0.STS.U = 0x0000000fU;
    }
    else
    {
        fce->IN1.STS.U = 0x0000000fU;
    }
}


IFX_INLINE void IfxFce_clearCrc8ErrorFlags(Ifx_FCE *fce)
{
    fce->IN3.STS.U = 0x0000000fU;
}


IFX_INLINE void IfxFce_disableModule(Ifx_FCE *fce)
{
    uint16 password = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(password);
    fce->CLC.B.DISR = 1;
    IfxScuWdt_setCpuEndinit(password);
}


IFX_INLINE void IfxFce_enableModule(Ifx_FCE *fce)
{
    uint16 password = IfxScuWdt_getCpuWatchdogPassword();
    IfxScuWdt_clearCpuEndinit(password);
    fce->CLC.B.DISR = 0;
    IfxScuWdt_setCpuEndinit(password);
}


IFX_INLINE volatile Ifx_SRC_SRCR *IfxFce_getSrcPointer(Ifx_FCE *fce)
{
    IFX_UNUSED_PARAMETER(fce);
    return &SRC_FCE;
}


#endif /* IFXFCE_H */
