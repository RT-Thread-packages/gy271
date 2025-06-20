/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author            Notes
 * 2020-01-08     JiangChenhui      the first version
 */

#ifndef __SENSOR_GYRO_GY271_H__
#define __SENSOR_GYRO_GY271_H__

#include "rtdevice.h"
#include "gy271.h"

#define GY271_I2C_ADDR 0x1E

#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 2))
        #define RT_SIZE_TYPE   rt_ssize_t
    #else
        #define RT_SIZE_TYPE   rt_size_t
    #endif
#endif

int rt_hw_gy271_init(const char *name, struct rt_sensor_config *cfg);

#endif
