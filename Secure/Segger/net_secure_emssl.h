/*
*********************************************************************************************************
*                                              uC/TCP-IP
*                                      The Embedded TCP/IP Suite
*
*                    Copyright 2004-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                     NETWORK SECURITY PORT LAYER
*
*                                            SEGGER emSSL
*
* Filename : net_secure_emssl.h
* Version  : V3.06.00
*********************************************************************************************************
* Note(s)  : (1) Assumes the following versions (or more recent) of software modules are included in
*                the project build :
*
*                (a) SEGGER emSSL V2.54a
*                (b) uC/Clk V3.09
*
*                See also 'net.h  Note #1'.
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef  NET_SECURE_EMSSL_MODULE
#define  NET_SECURE_EMSSL_MODULE


/*
*********************************************************************************************************
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*********************************************************************************************************
*/

#include  <SEGGER.h>
#include  <SSL.h>
#include  <SSL_Types.h>
#include  <CRYPTO.h>

#ifdef   NET_SECURE_MODULE_EN


/*
*********************************************************************************************************
*********************************************************************************************************
*                                      GLOBAL FUNCTION PROTOTYPES
*********************************************************************************************************
*********************************************************************************************************
*/

void  SSL_X_Config   (void);
void  SSL_OS_Init    (void);
void  CRYPTO_OS_Init (void);
void  CRYPTO_X_Config(void);

#endif
#endif