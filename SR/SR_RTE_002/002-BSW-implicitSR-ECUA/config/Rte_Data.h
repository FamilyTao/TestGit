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
 *  @date       <2022-09-22 16:10:26>
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

extern ArrayUint8 Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementArray;

extern PrimitiveUint16 Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementPrimitive;

extern StructA Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementStruct;

extern StructA Rte_Buf_Cpt_Obs1A_Prototype_RpStruct_dataElementsStructA;

extern StructArray Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementStructArray;

#define RTE_START_SEC_VAR_NO_INIT_8
#include "RTE_MemMap.h"


extern Std_ReturnType Rte_Status_Group_StructA_Msg_StructA;

#define RTE_STOP_SEC_VAR_NO_INIT_8
#include "RTE_MemMap.h"


void rte_memcpy(uint8 * pDest, const uint8 * pSrc, uint32 length);

/*******************************************************************************
 **                        Global Function Declarations                       **
******************************************************************************/



#endif

