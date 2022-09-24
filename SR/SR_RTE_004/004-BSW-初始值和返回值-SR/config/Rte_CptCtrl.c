/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_CptCtrl.c>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-23 14:22:27>
 */
/*============================================================================*/

/* Rte_CptCtrl.c */
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
#include "Rte_CptCtrl.h"
#include "Rte_Data.h"

/*******************************************************************************
 **                        Private Function Declarations                      **
******************************************************************************/

static void Rte_POST_RunnableCtrl(void);


/*******************************************************************************
*Function-Name        RunnableCtrl
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

void Rte_AppRunnableCtrl(void)
{
	AppRunnableCtrl();
	Rte_POST_RunnableCtrl();
}

/*******************************************************************************
 **                        Global Function                                    **
******************************************************************************/

/*******************************************************************************
*Function-Name        Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementPrimitive
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

Std_ReturnType Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementPrimitive(PrimitiveUint16 data)
{
	Std_ReturnType Rte_Status = RTE_E_OK;
	
	Rte_WriteBuffer_Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementPrimitive(data);
	Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementPrimitive = RTE_E_OK;
	Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementPrimitive = RTE_E_OK;
	Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementPrimitive = RTE_E_OK;
	return Rte_Status;
}

/*******************************************************************************
*Function-Name        Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementArray
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

Std_ReturnType Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementArray(ArrayUint8 data)
{
	Std_ReturnType Rte_Status = RTE_E_OK;
	
	SuspendAllInterrupts();
	Rte_WriteBuffer_Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementArray(data);
	ResumeAllInterrupts();
	Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementArray = RTE_E_OK;
	Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementArray = RTE_E_OK;
	Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementArray = RTE_E_OK;
	return Rte_Status;
}

/*******************************************************************************
*Function-Name        Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementStruct
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

Std_ReturnType Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementStruct(StructA * data)
{
	Std_ReturnType Rte_Status = RTE_E_OK;
	
	Rte_WriteBuffer_Rte_Buf_CptObsPrototype_RpAllDataTypeExplicit_dataElementStruct(data);
	Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementStruct = RTE_E_OK;
	Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementStruct = RTE_E_OK;
	Rte_Status_CptCtrlPrototype_PpAllDataTypeExplicit_dataElementStruct = RTE_E_OK;
	return Rte_Status;
}

#define RTE_START_SEC_CODE
#include "RTE_MemMap.h"


static void Rte_POST_RunnableCtrl(void)
	{
		GetResource(RES_SCHEDULER);
		
		
		
		Rte_Buf_CptObsPrototype_RpAllDataTypeImplicit_dataElementPrimitive = Rte_Inst_CptCtrl.RunnableCtrl_PpAllDataTypeImplicit_dataElementPrimitive->value;
		
		rte_memcpy(Rte_Inst_CptCtrl.RunnableCtrl_PpAllDataTypeImplicit_dataElementArray->value, &Rte_Buf_CptObsPrototype_RpAllDataTypeImplicit_dataElementArray, sizeof(ArrayUint8));
		
		rte_memcpy(&(Rte_Inst_CptCtrl.RunnableCtrl_PpAllDataTypeImplicit_dataElementStruct->value), &Rte_Buf_CptObsPrototype_RpAllDataTypeImplicit_dataElementStruct, sizeof(StructA));
		
		
		ReleaseResource(RES_SCHEDULER);
		
		
	}

#define RTE_STOP_SEC_CODE
#include "RTE_MemMap.h"



