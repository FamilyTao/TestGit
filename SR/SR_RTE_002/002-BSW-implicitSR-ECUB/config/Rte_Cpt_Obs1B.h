/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_Cpt_Obs1B.h>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-21 16:18:12>
 */
/*============================================================================*/

/* Rte_Cpt_Obs1B.h */

#ifndef RTE_CPT_OBS1B_H
#define RTE_CPT_OBS1B_H

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
#include "Rte_Cpt_Obs1B_Type.h"

/*******************************************************************************
 **                        Macro Definitions                                  **
******************************************************************************/

typedef struct 
{
	P2VAR(Rte_DE_StructA, AUTOMATIC, RTE_DATA)  Runnable_Obs1B_RpStruct_dataElementsStructA;
} Rte_CDS_Cpt_Obs1B;

#ifndef RTE_CORE
typedef CONSTP2CONST(Rte_CDS_Cpt_Obs1B, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"
extern CONST(Rte_CDS_Cpt_Obs1B, RTE_CONST) Rte_Inst_Cpt_Obs1B;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h"




/** API mappings */

#define Rte_IRead_Runnable_Obs1B_RpStruct_dataElementsStructA() ((const StructA*) Rte_Inst_Cpt_Obs1B.Runnable_Obs1B_RpStruct_dataElementsStructA->value)

/*******************************************************************************
 **                        Global Function Declarations                       **
******************************************************************************/

/** API functions */

void Rte_AppRunnable_Obs1(void);

/** runnables */

extern void AppRunnable_Obs1(void);



#endif

