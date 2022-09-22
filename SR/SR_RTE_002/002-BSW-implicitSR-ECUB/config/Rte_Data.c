/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_Data.c>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-21 16:18:11>
 */
/*============================================================================*/

/* Rte_Data.c */
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
#include "Rte_Data.h"

/*******************************************************************************
 **                        Global Variable Definitions                        **
******************************************************************************/

StructA Runnable_Obs1B_RpStruct_dataReadAccess_StructA_read_buffer;

StructA Rte_Buf_Cpt_Obs1B_Prototype_RpStruct_dataElementsStructA = {0,1,2,0};

#define RTE_START_SEC_VAR_NO_INIT_8
#include "RTE_MemMap.h"


Std_ReturnType Rte_Status_Group_StructA_Msg_StructA = RTE_E_OK;

#define RTE_STOP_SEC_VAR_NO_INIT_8
#include "RTE_MemMap.h"


void rte_memcpy(uint8 * pDest, const uint8 * pSrc, uint32 length)
{
	while (length--) 
	{
		*pDest++ = *pSrc++;
	}
}


