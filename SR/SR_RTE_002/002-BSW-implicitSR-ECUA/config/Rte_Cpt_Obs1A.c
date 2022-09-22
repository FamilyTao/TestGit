/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_Cpt_Obs1A.c>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-22 16:10:26>
 */
/*============================================================================*/

/* Rte_Cpt_Obs1A.c */
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
#include "Rte_Cpt_Obs1A.h"
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

#define RTE_START_SEC_CODE
#include "RTE_MemMap.h"


static void Rte_PRE_Runnable_Obs(void)
	{
		GetResource(RES_SCHEDULER);
		
		
		Rte_Inst_Cpt_Obs1A.Runnable_Obs_RpData_dataElementPrimitive->value = Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementPrimitive;
		
		rte_memcpy(Rte_Inst_Cpt_Obs1A.Runnable_Obs_RpData_dataElementArray->value, &Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementArray, sizeof(ArrayUint8));
		
		rte_memcpy(&(Rte_Inst_Cpt_Obs1A.Runnable_Obs_RpData_dataElementStruct->value), &Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementStruct, sizeof(StructA));
		
		rte_memcpy(&(Rte_Inst_Cpt_Obs1A.Runnable_Obs_RpData_dataElementStructArray->value), &Rte_Buf_Cpt_Obs1A_Prototype_RpData_dataElementStructArray, sizeof(StructArray));
		
		rte_memcpy(&(Rte_Inst_Cpt_Obs1A.Runnable_Obs_RpStruct_dataElementsStructA->value), &Rte_Buf_Cpt_Obs1A_Prototype_RpStruct_dataElementsStructA, sizeof(StructA));
		
		
		ReleaseResource(RES_SCHEDULER);
		
		
	}

#define RTE_STOP_SEC_CODE
#include "RTE_MemMap.h"



