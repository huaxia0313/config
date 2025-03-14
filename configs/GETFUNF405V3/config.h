/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        GETFUNF405V3
#define MANUFACTURER_ID   GFUN

#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC_SPI_ICM42688P
#define USE_ACCGYRO_BMI270
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

#define BEEPER_PIN           B00
#define MOTOR1_PIN           A15
#define MOTOR2_PIN           A10
#define MOTOR3_PIN           A09
#define MOTOR4_PIN           A08
#define MOTOR5_PIN           C09
#define MOTOR6_PIN           C08
#define MOTOR7_PIN           B11
#define MOTOR8_PIN           B10

#define LED_STRIP_PIN        B01

#define UART1_TX_PIN         B06
#define UART2_TX_PIN         A02
#define UART3_TX_PIN         C10
#define UART4_TX_PIN         A00
#define UART5_TX_PIN         C12
#define UART6_TX_PIN         C06
#define UART1_RX_PIN         B07
#define UART2_RX_PIN         A03
#define UART3_RX_PIN         C11
#define UART4_RX_PIN         A01
#define UART5_RX_PIN         D02
#define UART6_RX_PIN         C07

#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9

#define LED0_PIN             PC15
#define LED1_PIN             PC14

#define SPI1_SCK_PIN         A05
#define SPI2_SCK_PIN         B13
#define SPI3_SCK_PIN         B03
#define SPI1_SDI_PIN         A06
#define SPI2_SDI_PIN         B14
#define SPI3_SDI_PIN         B04
#define SPI1_SDO_PIN         A07
#define SPI2_SDO_PIN         B15
#define SPI3_SDO_PIN         B05

#define ADC_VBAT_PIN         PC0
#define ADC_CURR_PIN         PC1
#define ADC_RSSI_PIN         PC2

#define PINIO1_PIN           PC4
#define PINIO2_PIN           PC5

#define FLASH_CS_PIN         PC13
#define MAX7456_SPI_CS_PIN   PB12
#define GYRO_1_CS_PIN        PA4

#define USB_DETECT_PIN       PC3

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PA15, 1, 0)  \
    TIMER_PIN_MAP( 1, PA10, 1,  0) \
    TIMER_PIN_MAP( 2, PA9 , 1,  0) \
    TIMER_PIN_MAP( 3, PA8 , 1,  0) \
    TIMER_PIN_MAP( 4, PC9 , 2,  0) \
    TIMER_PIN_MAP( 5, PC8 , 2,  0) \
    TIMER_PIN_MAP( 6, PB11 , 2, 0) \
    TIMER_PIN_MAP( 7, PB10 , 2, 0) \
    TIMER_PIN_MAP( 8, PB1 , 2,  0)


#define ADC3_DMA_OPT        0

#define USE_BARO
#define BARO_I2C_INSTANCE I2CDEV_1
#define MAG_I2C_INSTANCE I2CDEV_1
#define ADC_INSTANCE ADC3
#define BEEPER_INVERTED
#define LED0_INVERTED
#define LED1_INVERTED
#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_DSHOT_BURST DSHOT_DMAR_AUTO
#define DEFAULT_CURRENT_METER_SCALE 100
#define MAX7456_SPI_INSTANCE SPI2
#define FLASH_SPI_INSTANCE SPI3
#define PINIO1_BOX 40
#define PINIO2_BOX 41
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW90
