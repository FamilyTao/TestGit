/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_Data.h>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-24 15:21:48>
 */
/*============================================================================*/

/* Rte_Data.h */

#ifndef RTE_DATA_H
#define RTE_DATA_H

/*******************************************************************************
 **                        Revision Control History                           **
******************************************************************************/

/*******************************************************************************
 **                        Version Information                                **
******************************************************************************/

/*******************************************************************************
 **                        Include Section                                    **
******************************************************************************/
#include "Rte_Type.h"

static inline void Rte_DataInit(void * data,uint32 Length)
{
	uint32 i;
	uint8* pBuf = (uint8*)data;
	for (i = 0; i < Length; i++) 
	{
		pBuf[i] = 0;
	}
}

/*******************************************************************************
 **                        Global Variable Declarations                       **
******************************************************************************/

extern ArrayUint8 Rte_Buf_CptObs_APrototype_RpExplicit_dataElementArray;

extern PrimitiveUint16 Rte_Buf_CptObs_APrototype_RpExplicit_dataElementPrimitive;

extern StructA Rte_Buf_CptObs_APrototype_RpExplicit_dataElementStruct;

#define RTE_START_SEC_VAR_NO_INIT_8
#include "RTE_MemMap.h"


extern Std_ReturnType Rte_Status_SignalGroupStructA36_MsgStructA;

#define RTE_STOP_SEC_VAR_NO_INIT_8
#include "RTE_MemMap.h"


void rte_memcpy(uint8 * pDest, const uint8 * pSrc, uint32 length);

void Rte_WriteBuffer_Rte_Buf_CptObs_APrototype_RpExplicit_dataElementArray(ArrayUint8 value);

void Rte_WriteBuffer_Rte_Buf_CptObs_APrototype_RpExplicit_dataElementPrimitive(PrimitiveUint16 value);

void Rte_WriteBuffer_Rte_Buf_CptObs_APrototype_RpExplicit_dataElementStruct(StructA * value);

/*******************************************************************************
 **                        Global Function Declarations                       **
******************************************************************************/



#endif

