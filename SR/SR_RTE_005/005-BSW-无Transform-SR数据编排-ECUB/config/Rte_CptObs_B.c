/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_CptObs_B.c>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-24 16:03:07>
 */
/*============================================================================*/

/* Rte_CptObs_B.c */
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
#include "Rte_CptObs_B.h"
#include "Rte_Data.h"
#include "Com.h"

/*******************************************************************************
 **                        Private Function Declarations                      **
******************************************************************************/

/*******************************************************************************
*Function-Name        RunnableObs_B
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

void Rte_AppRunnableObs_1B(void)
{
	AppRunnableObs_1B();
}

/*******************************************************************************
 **                        Global Function                                    **
******************************************************************************/

/*******************************************************************************
*Function-Name        Rte_Read_CptObs_B_RpExplicit_dataElementPrimitive
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

Std_ReturnType Rte_Read_CptObs_B_RpExplicit_dataElementPrimitive(PrimitiveUint16 * data)
{
	*data = Rte_Buf_CptObs_BPrototype_RpExplicit_dataElementPrimitive_comback;
	
	return RTE_E_OK;
}

/*******************************************************************************
*Function-Name        Rte_Read_CptObs_B_RpExplicit_dataElementArray
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

Std_ReturnType Rte_Read_CptObs_B_RpExplicit_dataElementArray(ArrayUint8 data)
{
	rte_memcpy(data, Rte_Buf_CptObs_BPrototype_RpExplicit_dataElementArray_comback, sizeof(ArrayUint8));
	
	return RTE_E_OK;
}

/*******************************************************************************
*Function-Name        Rte_Read_CptObs_B_RpExplicit_dataElementStruct
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

Std_ReturnType Rte_Read_CptObs_B_RpExplicit_dataElementStruct(StructA * data)
{
	*data = Rte_Buf_CptObs_BPrototype_RpExplicit_dataElementStruct_comback;
	
	return RTE_E_OK;
}


