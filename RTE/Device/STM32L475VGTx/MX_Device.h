/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 23/02/2024 13:44:52
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            8000000
#define MX_SYSCLKFreq_VALUE                     80000000
#define MX_HCLKFreq_Value                       80000000
#define MX_FCLKCortexFreq_Value                 80000000
#define MX_CortexFreq_Value                     80000000
#define MX_AHBFreq_Value                        80000000
#define MX_APB1Freq_Value                       80000000
#define MX_APB2Freq_Value                       80000000
#define MX_APB1TimFreq_Value                    80000000
#define MX_APB2TimFreq_Value                    80000000
#define MX_PWRFreq_Value                        80000000
#define MX_RTCFreq_Value                        32000
#define MX_USBFreq_Value                        48000000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    80000000

/*-------------------------------- DFSDM1     --------------------------------*/

#define MX_DFSDM1                               1

/* GPIO Configuration */

/* Pin PE7 */
#define MX_S_DATAIN2DFSDM1_GPIO_Speed           GPIO_SPEED_FREQ_LOW
#define MX_S_DATAIN2DFSDM1_Pin                  PE7
#define MX_S_DATAIN2DFSDM1_GPIOx                GPIOE
#define MX_S_DATAIN2DFSDM1_GPIO_PuPd            GPIO_NOPULL
#define MX_DFSDM1_DATIN2_MP34DT01_DOUT          S_DATAIN2DFSDM1
#define MX_S_DATAIN2DFSDM1_GPIO_Pin             GPIO_PIN_7
#define MX_S_DATAIN2DFSDM1_GPIO_AF              GPIO_AF6_DFSDM1
#define MX_S_DATAIN2DFSDM1_GPIO_Mode            GPIO_MODE_AF_PP

/* Pin PE9 */
#define MX_S_CKOUTDFSDM1_GPIO_Speed             GPIO_SPEED_FREQ_LOW
#define MX_S_CKOUTDFSDM1_Pin                    PE9
#define MX_S_CKOUTDFSDM1_GPIOx                  GPIOE
#define MX_S_CKOUTDFSDM1_GPIO_PuPd              GPIO_NOPULL
#define MX_DFSDM1_CKOUT_MP34DT01_CLK            S_CKOUTDFSDM1
#define MX_S_CKOUTDFSDM1_GPIO_Pin               GPIO_PIN_9
#define MX_S_CKOUTDFSDM1_GPIO_AF                GPIO_AF6_DFSDM1
#define MX_S_CKOUTDFSDM1_GPIO_Mode              GPIO_MODE_AF_PP

/*-------------------------------- I2C2       --------------------------------*/

#define MX_I2C2                                 1

/* GPIO Configuration */

/* Pin PB11 */
#define MX_I2C2_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C2_SDA_Pin                         PB11
#define MX_I2C2_SDA_GPIOx                       GPIOB
#define MX_INTERNAL_I2C2_SDA_VL53L0X_SDA        I2C2_SDA
#define MX_I2C2_SDA_GPIO_Pin                    GPIO_PIN_11
#define MX_I2C2_SDA_GPIO_AF                     GPIO_AF4_I2C2
#define MX_I2C2_SDA_GPIO_Pu                     GPIO_PULLUP
#define MX_I2C2_SDA_GPIO_Mode                   GPIO_MODE_AF_OD

/* Pin PB10 */
#define MX_I2C2_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C2_SCL_Pin                         PB10
#define MX_I2C2_SCL_GPIOx                       GPIOB
#define MX_INTERNAL_I2C2_SCL_VL53L0X_SCL        I2C2_SCL
#define MX_I2C2_SCL_GPIO_Pin                    GPIO_PIN_10
#define MX_I2C2_SCL_GPIO_AF                     GPIO_AF4_I2C2
#define MX_I2C2_SCL_GPIO_Pu                     GPIO_PULLUP
#define MX_I2C2_SCL_GPIO_Mode                   GPIO_MODE_AF_OD

/*-------------------------------- QUADSPI    --------------------------------*/

