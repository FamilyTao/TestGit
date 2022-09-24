/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_Cbk.c>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-24 16:03:07>
 */
/*============================================================================*/

/* Rte_Cbk.c */
/*******************************************************************************
 **                        Revision Control History                           **
******************************************************************************/

/*******************************************************************************
 **                        Version Information                                **
******************************************************************************/

/*******************************************************************************
 **                        Include Section                                    **
******************************************************************************/
#include "Rte_Cbk.h"

/*******************************************************************************
 **                        Global Function                                    **
******************************************************************************/

/*******************************************************************************
*Function-Name        Rte_COMCbk_SignalGroupStructA36_MsgStructA
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

void Rte_COMCbk_SignalGroupStructA36_MsgStructA(void)
{
	Std_ReturnType ret = RTE_E_OK;
	Std_ReturnType retTransformer;
	StructA data;
	Com_ReceiveSignalGroup(SignalGroupStructA36_MsgStructA);
	Com_ReceiveSignal(SignalGroupStructA36_MsgStructA_SignalData8_IPDU_COM_MsgStructA,&(data.Crc_Uint8));
	Com_ReceiveSignal(SignalGroupStructA36_MsgStructA_SignalCounter4_IPDU_COM_MsgStructA,&(data.Data_Uint16));
	Com_ReceiveSignal(SignalGroupStructA36_MsgStructA_SignalCrc8_IPDU_COM_MsgStructA,&(data.Counter_Uint8));
	Com_ReceiveSignal(SignalGroupStructA36_MsgStructA_SignalData16_IPDU_COM_MsgStructA,&(data.Data_Uint8));
	if (ret !=RTE_E_COM_STOPPED) 
	{
		if (!Rte_IsInfrastructureError(retTransformer)) 
		{
			Rte_Buf_CptObs_BPrototype_RpExplicit_dataElementStruct_comback = data;
		}
	}
	
}


