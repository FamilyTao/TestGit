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
 *  @date       <2022-09-23 14:22:27>
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
#include "Rte_CptCtrl.h"
#include "Rte_CptObs.h"

/*******************************************************************************
 **                        Global Variable Definitions                        **
******************************************************************************/

/*******************************************************************************
 **                        Global Function Definitions                        **
******************************************************************************/

Rte_DE_PrimitiveUint16 Rte_Buf_RunnableCtrl_PpAllDataTypeImplicit_dataElementPrimitive_ibuffer;
Rte_DE_ArrayUint8 Rte_Buf_RunnableCtrl_PpAllDataTypeImplicit_dataElementArray_ibuffer;
Rte_DE_StructA Rte_Buf_RunnableCtrl_PpAllDataTypeImplicit_dataElementStruct_ibuffer;
CONST(Rte_CDS_CptCtrl, RTE_CONST) Rte_Inst_CptCtrl = 
{
	.RunnableCtrl_PpAllDataTypeImplicit_dataElementPrimitive = &Rte_Buf_RunnableCtrl_PpAllDataTypeImplicit_dataElementPrimitive_ibuffer,
	.RunnableCtrl_PpAllDataTypeImplicit_dataElementArray = &Rte_Buf_RunnableCtrl_PpAllDataTypeImplicit_dataElementArray_ibuffer,
	.RunnableCtrl_PpAllDataTypeImplicit_dataElementStruct = &Rte_Buf_RunnableCtrl_PpAllDataTypeImplicit_dataElementStruct_ibuffer,
};



Rte_DE_PrimitiveUint16 Rte_Buf_Runnable_Obs_RpAllDataTypeImplicit_dataElementPrimitive_ibuffer = {.value = 0};
Rte_DE_ArrayUint8 Rte_Buf_Runnable_Obs_RpAllDataTypeImplicit_dataElementArray_ibuffer = {.value = {0}};
Rte_DE_StructA Rte_Buf_Runnable_Obs_RpAllDataTypeImplicit_dataElementStruct_ibuffer = {.value = {0,1,2}};
CONST(Rte_CDS_CptObs, RTE_CONST) Rte_Inst_CptObs = 
{
	.Runnable_Obs_RpAllDataTypeImplicit_dataElementPrimitive = &Rte_Buf_Runnable_Obs_RpAllDataTypeImplicit_dataElementPrimitive_ibuffer,
	.Runnable_Obs_RpAllDataTypeImplicit_dataElementArray = &Rte_Buf_Runnable_Obs_RpAllDataTypeImplicit_dataElementArray_ibuffer,
	.Runnable_Obs_RpAllDataTypeImplicit_dataElementStruct = &Rte_Buf_Runnable_Obs_RpAllDataTypeImplicit_dataElementStruct_ibuffer,
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