#define MX_QUADSPI                              1

/* GPIO Configuration */

/* Pin PE10 */
#define MX_QUADSPI_CLK_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_QUADSPI_CLK_Pin                      PE10
#define MX_QUADSPI_CLK_GPIOx                    GPIOE
#define MX_QUADSPI_CLK_GPIO_PuPd                GPIO_NOPULL
#define MX_QUADSPI_CLK_MX25R6435F_SCLK          QUADSPI_CLK
#define MX_QUADSPI_CLK_GPIO_Pin                 GPIO_PIN_10
#define MX_QUADSPI_CLK_GPIO_AF                  GPIO_AF10_QUADSPI
#define MX_QUADSPI_CLK_GPIO_Mode                GPIO_MODE_AF_PP

/* Pin PE15 */
#define MX_QUADSPI_BK1_IO3_GPIO_Speed           GPIO_SPEED_FREQ_VERY_HIGH
#define MX_QUADSPI_BK1_IO3_Pin                  PE15
#define MX_QUADSPI_BK1_IO3_GPIOx                GPIOE
#define MX_QUADSPI_BK1_IO3_GPIO_PuPd            GPIO_NOPULL
#define MX_QUAD_SPI_BK1_IO3_MX25R6435F_IO3      QUADSPI_BK1_IO3
#define MX_QUADSPI_BK1_IO3_GPIO_Pin             GPIO_PIN_15
#define MX_QUADSPI_BK1_IO3_GPIO_AF              GPIO_AF10_QUADSPI
#define MX_QUADSPI_BK1_IO3_GPIO_Mode            GPIO_MODE_AF_PP

/* Pin PE14 */
#define MX_QUADSPI_BK1_IO2_GPIO_Speed           GPIO_SPEED_FREQ_VERY_HIGH
#define MX_QUADSPI_BK1_IO2_Pin                  PE14
#define MX_QUADSPI_BK1_IO2_GPIOx                GPIOE
#define MX_QUADSPI_BK1_IO2_GPIO_PuPd            GPIO_NOPULL
#define MX_QUAD_SPI_BK1_IO2_MX25R6435F_IO2      QUADSPI_BK1_IO2
#define MX_QUADSPI_BK1_IO2_GPIO_Pin             GPIO_PIN_14
#define MX_QUADSPI_BK1_IO2_GPIO_AF              GPIO_AF10_QUADSPI
#define MX_QUADSPI_BK1_IO2_GPIO_Mode            GPIO_MODE_AF_PP

/* Pin PE11 */
#define MX_QUADSPI_NCS_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_QUADSPI_NCS_Pin                      PE11
#define MX_QUADSPI_NCS_GPIOx                    GPIOE
#define MX_QUADSPI_NCS_GPIO_PuPd                GPIO_NOPULL
#define MX_QUADSPI_NCS_MX25R6435F_SCLK          QUADSPI_NCS
#define MX_QUADSPI_NCS_GPIO_Pin                 GPIO_PIN_11
#define MX_QUADSPI_NCS_GPIO_AF                  GPIO_AF10_QUADSPI
#define MX_QUADSPI_NCS_GPIO_Mode                GPIO_MODE_AF_PP

/* Pin PE13 */
#define MX_QUADSPI_BK1_IO1_GPIO_Speed           GPIO_SPEED_FREQ_VERY_HIGH
#define MX_QUADSPI_BK1_IO1_Pin                  PE13
#define MX_QUADSPI_BK1_IO1_GPIOx                GPIOE
#define MX_QUADSPI_BK1_IO1_GPIO_PuPd            GPIO_NOPULL
#define MX_QUADSPI_BK1_IO1_MX25R6435F_IO1       QUADSPI_BK1_IO1
#define MX_QUADSPI_BK1_IO1_GPIO_Pin             GPIO_PIN_13
#define MX_QUADSPI_BK1_IO1_GPIO_AF              GPIO_AF10_QUADSPI
#define MX_QUADSPI_BK1_IO1_GPIO_Mode            GPIO_MODE_AF_PP

