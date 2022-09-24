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
 *  @date       <2022-09-24 15:21:48>
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
*Function-Name        Rte_COMCbkTAck_SignalGroupStructA36_MsgStructA
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

void Rte_COMCbkTAck_SignalGroupStructA36_MsgStructA(void)
{
	if (!(Rte_Status_SignalGroupStructA36_MsgStructA & RTE_FLAG_TRANSMIT_ACK)) 
	{
		Rte_Status_SignalGroupStructA36_MsgStructA |= RTE_FLAG_TRANSMIT_ACK;
	}
}

/*******************************************************************************
*Function-Name        Rte_COMCbkTErr_SignalGroupStructA36_MsgStructA
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

void Rte_COMCbkTErr_SignalGroupStructA36_MsgStructA(void)
{
	if (!(Rte_Status_SignalGroupStructA36_MsgStructA & RTE_FLAG_TRANSMIT_ACK)) 
	{
		Rte_Status_SignalGroupStructA36_MsgStructA |= RTE_FLAG_TRANSMIT_ACK;
		Rte_Status_SignalGroupStructA36_MsgStructA |= RTE_FLAG_COM_STOPPED;
	}
}


