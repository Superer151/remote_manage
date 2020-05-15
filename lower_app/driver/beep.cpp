/*
 * File      : beep.cpp
 * beep driver application
 * COPYRIGHT (C) 2020, zc
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-5-4      zc           the first version
 */

/**
 * @addtogroup IMX6ULL
 */
/*@{*/

#include "beep.h"

/**************************************************************************
* Local Macro Definition
***************************************************************************/

/**************************************************************************
* Local Type Definition
***************************************************************************/

/**************************************************************************
* Local static Variable Declaration
***************************************************************************/

/**************************************************************************
* Global Variable Declaration
***************************************************************************/

/**************************************************************************
* Local Function Declaration
***************************************************************************/

/**************************************************************************
* Local Function
***************************************************************************/

/**************************************************************************
* Function
***************************************************************************/
/**
 * beep切换函数
 * 
 * @param NULL
 *  
 * @return NULL
 */
void beep_convert(uint8_t work)
{
    int fd;
    uint8_t val;

    USR_DEBUG("beep write:%d\n", work);
    fd = open(BEEP_DEVICE, O_RDWR | O_NDELAY);
    if(fd != -1)
    {
        val = work;
        write(fd, &val, 1);  //将数据写入LED
        close(fd);
    }
}