/* Pin PE12 */
#define MX_QUADSPI_BK1_IO0_GPIO_Speed           GPIO_SPEED_FREQ_VERY_HIGH
#define MX_QUADSPI_BK1_IO0_Pin                  PE12
#define MX_QUADSPI_BK1_IO0_GPIOx                GPIOE
#define MX_QUADSPI_BK1_IO0_GPIO_PuPd            GPIO_NOPULL
#define MX_OQUADSPI_BK1_IO0_MX25R6435F_IO0      QUADSPI_BK1_IO0
#define MX_QUADSPI_BK1_IO0_GPIO_Pin             GPIO_PIN_12
#define MX_QUADSPI_BK1_IO0_GPIO_AF              GPIO_AF10_QUADSPI
#define MX_QUADSPI_BK1_IO0_GPIO_Mode            GPIO_MODE_AF_PP

/*-------------------------------- SPI3       --------------------------------*/

#define MX_SPI3                                 1

/* GPIO Configuration */

/* Pin PC10 */
#define MX_SPI3_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_SCK_Pin                         PC10
#define MX_SPI3_SCK_GPIOx                       GPIOC
#define MX_SPI3_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_INTERNAL_SPI3_SCK_BT_module_SPI_SCLK_ISM43362_SCK SPI3_SCK
#define MX_SPI3_SCK_GPIO_Pin                    GPIO_PIN_10
#define MX_SPI3_SCK_GPIO_AF                     GPIO_AF6_SPI3
#define MX_SPI3_SCK_GPIO_Mode                   GPIO_MODE_AF_PP

/* Pin PC11 */
#define MX_SPI3_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_MISO_Pin                        PC11
#define MX_SPI3_MISO_GPIOx                      GPIOC
#define MX_SPI3_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_INTERNAL_SPI3_MISO_BT_module_SPI_MISO_ISM43362_MISO SPI3_MISO
#define MX_SPI3_MISO_GPIO_Pin                   GPIO_PIN_11
#define MX_SPI3_MISO_GPIO_AF                    GPIO_AF6_SPI3
#define MX_SPI3_MISO_GPIO_Mode                  GPIO_MODE_AF_PP

/* Pin PC12 */
#define MX_SPI3_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_MOSI_Pin                        PC12
#define MX_SPI3_MOSI_GPIOx                      GPIOC
#define MX_SPI3_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_INTERNAL_SPI3_MOSI_BT_module_SPI_MOSI_ISM43362_MOSI SPI3_MOSI
#define MX_SPI3_MOSI_GPIO_Pin                   GPIO_PIN_12
#define MX_SPI3_MOSI_GPIO_AF                    GPIO_AF6_SPI3
#define MX_SPI3_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/* Pin PA13 (JTMS-SWDIO) */
#define MX_SYS_JTMS_SWDIO_Pin                   PA13_JTMS_SWDIO
#define MX_SYS_JTMS_SWDIO                       SYS_JTMS_SWDIO

/* Pin PA14 (JTCK-SWCLK) */
#define MX_SYS_JTCK_SWCLK_Pin                   PA14_JTCK_SWCLK
#define MX_SYS_JTCK_SWCLK                       SYS_JTCK_SWCLK

/* Pin PB3 (JTDO-TRACESWO) */
#define MX_SYS_JTDO_SWO_Pin                     PB3_JTDO_TRACESWO
#define MX_SYS_JTD0_SWO                         SYS_JTDO_SWO

/*-------------------------------- USART1     --------------------------------*/

#define MX_USART1                               1

#define MX_USART1_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PB6 */
#define MX_USART1_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_TX_GPIO_FM6                   __NULL
#define MX_USART1_TX_Pin                        PB6
#define MX_USART1_TX_GPIOx                      GPIOB
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_ST_LINK_UART1_TX                     USART1_TX
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_6
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1

/* Pin PB7 */
#define MX_USART1_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_RX_Pin                        PB7
#define MX_USART1_RX_GPIOx                      GPIOB
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_ST_LINK_UART1_RX                     USART1_RX
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_7
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1
#define MX_USART1_RX_GPIO_FM7                   __NULL

