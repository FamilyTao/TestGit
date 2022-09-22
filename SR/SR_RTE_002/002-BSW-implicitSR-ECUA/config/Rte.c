/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte.c>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-22 16:10:25>
 */
/*============================================================================*/

/* Rte.c */
/*******************************************************************************
 **                        Revision Control History                           **
******************************************************************************/

/*******************************************************************************
 **                        Version Information                                **
******************************************************************************/

#define RTE_CORE

/*******************************************************************************
 **                        Include Section                                    **
******************************************************************************/
#include "Os.h"
#include "Rte_Type.h"
#include "Rte_Data.h"
#include "Rte_Main.h"
#include "Rte_Cpt_Ctrl1A.h"
#include "Rte_Cpt_Obs1A.h"
#include "Com.h"

/*******************************************************************************
 **                        Global Variable Definitions                        **
******************************************************************************/

/*******************************************************************************
 **                        Global Function Definitions                        **
******************************************************************************/

Rte_DE_PrimitiveUint16 Rte_Buf_RunnableCtrl_PpComplexData_dataElementPrimitive_ibuffer;
Rte_DE_ArrayUint8 Rte_Buf_RunnableCtrl_PpComplexData_dataElementArray_ibuffer;
Rte_DE_StructA Rte_Buf_RunnableCtrl_PpComplexData_dataElementStruct_ibuffer;
Rte_DE_StructArray Rte_Buf_RunnableCtrl_PpComplexData_dataElementStructArray_ibuffer;
Rte_DE_StructA Rte_Buf_RunnableCtrl_PpStructA_dataElementsStructA_ibuffer;
CONST(Rte_CDS_Cpt_Ctrl1A, RTE_CONST) Rte_Inst_Cpt_Ctrl1A = 
{
	.RunnableCtrl_PpComplexData_dataElementPrimitive = &Rte_Buf_RunnableCtrl_PpComplexData_dataElementPrimitive_ibuffer,
	.RunnableCtrl_PpComplexData_dataElementArray = &Rte_Buf_RunnableCtrl_PpComplexData_dataElementArray_ibuffer,
	.RunnableCtrl_PpComplexData_dataElementStruct = &Rte_Buf_RunnableCtrl_PpComplexData_dataElementStruct_ibuffer,
	.RunnableCtrl_PpComplexData_dataElementStructArray = &Rte_Buf_RunnableCtrl_PpComplexData_dataElementStructArray_ibuffer,
	.RunnableCtrl_PpStructA_dataElementsStructA = &Rte_Buf_RunnableCtrl_PpStructA_dataElementsStructA_ibuffer,
};



Rte_DE_PrimitiveUint16 Rte_Buf_Runnable_Obs_RpData_dataElementPrimitive_ibuffer = {.value = 0};
Rte_DE_ArrayUint8 Rte_Buf_Runnable_Obs_RpData_dataElementArray_ibuffer = {.value = {0}};
Rte_DE_StructA Rte_Buf_Runnable_Obs_RpData_dataElementStruct_ibuffer = {.value = {0,1,2}};
Rte_DE_StructArray Rte_Buf_Runnable_Obs_RpData_dataElementStructArray_ibuffer = {.value = {{0}}};
Rte_DE_StructA Rte_Buf_Runnable_Obs_RpStruct_dataElementsStructA_ibuffer = {.value = {0,0,0,0}};
CONST(Rte_CDS_Cpt_Obs1A, RTE_CONST) Rte_Inst_Cpt_Obs1A = 
{
	.Runnable_Obs_RpData_dataElementPrimitive = &Rte_Buf_Runnable_Obs_RpData_dataElementPrimitive_ibuffer,
	.Runnable_Obs_RpData_dataElementArray = &Rte_Buf_Runnable_Obs_RpData_dataElementArray_ibuffer,
	.Runnable_Obs_RpData_dataElementStruct = &Rte_Buf_Runnable_Obs_RpData_dataElementStruct_ibuffer,
	.Runnable_Obs_RpData_dataElementStructArray = &Rte_Buf_Runnable_Obs_RpData_dataElementStructArray_ibuffer,
	.Runnable_Obs_RpStruct_dataElementsStructA = &Rte_Buf_Runnable_Obs_RpStruct_dataElementsStructA_ibuffer,
};



/*******************************************************************************
*Function-Name        Rte_Start
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

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h"


Std_ReturnType Rte_Start(void)
{
	(void)SetRelAlarm(OsAlarm_10ms, 10, OS_TICKS2MS_SystemTimer_Core0(10));
	
	return RTE_E_OK;
}

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h"


/*******************************************************************************
*Function-Name        Rte_Stop
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

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h"


Std_ReturnType Rte_Stop(void)
{
	return RTE_E_OK;
}

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h"


#define RTE_START_SEC_CODE
#include "Rte_MemMap.h"


void Os_TaskEntry_Rte_OsTask_10ms(void)
{
	Rte_AppRunnable_Obs();
	Rte_AppRunnableCtrl();
}



#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h"



