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
 *  @date       <2022-09-22 16:10:26>
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

ArrayUint8 Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementArray = 0;

PrimitiveUint16 Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementPrimitive = 0;

StructA Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementStruct = 0;

StructA Rte_Buf_Cpt_Obs1A_Prototype_RpStruct_dataElementsStructA = {0,0,0,0};

StructArray Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementStructArray = 0;

#define RTE_START_SEC_VAR_NO_INIT_8
#include "RTE_MemMap.h"


Std_ReturnType Rte_Status_Group_StructA_Msg_StructA = RTE_E_OK;

#define RTE_STOP_SEC_VAR_NO_INIT_8
#include "RTE_MemMap.h"


void rte_memcpy(uint8 * pDest, const uint8 * pSrc, uint32 length)
{
	while (length--) 
	{
		*pDest++ = *pSrc++;
	}
}