/*-------------------------------- USART3     --------------------------------*/

#define MX_USART3                               1

#define MX_USART3_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PD8 */
#define MX_USART3_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART3_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_TX_Pin                        PD8
#define MX_USART3_TX_GPIOx                      GPIOD
#define MX_USART3_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_INTERNAL_UART3_TX_ISM43362_RX        USART3_TX
#define MX_USART3_TX_GPIO_Pin                   GPIO_PIN_8
#define MX_USART3_TX_GPIO_AF                    GPIO_AF7_USART3

/* Pin PD9 */
#define MX_USART3_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_RX_Pin                        PD9
#define MX_USART3_RX_GPIOx                      GPIOD
#define MX_USART3_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_INTERNAL_UART3_RX_ISM43362_TX        USART3_RX
#define MX_USART3_RX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART3_RX_GPIO_AF                    GPIO_AF7_USART3

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PB2 */
#define MX_PB2_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PB2_Pin                              PB2
#define MX_PB2_GPIOx                            GPIOB
#define MX_PB2_PinState                         GPIO_PIN_RESET
#define MX_PB2_GPIO_PuPd                        GPIO_NOPULL
#define MX_ARD_D8                               PB2
#define MX_PB2_GPIO_Pin                         GPIO_PIN_2
#define MX_PB2_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PD7 */
#define MX_PD7_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PD7_Pin                              PD7
#define MX_PD7_GPIOx                            GPIOD
#define MX_PD7_PinState                         GPIO_PIN_RESET
#define MX_PD7_GPIO_PuPd                        GPIO_NOPULL
#define MX_STSAFE_A100_RESET_STSAFE_A100_RESET  PD7
#define MX_PD7_GPIO_Pin                         GPIO_PIN_7
#define MX_PD7_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PB5 */
#define MX_PB5_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PB5_Pin                              PB5
#define MX_PB5_GPIOx                            GPIOB
#define MX_PB5_PinState                         GPIO_PIN_SET
#define MX_PB5_GPIO_PuPd                        GPIO_NOPULL
#define MX_SPSGRF_915_SPI3_CSN_SPSGRF_SPI_CS    PB5
#define MX_PB5_GPIO_Pin                         GPIO_PIN_5
#define MX_PB5_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PE0 */
#define MX_PE0_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PE0_Pin                              PE0
#define MX_PE0_GPIOx                            GPIOE
#define MX_PE0_PinState                         GPIO_PIN_SET
#define MX_PE0_GPIO_PuPd                        GPIO_NOPULL
#define MX_ISM43362_SPI3_CSN_ISM43362_SSN       PE0
#define MX_PE0_GPIO_Pin                         GPIO_PIN_0
#define MX_PE0_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PE2 */
#define MX_PE2_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PE2_Pin                              PE2
#define MX_PE2_GPIOx                            GPIOE
#define MX_PE2_PinState                         GPIO_PIN_RESET
#define MX_PE2_GPIO_PuPd                        GPIO_NOPULL
#define MX_M24SR64_Y_RF_DISABLE_M24SR64_RFDIS   PE2
#define MX_PE2_GPIO_Pin                         GPIO_PIN_2
#define MX_PE2_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PE1 */
#define MX_PE1_Pin                              PE1
#define MX_PE1_GPIOx                            GPIOE
#define MX_PE1_GPIO_PuPd                        GPIO_NOPULL
#define MX_ISM43362_DRDY_EXTI1_ISM43362_DATARDY PE1
#define MX_PE1_GPIO_Pin                         GPIO_PIN_1
#define MX_PE1_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

