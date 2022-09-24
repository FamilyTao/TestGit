/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_CptCtrl_A.c>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-24 15:21:48>
 */
/*============================================================================*/

/* Rte_CptCtrl_A.c */
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
#include "Rte_CptCtrl_A.h"
#include "Rte_Data.h"

/*******************************************************************************
 **                        Private Function Declarations                      **
******************************************************************************/

/*******************************************************************************
*Function-Name        RunnableCtrl_A
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
*Function-Name        Rte_Write_CptCtrl_A_PpExplict_dataElementPrimitive
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

Std_ReturnType Rte_Write_CptCtrl_A_PpExplict_dataElementPrimitive(PrimitiveUint16 data)
{
	Std_ReturnType Rte_Status = RTE_E_OK;
	
	Rte_WriteBuffer_Rte_Buf_CptObs_APrototype_RpExplicit_dataElementPrimitive(data);
	return Rte_Status;
}

/*******************************************************************************
*Function-Name        Rte_Write_CptCtrl_A_PpExplict_dataElementArray
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

Std_ReturnType Rte_Write_CptCtrl_A_PpExplict_dataElementArray(ArrayUint8 data)
{
	Std_ReturnType Rte_Status = RTE_E_OK;
	
	SuspendAllInterrupts();
	Rte_WriteBuffer_Rte_Buf_CptObs_APrototype_RpExplicit_dataElementArray(data);
	ResumeAllInterrupts();
	return Rte_Status;
}

/*******************************************************************************
*Function-Name        Rte_Write_CptCtrl_A_PpExplict_dataElementStruct
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

Std_ReturnType Rte_Write_CptCtrl_A_PpExplict_dataElementStruct(StructA * data)
{
	Std_ReturnType Rte_Status = RTE_E_OK;
	Com_SendSignal(SignalGroupStructA36_MsgStructA_SignalCrc8_IPDU_COM_MsgStructA, &data->Crc_Uint8);
	Com_SendSignal(SignalGroupStructA36_MsgStructA_SignalData16_IPDU_COM_MsgStructA, &data->Data_Uint16);
	Com_SendSignal(SignalGroupStructA36_MsgStructA_SignalCounter4_IPDU_COM_MsgStructA, &data->Counter_Uint8);
	Com_SendSignal(SignalGroupStructA36_MsgStructA_SignalData8_IPDU_COM_MsgStructA, &data->Data_Uint8);
	Com_SendSignalGroup(SignalGroupStructA36_MsgStructA);
	
	
	Rte_WriteBuffer_Rte_Buf_CptObs_APrototype_RpExplicit_dataElementStruct(data);
	return Rte_Status;
}


