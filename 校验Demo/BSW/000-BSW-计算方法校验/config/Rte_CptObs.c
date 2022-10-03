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
 *  @date       <2022-09-28 14:09:30>
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
	AppRunnable_Obs();
}

/*******************************************************************************
 **                        Global Function                                    **
******************************************************************************/

/*******************************************************************************
*Function-Name        Rte_Read_CptObs_RpExplicit_dataElementPrimitive
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

Std_ReturnType Rte_Read_CptObs_RpExplicit_dataElementPrimitive(PrimitiveUint16 * data)
{
	*data = Rte_Buf_CptReceiverPrototype_RpExplicit_dataElementPrimitive;
	
	return RTE_E_OK;
}

/*******************************************************************************
*Function-Name        Rte_Read_CptObs_RpExplicit_dataElementArray
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

Std_ReturnType Rte_Read_CptObs_RpExplicit_dataElementArray(ArrayUint8 data)
{
	rte_memcpy(data, Rte_Buf_CptReceiverPrototype_RpExplicit_dataElementArray, sizeof(ArrayUint8));
	
	return RTE_E_OK;
}

/*******************************************************************************
*Function-Name        Rte_Read_CptObs_RpExplicit_dataElementStruct
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

Std_ReturnType Rte_Read_CptObs_RpExplicit_dataElementStruct(StructA * data)
{
	*data = Rte_Buf_CptReceiverPrototype_RpExplicit_dataElementStruct;
	
	return RTE_E_OK;
}