/* Pin PE4 */
#define MX_PE4_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PE4_Pin                              PE4
#define MX_PE4_GPIOx                            GPIOE
#define MX_PE4_PinState                         GPIO_PIN_RESET
#define MX_PE4_GPIO_PuPd                        GPIO_NOPULL
#define MX_M24SR64_Y_GPO_M24SR64_GPO            PE4
#define MX_PE4_GPIO_Pin                         GPIO_PIN_4
#define MX_PE4_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PE3 */
#define MX_PE3_Pin                              PE3
#define MX_PE3_GPIOx                            GPIOE
#define MX_PE3_GPIO_PuPd                        GPIO_NOPULL
#define MX_USB_OTG_FS_OVRCR_EXTI3_STMPS2141STR_FAULT PE3
#define MX_PE3_GPIO_Pin                         GPIO_PIN_3
#define MX_PE3_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

/* Pin PE6 */
#define MX_PE6_Pin                              PE6
#define MX_PE6_GPIOx                            GPIOE
#define MX_PE6_GPIO_PuPd                        GPIO_NOPULL
#define MX_SPBTLE_RF_IRQ_EXTI6_BT_module_SPI_IRQ PE6
#define MX_PE6_GPIO_Pin                         GPIO_PIN_6
#define MX_PE6_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

/* Pin PA2 */
#define MX_PA2_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PA2_Pin                              PA2
#define MX_PA2_GPIOx                            GPIOA
#define MX_PA2_PinState                         GPIO_PIN_RESET
#define MX_PA2_GPIO_PuPd                        GPIO_NOPULL
#define MX_ARD_D10_SPI_SSN                      PA2
#define MX_PA2_GPIO_Pin                         GPIO_PIN_2
#define MX_PA2_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PE5 */
#define MX_PE5_Pin                              PE5
#define MX_PE5_GPIOx                            GPIOE
#define MX_PE5_GPIO_PuPd                        GPIO_NOPULL
#define MX_SPSGRF_915_GPIO3_EXTI5_SPSGRF_GPIO_3 PE5
#define MX_PE5_GPIO_Pin                         GPIO_PIN_5
#define MX_PE5_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

/* Pin PE8 */
#define MX_PE8_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PE8_Pin                              PE8
#define MX_PE8_GPIOx                            GPIOE
#define MX_PE8_PinState                         GPIO_PIN_RESET
#define MX_PE8_GPIO_PuPd                        GPIO_NOPULL
#define MX_ISM43362_RST_ISM43362_RSTN           PE8
#define MX_PE8_GPIO_Pin                         GPIO_PIN_8
#define MX_PE8_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PC6 */
#define MX_PC6_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PC6_Pin                              PC6
#define MX_PC6_GPIOx                            GPIOC
#define MX_PC6_PinState                         GPIO_PIN_RESET
#define MX_PC6_GPIO_PuPd                        GPIO_NOPULL
#define MX_VL53L0X_XSHUT_Read_XSHUT             PC6
#define MX_PC6_GPIO_Pin                         GPIO_PIN_6
#define MX_PC6_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PC8 */
#define MX_PC8_Pin                              PC8
#define MX_PC8_GPIOx                            GPIOC
#define MX_PC8_GPIO_PuPd                        GPIO_NOPULL
#define MX_LSM3MDL_DRDY_EXTI8_LIS3MDL_DRDY      PC8
#define MX_PC8_GPIO_Pin                         GPIO_PIN_8
#define MX_PC8_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

/* Pin PC7 */
#define MX_PC7_Pin                              PC7
#define MX_PC7_GPIOx                            GPIOC
#define MX_PC7_GPIO_PuPd                        GPIO_NOPULL
#define MX_VL53L0X_GPIO1_EXTI7_VL53L0X_GPIO1    PC7
#define MX_PC7_GPIO_Pin                         GPIO_PIN_7
#define MX_PC7_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

/* Pin PA15 (JTDI) */
#define MX_PA15_JTDI_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_PA15_JTDI_Pin                        PA15_JTDI
#define MX_PA15_JTDI_GPIOx                      GPIOA
#define MX_PA15_JTDI_PinState                   GPIO_PIN_RESET
#define MX_PA15_JTDI_GPIO_PuPd                  GPIO_NOPULL
#define MX_ARD_D9                               PA15_JTDI
#define MX_PA15_JTDI_GPIO_Pin                   GPIO_PIN_15
#define MX_PA15_JTDI_GPIO_ModeDefaultOutputPP   GPIO_MODE_OUTPUT_PP

