/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_Cpt_Obs1A.h>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-22 16:10:26>
 */
/*============================================================================*/

/* Rte_Cpt_Obs1A.h */

#ifndef RTE_CPT_OBS1A_H
#define RTE_CPT_OBS1A_H

/*******************************************************************************
 **                        Revision Control History                           **
******************************************************************************/

/*******************************************************************************
 **                        Version Information                                **
******************************************************************************/

/*******************************************************************************
 **                        Include Section                                    **
******************************************************************************/
#include "Rte_DataHandleType.h"
#include "Rte_Cpt_Obs1A_Type.h"

/*******************************************************************************
 **                        Macro Definitions                                  **
******************************************************************************/

typedef struct 
{
	P2VAR(Rte_DE_PrimitiveUint16, AUTOMATIC, RTE_DATA)  Runnable_Obs_RpData_dataElementPrimitive;
	P2VAR(Rte_DE_ArrayUint8, AUTOMATIC, RTE_DATA)  Runnable_Obs_RpData_dataElementArray;
	P2VAR(Rte_DE_StructA, AUTOMATIC, RTE_DATA)  Runnable_Obs_RpData_dataElementStruct;
	P2VAR(Rte_DE_StructArray, AUTOMATIC, RTE_DATA)  Runnable_Obs_RpData_dataElementStructArray;
	P2VAR(Rte_DE_StructA, AUTOMATIC, RTE_DATA)  Runnable_Obs_RpStruct_dataElementsStructA;
} Rte_CDS_Cpt_Obs1A;

#ifndef RTE_CORE
typedef CONSTP2CONST(Rte_CDS_Cpt_Obs1A, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"
extern CONST(Rte_CDS_Cpt_Obs1A, RTE_CONST) Rte_Inst_Cpt_Obs1A;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"




/** API mappings */

#define Rte_IRead_Runnable_Obs_RpData_dataElementPrimitive() ((CONST(PrimitiveUint16,  RTE_DATA))  Rte_Inst_Cpt_Obs1A.Runnable_Obs_RpData_dataElementPrimitive->value)

#define Rte_IRead_Runnable_Obs_RpData_dataElementArray() ((const ArrayUint8*) Rte_Inst_Cpt_Obs1A.Runnable_Obs_RpData_dataElementArray->value)

#define Rte_IRead_Runnable_Obs_RpData_dataElementStruct() ((const StructA*) Rte_Inst_Cpt_Obs1A.Runnable_Obs_RpData_dataElementStruct->value)

#define Rte_IRead_Runnable_Obs_RpData_dataElementStructArray() ((const StructArray*) Rte_Inst_Cpt_Obs1A.Runnable_Obs_RpData_dataElementStructArray->value)

#define Rte_IRead_Runnable_Obs_RpStruct_dataElementsStructA() ((const StructA*) Rte_Inst_Cpt_Obs1A.Runnable_Obs_RpStruct_dataElementsStructA->value)

/*******************************************************************************
 **                        Global Function Declarations                       **
******************************************************************************/

/** API functions */

void Rte_AppRunnable_Obs(void);

/** runnables */

extern void AppRunnable_Obs(void);



#endif

