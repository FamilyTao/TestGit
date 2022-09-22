/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_Cpt_Ctrl1A.c>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-22 16:10:26>
 */
/*============================================================================*/

/* Rte_Cpt_Ctrl1A.c */
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
#include "Rte_Cpt_Ctrl1A.h"
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

#define RTE_START_SEC_CODE
#include "RTE_MemMap.h"


static void Rte_POST_RunnableCtrl(void)
	{
		GetResource(RES_SCHEDULER);
		
		
		Com_SendSignal(Group_StructA_Msg_StructA_Signal_DATA8_IPDU_COM_Msg_StructA, Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpStructA_dataElementsStructA->value->Crc_Uint8);
		Com_SendSignal(Group_StructA_Msg_StructA_Signal_Counter_IPDU_COM_Msg_StructA, Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpStructA_dataElementsStructA->value->Data_Uint16);
		Com_SendSignal(Group_StructA_Msg_StructA_Signal_CRC_IPDU_COM_Msg_StructA, Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpStructA_dataElementsStructA->value->Counter_Uint8);
		Com_SendSignal(Group_StructA_Msg_StructA_Signal_DATA16_IPDU_COM_Msg_StructA, Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpStructA_dataElementsStructA->value->Data_Uint8);
		Com_SendSignalGroup(Group_StructA_Msg_StructA);
		
		
		
		Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementPrimitive = Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementPrimitive->value;
		
		rte_memcpy(Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementArray->value, &Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementArray, sizeof(ArrayUint8));
		
		rte_memcpy(&(Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementStruct->value), &Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementStruct, sizeof(StructA));
		
		rte_memcpy(&(Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementStructArray->value), &Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementStructArray, sizeof(StructArray));
		
		rte_memcpy(&(Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpStructA_dataElementsStructA->value), &Rte_Buf_Cpt_Obs1A_Prototype_RpStruct_dataElementsStructA, sizeof(StructA));
		
		
		ReleaseResource(RES_SCHEDULER);
		
		
	}

#define RTE_STOP_SEC_CODE
#include "RTE_MemMap.h"



