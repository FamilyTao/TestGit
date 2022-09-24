/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_CptObs.c>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-23 14:22:27>
 */
/*============================================================================*/

/* Rte_CptObs.c */
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
#include "Rte_CptObs.h"
#include "Rte_Data.h"

/*******************************************************************************
 **                        Private Function Declarations                      **
******************************************************************************/

static void Rte_PRE_Runnable_Obs(void);


/*******************************************************************************
*Function-Name        Runnable_Obs
*Service ID           <None>
*Sync/Async           <Synchronous>
*Reentrancy           <Non Reentrant>
*param-Name[in]       <None>
*Param-Name[out]      <None>
*Param-Name[in/out]   <None>
*return               void
*PreCondition         <None>
*CallByAPI            <None>
******************************************************************************/

void Rte_AppRunnable_Obs(void)
{
	Rte_PRE_Runnable_Obs();
	AppRunnable_Obs();
}

/*******************************************************************************
 **                        Global Function                                    **
******************************************************************************/

/*******************************************************************************
*Function-Name        Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementPrimitive
*Service ID           <None>
*Sync/Async           <Synchronous>
*Reentrancy           <Non Reentrant>
*param-Name[in]       <None>
*Param-Name[out]      <None>
*Param-Name[in/out]   <None>
*return               Std_ReturnType
*PreCondition         <None>
*CallByAPI            <None>
******************************************************************************/

Std_ReturnType Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementPrimitive(PrimitiveUint16 * data)
{
	*data = Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementPrimitive;
	
	return Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementPrimitive;
}

/*******************************************************************************
*Function-Name        Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementArray
*Service ID           <None>
*Sync/Async           <Synchronous>
*Reentrancy           <Non Reentrant>
*param-Name[in]       <None>
*Param-Name[out]      <None>
*Param-Name[in/out]   <None>
*return               Std_ReturnType
*PreCondition         <None>
*CallByAPI            <None>
******************************************************************************/

Std_ReturnType Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementArray(ArrayUint8 data)
{
	rte_memcpy(data, Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementArray, sizeof(ArrayUint8));
	
	return Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementArray;
}

/*******************************************************************************
*Function-Name        Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementStruct
*Service ID           <None>
*Sync/Async           <Synchronous>
*Reentrancy           <Non Reentrant>
*param-Name[in]       <None>
*Param-Name[out]      <None>
*Param-Name[in/out]   <None>
*return               Std_ReturnType
*PreCondition         <None>
*CallByAPI            <None>
******************************************************************************/

Std_ReturnType Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementStruct(StructA * data)
{
	*data = Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementStruct;
	
	return Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementStruct;
}

#define RTE_START_SEC_CODE
#include "RTE_MemMap.h"


static void Rte_PRE_Runnable_Obs(void)
	{
		GetResource(RES_SCHEDULER);
		
		
		Rte_Inst_CptObs.Runnable_Obs_RpAllDataTypeImplicit_dataElementPrimitive->value = Rte_Buf_CptObsPrototype_RpAllDataTypeImplicit_dataElementPrimitive;
		
		rte_memcpy(Rte_Inst_CptObs.Runnable_Obs_RpAllDataTypeImplicit_dataElementArray->value, &Rte_Buf_CptObsPrototype_RpAllDataTypeImplicit_dataElementArray, sizeof(ArrayUint8));
		
		rte_memcpy(&(Rte_Inst_CptObs.Runnable_Obs_RpAllDataTypeImplicit_dataElementStruct->value), &Rte_Buf_CptObsPrototype_RpAllDataTypeImplicit_dataElementStruct, sizeof(StructA));
		
		
		ReleaseResource(RES_SCHEDULER);
		
		
	}

#define RTE_STOP_SEC_CODE
#include "RTE_MemMap.h"



