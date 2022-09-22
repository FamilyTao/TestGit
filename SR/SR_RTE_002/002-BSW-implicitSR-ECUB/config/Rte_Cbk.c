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
 *  @date       <2022-09-21 16:18:11>
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
*Function-Name        Rte_COMCbk_Group_StructA_Msg_StructA
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

void Rte_COMCbk_Group_StructA_Msg_StructA(void)
{
	StructA data;
	Com_ReceiveSignalGroup(Group_StructA_Msg_StructA);
	Com_ReceiveSignal(Group_StructA_Msg_StructA_Signal_DATA8_IPDU_COM_Msg_StructA,&(&data.Crc_Uint8));
	Com_ReceiveSignal(Group_StructA_Msg_StructA_Signal_Counter_IPDU_COM_Msg_StructA,&(&data.Data_Uint16));
	Com_ReceiveSignal(Group_StructA_Msg_StructA_Signal_CRC_IPDU_COM_Msg_StructA,&(&data.Counter_Uint8));
	Com_ReceiveSignal(Group_StructA_Msg_StructA_Signal_DATA16_IPDU_COM_Msg_StructA,&(&data.Data_Uint8));
	Runnable_Obs1B_RpStruct_dataReadAccess_StructA_read_buffer = data;
	
}


