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
 *  @date       <2022-09-28 14:09:30>
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
}

/*******************************************************************************
 **                        Global Function                                    **
******************************************************************************/

/*******************************************************************************
*Function-Name        Rte_Write_CptCtrl_PpExplict_dataElementPrimitive
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

Std_ReturnType Rte_Write_CptCtrl_PpExplict_dataElementPrimitive(PrimitiveUint16 data)
{
	Std_ReturnType Rte_Status = RTE_E_OK;
	
	Rte_WriteBuffer_Rte_Buf_CptReceiverPrototype_RpExplicit_dataElementPrimitive(data);
	return Rte_Status;
}

/*******************************************************************************
*Function-Name        Rte_Write_CptCtrl_PpExplict_dataElementArray
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

Std_ReturnType Rte_Write_CptCtrl_PpExplict_dataElementArray(ArrayUint8 data)
{
	Std_ReturnType Rte_Status = RTE_E_OK;
	
	SuspendAllInterrupts();
	Rte_WriteBuffer_Rte_Buf_CptReceiverPrototype_RpExplicit_dataElementArray(data);
	ResumeAllInterrupts();
	return Rte_Status;
}

/*******************************************************************************
*Function-Name        Rte_Write_CptCtrl_PpExplict_dataElementStruct
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

Std_ReturnType Rte_Write_CptCtrl_PpExplict_dataElementStruct(StructA * data)
{
	Std_ReturnType Rte_Status = RTE_E_OK;
	
	Rte_WriteBuffer_Rte_Buf_CptReceiverPrototype_RpExplicit_dataElementStruct(data);
	return Rte_Status;
}