/* Pin PA8 */
#define MX_PA8_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PA8_Pin                              PA8
#define MX_PA8_GPIOx                            GPIOA
#define MX_PA8_PinState                         GPIO_PIN_RESET
#define MX_PA8_GPIO_PuPd                        GPIO_NOPULL
#define MX_SPBTLE_RF_RST                        PA8
#define MX_PA8_GPIO_Pin                         GPIO_PIN_8
#define MX_PA8_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PC9 */
#define MX_PC9_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PC9_Pin                              PC9
#define MX_PC9_GPIOx                            GPIOC
#define MX_PC9_PinState                         GPIO_PIN_RESET
#define MX_PC9_GPIO_PuPd                        GPIO_NOPULL
#define MX_LED3_WIFI__LED4_BLE                  PC9
#define MX_PC9_GPIO_Pin                         GPIO_PIN_9
#define MX_PC9_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PC13 */
#define MX_PC13_Pin                             PC13
#define MX_PC13_GPIOx                           GPIOC
#define MX_PC13_GPIO_PuPd                       GPIO_NOPULL
#define MX_BUTTON_EXTI13_B2                     PC13
#define MX_PC13_GPIO_Pin                        GPIO_PIN_13
#define MX_PC13_GPIO_ModeDefaultEXTI            GPIO_MODE_IT_FALLING

/* Pin PB14 */
#define MX_PB14_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PB14_Pin                             PB14
#define MX_PB14_GPIOx                           GPIOB
#define MX_PB14_PinState                        GPIO_PIN_RESET
#define MX_PB14_GPIO_PuPd                       GPIO_NOPULL
#define MX_LED2_LED_GREEN                       PB14
#define MX_PB14_GPIO_Pin                        GPIO_PIN_14
#define MX_PB14_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PD12 */
#define MX_PD12_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PD12_Pin                             PD12
#define MX_PD12_GPIOx                           GPIOD
#define MX_PD12_PinState                        GPIO_PIN_RESET
#define MX_PD12_GPIO_PuPd                       GPIO_NOPULL
#define MX_USB_OTG_FS_PWR_EN_STMPS2141STR_EN    PD12
#define MX_PD12_GPIO_Pin                        GPIO_PIN_12
#define MX_PD12_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PB4 (NJTRST) */
#define MX_PB4_NJTRST_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_PB4_NJTRST_Pin                       PB4_NJTRST
#define MX_PB4_NJTRST_GPIOx                     GPIOB
#define MX_PB4_NJTRST_PinState                  GPIO_PIN_RESET
#define MX_PB4_NJTRST_GPIO_PuPd                 GPIO_NOPULL
#define MX_ARD_D5                               PB4_NJTRST
#define MX_PB4_NJTRST_GPIO_Pin                  GPIO_PIN_4
#define MX_PB4_NJTRST_GPIO_ModeDefaultOutputPP  GPIO_MODE_OUTPUT_PP

/* Pin PB13 */
#define MX_PB13_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PB13_Pin                             PB13
#define MX_PB13_GPIOx                           GPIOB
#define MX_PB13_PinState                        GPIO_PIN_RESET
#define MX_PB13_GPIO_PuPd                       GPIO_NOPULL
#define MX_ISM43362_WAKEUP_ISM43362_WKUP        PB13
#define MX_PB13_GPIO_Pin                        GPIO_PIN_13
#define MX_PB13_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PD11 */
#define MX_PD11_Pin                             PD11
#define MX_PD11_GPIOx                           GPIOD
#define MX_PD11_GPIO_PuPd                       GPIO_NOPULL
#define MX_LSM6DSL_INT1_EXTI11_LSM6DSL_INT1     PD11
#define MX_PD11_GPIO_Pin                        GPIO_PIN_11
#define MX_PD11_GPIO_ModeDefaultEXTI            GPIO_MODE_IT_RISING

