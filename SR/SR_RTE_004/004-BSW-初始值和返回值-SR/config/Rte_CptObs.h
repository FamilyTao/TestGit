/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_CptObs.h>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-23 14:22:27>
 */
/*============================================================================*/

/* Rte_CptObs.h */

#ifndef RTE_CPTOBS_H
#define RTE_CPTOBS_H

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
#include "Rte_CptObs_Type.h"

/*******************************************************************************
 **                        Macro Definitions                                  **
******************************************************************************/

typedef struct 
{
	P2VAR(Rte_DE_PrimitiveUint16, AUTOMATIC, RTE_DATA)  Runnable_Obs_RpAllDataTypeImplicit_dataElementPrimitive;
	P2VAR(Rte_DE_ArrayUint8, AUTOMATIC, RTE_DATA)  Runnable_Obs_RpAllDataTypeImplicit_dataElementArray;
	P2VAR(Rte_DE_StructA, AUTOMATIC, RTE_DATA)  Runnable_Obs_RpAllDataTypeImplicit_dataElementStruct;
} Rte_CDS_CptObs;

#ifndef RTE_CORE
typedef CONSTP2CONST(Rte_CDS_CptObs, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"
extern CONST(Rte_CDS_CptObs, RTE_CONST) Rte_Inst_CptObs;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"




/** API mappings */

#define Rte_Read_RpAllDataTypeExplicit_dataElementPrimitive Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementPrimitive

#define Rte_Read_RpAllDataTypeExplicit_dataElementArray Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementArray

#define Rte_Read_RpAllDataTypeExplicit_dataElementStruct Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementStruct

#define Rte_IRead_Runnable_Obs_RpAllDataTypeImplicit_dataElementPrimitive() ((CONST(PrimitiveUint16,  RTE_DATA))  Rte_Inst_CptObs.Runnable_Obs_RpAllDataTypeImplicit_dataElementPrimitive->value)

#define Rte_IRead_Runnable_Obs_RpAllDataTypeImplicit_dataElementArray() ((const ArrayUint8*) Rte_Inst_CptObs.Runnable_Obs_RpAllDataTypeImplicit_dataElementArray->value)

#define Rte_IRead_Runnable_Obs_RpAllDataTypeImplicit_dataElementStruct() ((const StructA*) Rte_Inst_CptObs.Runnable_Obs_RpAllDataTypeImplicit_dataElementStruct->value)

/*******************************************************************************
 **                        Global Function Declarations                       **
******************************************************************************/

/** API functions */

void Rte_AppRunnable_Obs(void);

Std_ReturnType Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementPrimitive(PrimitiveUint16 * data);

Std_ReturnType Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementArray(ArrayUint8 data);

Std_ReturnType Rte_Read_CptObs_RpAllDataTypeExplicit_dataElementStruct(StructA * data);

/** runnables */

extern void AppRunnable_Obs(void);



#endif

