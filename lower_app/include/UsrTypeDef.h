/*
 * File      : typedef.h
 * system define
 * COPYRIGHT (C) 2020, zc
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-5-4      zc           the first version
 * 2020-5-20     zc           Code standardization 
 */

/**
 * @addtogroup IMX6ULL
 */
/*@{*/
#ifndef _INCLUDE_TYPEDEF_H
#define _INCLUDE_TYPEDEF_H

/***************************************************************************
* Include Header Files
***************************************************************************/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include <stdlib.h>

/**************************************************************************
* Global Macro Definition
***************************************************************************/
#define __SYSTEM_DEBUG          0
#define __DEBUG_PRINTF			1
#define __DRIVER_DEBUG          1

/*返回状态*/
#define RT_OK               	0x00
#define RT_FAIL             	0x01
#define RT_EMPTY            	0x02
#define RT_TIMEOUT              0x03

/**************************************************************************
* Global Type Definition
***************************************************************************/
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

/**************************************************************************
* Global Variable Declaration
***************************************************************************/
#define TTY_DEVICE  "/dev/ttymxc2"
#define LED_DEVICE  "/dev/led"
#define BEEP_DEVICE "/dev/beep"

/**************************************************************************
* Global Functon Declaration
***************************************************************************/
/*调试接口*/
#if __DEBUG_PRINTF	== 1
#define USR_DEBUG		printf
#else
static int USR_DEBUG(const char *format, ...){}
#endif

#if __DRIVER_DEBUG == 1
#define DRIVER_DEBUG		printf
#else
static int DRIVER_DEBUG(const char *format, ...){}
#endif

void SystemLogArray(uint8_t *pArrayBuffer, uint16_t nArraySize);
#endif