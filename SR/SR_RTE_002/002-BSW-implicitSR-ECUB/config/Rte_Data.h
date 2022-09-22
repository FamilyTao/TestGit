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
 *  @date       <2022-09-21 16:18:12>
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

extern StructA Runnable_Obs1B_RpStruct_dataReadAccess_StructA_read_buffer;

extern StructA Rte_Buf_Cpt_Obs1B_Prototype_RpStruct_dataElementsStructA;

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

