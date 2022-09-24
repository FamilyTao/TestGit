/*============================================================================*/
/*  Copyright (C) iSOFT   (2020), iSOFT INFRASTRUCTURE SOFTWARE CO.,LTD.
 *  
 *  All rights reserved. This software is iSOFT property. Duplication 
 *  or disclosure without iSOFT written authorization is prohibited.
 *  
 *  @file       <Rte_Cbk.h>
 *  @brief      <>
 *  
 *  <MCU:TC397>
 *  
 *  @author     <>
 *  @date       <2022-09-24 15:21:48>
 */
/*============================================================================*/

/* Rte_Cbk.h */

#ifndef RTE_CBK_H
#define RTE_CBK_H

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
#include "Com.h"
#include "Rte_Data.h"

/*******************************************************************************
 **                        Global Function Definitions                        **
******************************************************************************/

void Rte_COMCbkTAck_SignalGroupStructA36_MsgStructA(void);

void Rte_COMCbkTErr_SignalGroupStructA36_MsgStructA(void);



#endif

