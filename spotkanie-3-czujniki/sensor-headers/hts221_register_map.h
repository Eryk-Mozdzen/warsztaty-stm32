/**
 * @file hts221_register_map.h
 * @author Eryk Możdżeń
 * @date 2023-05-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef HTS221_REGISTER_MAP_H
#define HTS221_REGISTER_MAP_H

#define HTS221_WHO_AM_I         0x0F
#define HTS221_AV_CONF          0x10
#define HTS221_CTRL_REG1        0x20
#define HTS221_CTRL_REG2        0x21
#define HTS221_CTRL_REG3        0x22
#define HTS221_STATUS_REG       0x27
#define HTS221_HUMIDITY_OUT_L   0x28
#define HTS221_HUMIDITY_OUT_H   0x29
#define HTS221_TEMP_OUT_L       0x2A
#define HTS221_TEMP_OUT_H       0x2B

#endif
