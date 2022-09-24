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
 *  @date       <2022-09-23 14:22:27>
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

ArrayUint8 Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementArray = {0};

ArrayUint8 Rte_Buf_CptObsPrototype_RpAllDataTypeImplicit_dataElementArray = 0;

PrimitiveUint16 Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementPrimitive = 0;

PrimitiveUint16 Rte_Buf_CptObsPrototype_RpAllDataTypeImplicit_dataElementPrimitive = 0;

Std_ReturnType Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementPrimitive = RTE_E_NEVER_RECEIVED;

Std_ReturnType Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementArray = RTE_E_NEVER_RECEIVED;

Std_ReturnType Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementStruct = RTE_E_NEVER_RECEIVED;

StructA Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementStruct = {0,1,2};

StructA Rte_Buf_CptObsPrototype_RpAllDataTypeImplicit_dataElementStruct = 0;

void rte_memcpy(uint8 * pDest, const uint8 * pSrc, uint32 length)
{
	while (length--) 
	{
		*pDest++ = *pSrc++;
	}
}

void Rte_WriteBuffer_Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementArray(ArrayUint8 value)
{
	rte_memcpy(Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementArray, value, sizeof(ArrayUint8));
}

void Rte_WriteBuffer_Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementPrimitive(PrimitiveUint16 value)
{
	Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementPrimitive = value;
}

void Rte_WriteBuffer_Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementStruct(StructA * value)
{
	rte_memcpy(&Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementStruct, value, sizeof(StructA));
}


