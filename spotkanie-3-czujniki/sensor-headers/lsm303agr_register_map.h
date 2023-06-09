/**
 * @file lsm303agr_register_map.h
 * @author Eryk Możdżeń
 * @date 2023-05-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef LSM303AGR_REGISTER_MAP_H
#define LSM303AGR_REGISTER_MAP_H

#define LSM303AGR_STATUS_REG_AUX_A          0x07
#define LSM303AGR_OUT_TEMP_L_A              0x0C
#define LSM303AGR_OUT_TEMP_H_A              0x0D
#define LSM303AGR_INT_COUNTER_REG_A         0x0E
#define LSM303AGR_WHO_AM_I_A                0x0F
#define LSM303AGR_TEMP_CFG_REG_A            0x1F
#define LSM303AGR_CTRL_REG1_A               0x20
#define LSM303AGR_CTRL_REG2_A               0x21
#define LSM303AGR_CTRL_REG3_A               0x22
#define LSM303AGR_CTRL_REG4_A               0x23
#define LSM303AGR_CTRL_REG5_A               0x24
#define LSM303AGR_CTRL_REG6_A               0x25
#define LSM303AGR_REFERENCE_DATACAPTURE_A   0x26
#define LSM303AGR_STATUS_REG_A              0x27
#define LSM303AGR_OUT_X_L_A                 0x28
#define LSM303AGR_OUT_X_H_A                 0x29
#define LSM303AGR_OUT_Y_L_A                 0x2A
#define LSM303AGR_OUT_Y_H_A                 0x2B
#define LSM303AGR_OUT_Z_L_A                 0x2C
#define LSM303AGR_OUT_Z_H_A                 0x2D
#define LSM303AGR_FIFO_CTRL_REG_A           0x2E
#define LSM303AGR_FIFO_SRC_REG_A            0x2F
#define LSM303AGR_INT1_CFG_A                0x30
#define LSM303AGR_INT1_SRC_A                0x31
#define LSM303AGR_INT1_THS_A                0x32
#define LSM303AGR_INT1_DURATION_A           0x33
#define LSM303AGR_INT2_CFG_A                0x34
#define LSM303AGR_INT2_SRC_A                0x35
#define LSM303AGR_INT2_THS_A                0x36
#define LSM303AGR_INT2_DURATION_A           0x37
#define LSM303AGR_CLICK_CFG_A               0x38
#define LSM303AGR_CLICK_SRC_A               0x39
#define LSM303AGR_CLICK_THS_A               0x3A
#define LSM303AGR_TIME_LIMIT_A              0x3B
#define LSM303AGR_TIME_LATENCY_A            0x3C
#define LSM303AGR_TIME_WINDOW_A             0x3D
#define LSM303AGR_ACT_THS_A                 0x3E
#define LSM303AGR_ACT_DUR_A                 0x3F

#define LSM303AGR_OFFSET_X_REG_L_M          0x45
#define LSM303AGR_OFFSET_X_REG_H_M          0x46
#define LSM303AGR_OFFSET_Y_REG_L_M          0x47
#define LSM303AGR_OFFSET_Y_REG_H_M          0x48
#define LSM303AGR_OFFSET_Z_REG_L_M          0x49
#define LSM303AGR_OFFSET_Z_REG_H_M          0x4A
#define LSM303AGR_WHO_AM_I_M                0x4F
#define LSM303AGR_CFG_REG_A_M               0x60
#define LSM303AGR_CFG_REG_B_M               0x61
#define LSM303AGR_CFG_REG_C_M               0x62
#define LSM303AGR_INT_CTRL_REG_M            0x63
#define LSM303AGR_INT_SOURCE_REG_M          0x64
#define LSM303AGR_INT_THS_L_REG_M           0x65
#define LSM303AGR_INT_THS_H_REG_M           0x66
#define LSM303AGR_STATUS_REG_M              0x67
#define LSM303AGR_OUTX_L_REG_M              0x68
#define LSM303AGR_OUTX_H_REG_M              0x69
#define LSM303AGR_OUTY_L_REG_M              0x6A
#define LSM303AGR_OUTY_H_REG_M              0x6B
#define LSM303AGR_OUTZ_L_REG_M              0x6C
#define LSM303AGR_OUTZ_H_REG_M              0x6D

#endif
