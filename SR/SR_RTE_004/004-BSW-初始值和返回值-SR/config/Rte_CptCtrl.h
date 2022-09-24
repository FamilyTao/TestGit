/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_CptCtrl.h>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-23 14:22:27>
 */
/*============================================================================*/

/* Rte_CptCtrl.h */

#ifndef RTE_CPTCTRL_H
#define RTE_CPTCTRL_H

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
#include "Rte_CptCtrl_Type.h"

/*******************************************************************************
 **                        Macro Definitions                                  **
******************************************************************************/

typedef struct 
{
	P2VAR(Rte_DE_PrimitiveUint16, AUTOMATIC, RTE_DATA)  RunnableCtrl_PpAllDataTypeImplicit_dataElementPrimitive;
	P2VAR(Rte_DE_ArrayUint8, AUTOMATIC, RTE_DATA)  RunnableCtrl_PpAllDataTypeImplicit_dataElementArray;
	P2VAR(Rte_DE_StructA, AUTOMATIC, RTE_DATA)  RunnableCtrl_PpAllDataTypeImplicit_dataElementStruct;
} Rte_CDS_CptCtrl;

#ifndef RTE_CORE
typedef CONSTP2CONST(Rte_CDS_CptCtrl, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"
extern CONST(Rte_CDS_CptCtrl, RTE_CONST) Rte_Inst_CptCtrl;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"




/** API mappings */

#define Rte_Write_PpAllDataTypeExplicit_dataElementPrimitive Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementPrimitive

#define Rte_Write_PpAllDataTypeExplicit_dataElementArray Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementArray

#define Rte_Write_PpAllDataTypeExplicit_dataElementStruct Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementStruct

#define Rte_IWrite_RunnableCtrl_PpAllDataTypeImplicit_dataElementPrimitive(data) (Rte_Inst_CptCtrl.RunnableCtrl_PpAllDataTypeImplicit_dataElementPrimitive->value= data)

#define Rte_IWriteRef_RunnableCtrl_PpAllDataTypeImplicit_dataElementPrimitive() ((P2VAR(PrimitiveUint16, AUTOMATIC, RTE_DATA))  &Rte_Inst_CptCtrl.RunnableCtrl_PpAllDataTypeImplicit_dataElementPrimitive->value)

#define Rte_IWrite_RunnableCtrl_PpAllDataTypeImplicit_dataElementArray(data) rte_memcpy(Rte_Inst_CptCtrl.RunnableCtrl_PpAllDataTypeImplicit_dataElementArray->value, data, sizeof(ArrayUint8));

#define Rte_IWriteRef_RunnableCtrl_PpAllDataTypeImplicit_dataElementArray() ((P2VAR(ArrayUint8, AUTOMATIC, RTE_DATA))  Rte_Inst_CptCtrl.RunnableCtrl_PpAllDataTypeImplicit_dataElementArray->value)

#define Rte_IWrite_RunnableCtrl_PpAllDataTypeImplicit_dataElementStruct(data) (Rte_Inst_CptCtrl.RunnableCtrl_PpAllDataTypeImplicit_dataElementStruct->value= *data)

#define Rte_IWriteRef_RunnableCtrl_PpAllDataTypeImplicit_dataElementStruct() ((P2VAR(StructA, AUTOMATIC, RTE_DATA))  Rte_Inst_CptCtrl.RunnableCtrl_PpAllDataTypeImplicit_dataElementStruct->value)

/*******************************************************************************
 **                        Global Function Declarations                       **
******************************************************************************/

/** API functions */

void Rte_AppRunnableCtrl(void);

extern Std_ReturnType Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementPrimitive(PrimitiveUint16 data);

extern Std_ReturnType Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementArray(ArrayUint8 data);

extern Std_ReturnType Rte_Write_CptCtrl_PpAllDataTypeExplicit_dataElementStruct(StructA * data);

/** runnables */

extern void AppRunnableCtrl(void);



#endif

