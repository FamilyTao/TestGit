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
 *  @date       <2022-09-28 14:09:30>
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
	uint8 Rte_Dummy;
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

#define Rte_Read_RpExplicit_dataElementPrimitive Rte_Read_CptObs_RpExplicit_dataElementPrimitive

#define Rte_Read_RpExplicit_dataElementArray Rte_Read_CptObs_RpExplicit_dataElementArray

#define Rte_Read_RpExplicit_dataElementStruct Rte_Read_CptObs_RpExplicit_dataElementStruct

/*******************************************************************************
 **                        Global Function Declarations                       **
******************************************************************************/

/** API functions */

void Rte_AppRunnable_Obs(void);

Std_ReturnType Rte_Read_CptObs_RpExplicit_dataElementPrimitive(PrimitiveUint16 * data);

Std_ReturnType Rte_Read_CptObs_RpExplicit_dataElementArray(ArrayUint8 data);

Std_ReturnType Rte_Read_CptObs_RpExplicit_dataElementStruct(StructA * data);

/** runnables */

extern void AppRunnable_Obs(void);



#endif

