#ifndef PCA9685_MACROS_H
#define PCA9685_MACROS_H

// PCA9685 I2C Address
#define PCA9685_I2C_ADDRESS 0xAA

// All Call and Reset Addresses
#define PCA9685_ALL_CALL    0xE0
#define PCA9685_SOFT_RESET  0x06

// Mode Registers
#define PCA9685_MODE1       0x00
#define PCA9685_MODE2       0x01

// Subaddress Registers
#define PCA9685_SUBADR1     0xE2
#define PCA9685_SUBADR2     0xE4
#define PCA9685_SUBADR3     0xE8

// PWM On Time Registers
#define PCA9685_LED0_ON_L        0x06
#define PCA9685_LED1_ON_L        0x0A
#define PCA9685_LED2_ON_L        0x0E
#define PCA9685_LED3_ON_L        0x12
#define PCA9685_LED4_ON_L        0x16
#define PCA9685_LED5_ON_L        0x1A
#define PCA9685_LED6_ON_L        0x1E
#define PCA9685_LED7_ON_L        0x22
#define PCA9685_LED8_ON_L        0x26
#define PCA9685_LED9_ON_L        0x2A
#define PCA9685_LED10_ON_L       0x2E
#define PCA9685_LED11_ON_L       0x32
#define PCA9685_LED12_ON_L       0x36
#define PCA9685_LED13_ON_L       0x3A
#define PCA9685_LED14_ON_L       0x3E
#define PCA9685_LED15_ON_L       0x42

// PWM Pre-scaler Register
#define PCA9685_PRE_SCALE        0xFE

#endif // PCA9685_MACROS_H