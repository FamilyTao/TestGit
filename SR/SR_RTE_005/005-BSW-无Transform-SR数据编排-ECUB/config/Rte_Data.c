/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_Data.c>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-24 16:03:07>
 */
/*============================================================================*/

/* Rte_Data.c */
/*******************************************************************************
 **                        Revision Control History                           **
******************************************************************************/

/*******************************************************************************
 **                        Version Information                                **
******************************************************************************/

/*******************************************************************************
 **                        Include Section                                    **
******************************************************************************/
#include "Os.h"
#include "Rte_Data.h"

/*******************************************************************************
 **                        Global Variable Definitions                        **
******************************************************************************/

ArrayUint8 Rte_Buf_CptObs_BPrototype_RpExplicit_dataElementArray_comback = {0};

PrimitiveUint16 Rte_Buf_CptObs_BPrototype_RpExplicit_dataElementPrimitive_comback = 0;

StructA Rte_Buf_CptObs_BPrototype_RpExplicit_dataElementStruct_comback = {0,1,2};

#define RTE_START_SEC_VAR_NO_INIT_8
#include "RTE_MemMap.h"


Std_ReturnType Rte_Status_SignalGroupStructA36_MsgStructA = RTE_E_OK;

#define RTE_STOP_SEC_VAR_NO_INIT_8
#include "RTE_MemMap.h"


void rte_memcpy(uint8 * pDest, const uint8 * pSrc, uint32 length)
{
	while (length--) 
	{
		*pDest++ = *pSrc++;
	}
}


