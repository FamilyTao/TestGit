/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_Cpt_Obs1B.c>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-21 16:18:12>
 */
/*============================================================================*/

/* Rte_Cpt_Obs1B.c */
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
#include "Rte_Cpt_Obs1B.h"
#include "Rte_Data.h"

/*******************************************************************************
 **                        Private Function Declarations                      **
******************************************************************************/

static void Rte_PRE_Runnable_Obs1B(void);


/*******************************************************************************
*Function-Name        Runnable_Obs1B
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

void Rte_AppRunnable_Obs1(void)
{
	Rte_PRE_Runnable_Obs1B();
	AppRunnable_Obs1();
}

/*******************************************************************************
 **                        Global Function                                    **
******************************************************************************/

#define RTE_START_SEC_CODE
#include "RTE_MemMap.h"


static void Rte_PRE_Runnable_Obs1B(void)
	{
		GetResource(RES_SCHEDULER);
		
		Rte_Inst_Cpt_Obs1B.Runnable_Obs1B_RpStruct_dataElementsStructA->value = Runnable_Obs1B_RpStruct_dataReadAccess_StructA_read_buffer;
		
		
		rte_memcpy(&(Rte_Inst_Cpt_Obs1B.Runnable_Obs1B_RpStruct_dataElementsStructA->value), &Rte_Buf_Cpt_Obs1B_Prototype_RpStruct_dataElementsStructA, sizeof(StructA));
		
		
		ReleaseResource(RES_SCHEDULER);
		
		
	}

#define RTE_STOP_SEC_CODE
#include "RTE_MemMap.h"



