/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_Cpt_Ctrl1A.h>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-22 16:10:26>
 */
/*============================================================================*/

/* Rte_Cpt_Ctrl1A.h */

#ifndef RTE_CPT_CTRL1A_H
#define RTE_CPT_CTRL1A_H

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
#include "Rte_Cpt_Ctrl1A_Type.h"

/*******************************************************************************
 **                        Macro Definitions                                  **
******************************************************************************/

typedef struct 
{
	P2VAR(Rte_DE_PrimitiveUint16, AUTOMATIC, RTE_DATA)  RunnableCtrl_PpComplexData_dataElementPrimitive;
	P2VAR(Rte_DE_ArrayUint8, AUTOMATIC, RTE_DATA)  RunnableCtrl_PpComplexData_dataElementArray;
	P2VAR(Rte_DE_StructA, AUTOMATIC, RTE_DATA)  RunnableCtrl_PpComplexData_dataElementStruct;
	P2VAR(Rte_DE_StructArray, AUTOMATIC, RTE_DATA)  RunnableCtrl_PpComplexData_dataElementStructArray;
	P2VAR(Rte_DE_StructA, AUTOMATIC, RTE_DATA)  RunnableCtrl_PpStructA_dataElementsStructA;
} Rte_CDS_Cpt_Ctrl1A;

#ifndef RTE_CORE
typedef CONSTP2CONST(Rte_CDS_Cpt_Ctrl1A, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"
extern CONST(Rte_CDS_Cpt_Ctrl1A, RTE_CONST) Rte_Inst_Cpt_Ctrl1A;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"




/** API mappings */

#define Rte_IWrite_RunnableCtrl_PpComplexData_dataElementPrimitive(data) (Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementPrimitive->value= data)

#define Rte_IWriteRef_RunnableCtrl_PpComplexData_dataElementPrimitive() ((P2VAR(PrimitiveUint16, AUTOMATIC, RTE_DATA))  &Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementPrimitive->value)

#define Rte_IWrite_RunnableCtrl_PpComplexData_dataElementArray(data) rte_memcpy(Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementArray->value, data, sizeof(ArrayUint8));

#define Rte_IWriteRef_RunnableCtrl_PpComplexData_dataElementArray() ((P2VAR(ArrayUint8, AUTOMATIC, RTE_DATA))  Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementArray->value)

#define Rte_IWrite_RunnableCtrl_PpComplexData_dataElementStruct(data) (Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementStruct->value= *data)

#define Rte_IWriteRef_RunnableCtrl_PpComplexData_dataElementStruct() ((P2VAR(StructA, AUTOMATIC, RTE_DATA))  Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementStruct->value)

#define Rte_IWrite_RunnableCtrl_PpComplexData_dataElementStructArray(data) (Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementStructArray->value= *data)

#define Rte_IWriteRef_RunnableCtrl_PpComplexData_dataElementStructArray() ((P2VAR(StructArray, AUTOMATIC, RTE_DATA))  Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpComplexData_dataElementStructArray->value)

#define Rte_IWrite_RunnableCtrl_PpStructA_dataElementsStructA(data) (Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpStructA_dataElementsStructA->value= *data)

#define Rte_IWriteRef_RunnableCtrl_PpStructA_dataElementsStructA() ((P2VAR(StructA, AUTOMATIC, RTE_DATA))  Rte_Inst_Cpt_Ctrl1A.RunnableCtrl_PpStructA_dataElementsStructA->value)

/*******************************************************************************
 **                        Global Function Declarations                       **
******************************************************************************/

/** API functions */

void Rte_AppRunnableCtrl(void);

/** runnables */

extern void AppRunnableCtrl(void);



#endif

