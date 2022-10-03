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
 *  @date       <2022-09-28 14:09:30>
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
	uint8 Rte_Dummy;
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

#define Rte_Write_PpExplict_dataElementPrimitive Rte_Write_CptCtrl_PpExplict_dataElementPrimitive

#define Rte_Write_PpExplict_dataElementArray Rte_Write_CptCtrl_PpExplict_dataElementArray

#define Rte_Write_PpExplict_dataElementStruct Rte_Write_CptCtrl_PpExplict_dataElementStruct

/*******************************************************************************
 **                        Global Function Declarations                       **
******************************************************************************/

/** API functions */

void Rte_AppRunnableCtrl(void);

extern Std_ReturnType Rte_Write_CptCtrl_PpExplict_dataElementPrimitive(PrimitiveUint16 data);

extern Std_ReturnType Rte_Write_CptCtrl_PpExplict_dataElementArray(ArrayUint8 data);

extern Std_ReturnType Rte_Write_CptCtrl_PpExplict_dataElementStruct(StructA * data);

/** runnables */

extern void AppRunnableCtrl(void);



#endif