/* Pin PD14 */
#define MX_PD14_Pin                             PD14
#define MX_PD14_GPIOx                           GPIOD
#define MX_PD14_GPIO_PuPd                       GPIO_NOPULL
#define MX_ARD_D2_INT0_EXTI14                   PD14
#define MX_PD14_GPIO_Pin                        GPIO_PIN_14
#define MX_PD14_GPIO_ModeDefaultEXTI            GPIO_MODE_IT_RISING

/* Pin PB15 */
#define MX_PB15_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PB15_Pin                             PB15
#define MX_PB15_GPIOx                           GPIOB
#define MX_PB15_PinState                        GPIO_PIN_RESET
#define MX_PB15_GPIO_PuPd                       GPIO_NOPULL
#define MX_SPSGRF_915_SDN_SPSGRF_SDN            PB15
#define MX_PB15_GPIO_Pin                        GPIO_PIN_15
#define MX_PB15_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PD13 */
#define MX_PD13_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PD13_Pin                             PD13
#define MX_PD13_GPIOx                           GPIOD
#define MX_PD13_PinState                        GPIO_PIN_SET
#define MX_PD13_GPIO_PuPd                       GPIO_NOPULL
#define MX_SPBTLE_RF_SPI3_CSN_BT_module_SPI_CS  PD13
#define MX_PD13_GPIO_Pin                        GPIO_PIN_13
#define MX_PD13_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PB12 */
#define MX_PB12_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PB12_Pin                             PB12
#define MX_PB12_GPIOx                           GPIOB
#define MX_PB12_PinState                        GPIO_PIN_RESET
#define MX_PB12_GPIO_PuPd                       GPIO_NOPULL
#define MX_ISM43362_BOOT0_ISM43362_BOOT         PB12
#define MX_PB12_GPIO_Pin                        GPIO_PIN_12
#define MX_PB12_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PD10 */
#define MX_PD10_Pin                             PD10
#define MX_PD10_GPIOx                           GPIOD
#define MX_PD10_GPIO_PuPd                       GPIO_NOPULL
#define MX_LPS22HB_INT_DRDY_EXTI0_LPS22HB_INT_DRDY_ PD10
#define MX_PD10_GPIO_Pin                        GPIO_PIN_10
#define MX_PD10_GPIO_ModeDefaultEXTI            GPIO_MODE_IT_RISING

/* Pin PD15 */
#define MX_PD15_Pin                             PD15
#define MX_PD15_GPIOx                           GPIOD
#define MX_PD15_GPIO_PuPd                       GPIO_NOPULL
#define MX_HTS221_DRDY_EXTI15_HTS221_DRDY       PD15
#define MX_PD15_GPIO_Pin                        GPIO_PIN_15
#define MX_PD15_GPIO_ModeDefaultEXTI            GPIO_MODE_IT_RISING

/* Pin PD0 */
#define MX_PD0_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PD0_Pin                              PD0
#define MX_PD0_GPIOx                            GPIOD
#define MX_PD0_PinState                         GPIO_PIN_RESET
#define MX_PD0_GPIO_PuPd                        GPIO_NOPULL
#define MX_PMOD_RESET                           PD0
#define MX_PD0_GPIO_Pin                         GPIO_PIN_0
#define MX_PD0_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

/* Pin PB0 */
#define MX_PB0_Pin                              PB0
#define MX_PB0_GPIOx                            GPIOB
#define MX_PB0_GPIO_PuPd                        GPIO_NOPULL
#define MX_ARD_D3_INT_EXT10                     PB0
#define MX_PB0_GPIO_Pin                         GPIO_PIN_0
#define MX_PB0_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

/* Pin PD2 */
#define MX_PD2_Pin                              PD2
#define MX_PD2_GPIOx                            GPIOD
#define MX_PD2_GPIO_PuPd                        GPIO_NOPULL
#define MX_PMOD_IRQ_EXTI12                      PD2
#define MX_PD2_GPIO_Pin                         GPIO_PIN_2
#define MX_PD2_GPIO_ModeDefaultEXTI             GPIO_MODE_IT_RISING

#endif  /* __MX_DEVICE_H */

