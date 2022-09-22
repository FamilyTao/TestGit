/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_DataHandleType.h>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-22 16:10:26>
 */
/*============================================================================*/

/* Rte_Data_Handle_Type.h */

#ifndef RTE_DATA_HANDLE_TYPE_H
#define RTE_DATA_HANDLE_TYPE_H

/*******************************************************************************
 **                        Revision Control History                           **
******************************************************************************/

/*******************************************************************************
 **                        Version Information                                **
******************************************************************************/

/*******************************************************************************
 **                        Include Section                                    **
******************************************************************************/
#include "Rte_Type.h"

typedef struct 
{
	PrimitiveUint16 value;
} Rte_DE_PrimitiveUint16;

typedef struct 
{
	ArrayUint8 value;
} Rte_DE_ArrayUint8;

typedef struct 
{
	StructA value;
} Rte_DE_StructA;

typedef struct 
{
	StructArray value;
} Rte_DE_StructArray;



#endif

