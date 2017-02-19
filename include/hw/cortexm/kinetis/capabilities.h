/*
 * Kinetis capabilities definitions.
 *
 * Copyright (c) 2017 Ian Thompson.
 * Copyright (c) 2015 Liviu Ionescu.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KINETIS_CAPABILITIES_H_
#define KINETIS_CAPABILITIES_H_

#include <stdint.h>

/*
 * This file defines the members used in the structure used to describe
 * the capabilities of the Kinetis MCUs.
 *
 * Kinetis MCUs are grouped by families and sub-families.
 */

#define TYPE_KINETIS_PREFIX       "kinetis:"

#define DEVICE_PATH_KINETIS "/machine/mcu/kinetis/"

/*
 * The family is the main differentiator for Kinetis MCUs.
 */
typedef enum {
    KINETIS_FAMILY_UNKNOWN,
    KINETIS_FAMILY_K6,
} kinetis_family_t;

#define KINETIS_MAX_PORT  (5)
#define KINETIS_MAX_UART  (6)

typedef enum {
    K64_DMA_Channel0_IRQn = 0,     /*< DMA channel 0 transfer complete         */
    K64_DMA_Channel1_IRQn = 1,     /*< DMA channel 1 transfer complete         */
    K64_DMA_Channel2_IRQn = 2,     /*< DMA channel 2 transfer complete         */
    K64_DMA_Channel3_IRQn = 3,     /*< DMA channel 3 transfer complete         */
    K64_DMA_Channel4_IRQn = 4,     /*< DMA channel 4 transfer complete         */
    K64_DMA_Channel5_IRQn = 5,     /*< DMA channel 5 transfer complete         */
    K64_DMA_Channel6_IRQn = 6,     /*< DMA channel 6 transfer complete         */
    K64_DMA_Channel7_IRQn = 7,     /*< DMA channel 7 transfer complete         */
    K64_DMA_Channel8_IRQn = 8,     /*< DMA channel 8 transfer complete         */
    K64_DMA_Channel9_IRQn = 9,     /*< DMA channel 9 transfer complete         */
    K64_DMA_Channel10_IRQn = 10,   /*< DMA channel 10 transfer complete        */
    K64_DMA_Channel11_IRQn = 11,   /*< DMA channel 11 transfer complete        */
    K64_DMA_Channel12_IRQn = 12,   /*< DMA channel 12 transfer complete        */
    K64_DMA_Channel13_IRQn = 13,   /*< DMA channel 13 transfer complete        */
    K64_DMA_Channel14_IRQn = 14,   /*< DMA channel 14 transfer complete        */
    K64_DMA_Channel15_IRQn = 15,   /*< DMA channel 15 transfer complete        */
    K64_DMA_Error_IRQn = 16,       /*< DMA error interrupt channels 0-15       */
    K64_MCM_IRQn = 17,             /*< MCM interrupt                           */
    K64_FLASH_Complete_IRQn = 18,  /*< Flash Command complete                  */
    K64_FLASH_Collision_IRQn = 19, /*< Flash Read collision                    */
    K64_MODE_IRQn = 20,            /*< Low-voltage detect, low-voltage warning */
    K64_LLWU_IRQn = 21,            /*< Low Leakage Wakeup                      */
    K64_WDOG_EWM_IRQn = 22,        /*< WDOG, EWM, shared interrupt             */
    K64_RNG_IRQn = 23,             /*< Random Number Generator                 */
    K64_I2C0_IRQn = 24,            /*< I2C0                                    */
    K64_I2C1_IRQn = 25,            /*< I2C1                                    */
    K64_SPI0_IRQn = 26,            /*< SPI0                                    */
    K64_SPI1_IRQn = 27,            /*< SPI1                                    */
    K64_I2S0_Transmit_IRQn = 28,   /*< I2S0 Transmit                           */
    K64_I2S0_Receive_IRQn = 29,    /*< I2S0 Receive                            */
    K64_UART0_Status_IRQn = 31,    /*< UART0 Status                            */
    K64_UART0_Error_IRQn = 32,     /*< UART0 Error                             */
    K64_UART1_Status_IRQn = 33,    /*< UART1 Status                            */
    K64_UART1_Error_IRQn = 34,     /*< UART1 Error                             */
    K64_UART2_Status_IRQn = 35,    /*< UART2 Status                            */
    K64_UART2_Error_IRQn = 36,     /*< UART2 Error                             */
    K64_UART3_Status_IRQn = 37,    /*< UART3 Status                            */
    K64_UART3_Error_IRQn = 38,     /*< UART3 Error                             */
    K64_ADC0_IRQn = 39,            /*< ADC0                                    */
    K64_CMP0_IRQn = 40,            /*< CMP0                                    */
    K64_CMP1_IRQn = 41,            /*< CMP1                                    */
    K64_FTM0_IRQn = 42,            /*< FTM0                                    */
    K64_FTM1_IRQn = 43,            /*< FTM1                                    */
    K64_FTM2_IRQn = 44,            /*< FTM2                                    */
    K64_CMT_IRQn = 45,             /*< CMT                                     */
    K64_RTC_Alarm_IRQn = 46,       /*< RTC Alarm interrupt                     */
    K64_RTC_Seconds_IRQn = 47,     /*< RTC Seconds interrupt                   */
    K64_PIT_Channel0_IRQn = 48,    /*< PIT Channel 0                           */
    K64_PIT_Channel1_IRQn = 49,    /*< PIT Channel 1                           */
    K64_PIT_Channel2_IRQn = 50,    /*< PIT Channel 2                           */
    K64_PIT_Channel3_IRQn = 51,    /*< PIT Channel 3                           */
    K64_PDB_IRQn = 52,             /*< PDB                                     */
    K64_USB_OTG_IRQn = 53,         /*< USB OTG                                 */
    K64_USB_Charger_IRQn = 54,     /*< USB Charger                             */
    K64_DAC0_IRQn = 56,            /*< DAC0                                    */
    K64_MCG_IRQn = 57,             /*< MCG                                     */
    K64_LPTIM_IRQn = 58,           /*< LPTIM                                   */
    K64_PORTA_IRQn = 59,           /*< PORT A Pin detect                       */
    K64_PORTB_IRQn = 60,           /*< PORT B Pin detect                       */
    K64_PORTC_IRQn = 61,           /*< PORT C Pin detect                       */
    K64_PORTD_IRQn = 62,           /*< PORT D Pin detect                       */
    K64_PORTE_IRQn = 63,           /*< PORT E Pin detect                       */
    K64_SOFT_IRQn = 64,            /*< Software interrupt                      */
    K64_SPI2_IRQn = 65,            /*< SPI2                                    */
    K64_UART4_Status_IRQn = 66,    /*< UART4 Status                            */
    K64_UART4_Error_IRQn = 67,     /*< UART4 Error                             */
    K64_UART5_Status_IRQn = 68,    /*< UART5 Status                            */
    K64_UART5_Error_IRQn = 69,     /*< UART5 Error                             */
    K64_CMP2_IRQn = 70,            /*< CMP2                                    */
    K64_FTM3_IRQn = 71,            /*< FTM3                                    */
    K64_DAC1_IRQn = 72,            /*< DAC1                                    */
    K64_ADC1_IRQn = 73,            /*< ADC1                                    */
    K64_I2C2_IRQn = 74,            /*< I2C2                                    */
    K64_CAN0_Message_IRQn = 75,    /*< CAN0 OR'ed Message buffer (0-15)        */
    K64_CAN0_BOFF_IRQn = 76,       /*< CAN0 Bus Off                            */
    K64_CAN0_Error_IRQn = 77,      /*< CAN0 Error                              */
    K64_CAN0_Transmit_IRQn = 78,   /*< CAN0 Transmit Warning                   */
    K64_CAN0_Receive_IRQn = 79,    /*< CAN0 Receive Warning                    */
    K64_CAN0_Wakeup_IRQn = 80,     /*< CAN0 Wake Up                            */
    K64_SDHC_IRQn = 81,            /*< SDHC                                    */
    K64_ENET_Timer_IRQn = 82,      /*< ENET IEEE 1588 Timer Interrupt          */
    K64_ENET_Transmit_IRQn = 83,   /*< ENET Transmit                           */
    K64_ENET_Receive_IRQn = 84,    /*< ENET Receive                            */
    K64_ENET_Misc_IRQn = 85        /*< ENET Error and miscellaneous            */
} K64_IRQn_Type;

typedef struct {

    kinetis_family_t family;

    // Chip-specific clock frequencies
    uint32_t int_irc_freq_hz;
    uint32_t int_fast_freq_hz;
    uint32_t int_slow_freq_hz;

    unsigned int has_periph_bitband :1;

    // ADC
    unsigned int has_adc0 :1;
    unsigned int has_adc1 :1;

    // AIPS
    unsigned int has_aips0 :1;
    unsigned int has_aips1 :1;

    // CAN
    unsigned int has_can0 :1;

    // CMP
    unsigned int has_cmp0 :1;
    unsigned int has_cmp1 :1;
    unsigned int has_cmp2 :1;

    // CRC
    unsigned int has_crc :1;

    // DAC
    unsigned int has_dac0 :1;
    unsigned int has_dac1 :1;

    // DMA
    unsigned int has_dma :1;

    // DMAMUX
    unsigned int has_dmamux :1;

    // ENET
    unsigned int has_enet :1;

    // EWM
    unsigned int has_ewm :1;

    // FB
    unsigned int has_fb :1;

    // FMC
    unsigned int has_fmc :1;

    // FTM
    unsigned int has_ftm0 :1;
    unsigned int has_ftm1 :1;
    unsigned int has_ftm2 :1;
    unsigned int has_ftm3 :1;

    // I2C
    unsigned int has_i2c0 :1;
    unsigned int has_i2c1 :1;
    unsigned int has_i2c2 :1;

    // I2S
    unsigned int has_i2s0 :1;

    // LLWU
    unsigned int has_llwu :1;

    // LPTMR
    unsigned int has_lptmr0 :1;

    // MCG
    unsigned int has_mcg :1;

    // MCM
    unsigned int has_mcm :1;

    // MPU
    unsigned int has_mpu :1;

    // OSC
    unsigned int has_osc :1;

    // PDB
    unsigned int has_pdb0 :1;

    // PIT
    unsigned int has_pit :1;

    // PMC
    unsigned int has_pmc :1;

    // PORT
    unsigned int has_porta :1;
    unsigned int has_portb :1;
    unsigned int has_portc :1;
    unsigned int has_portd :1;
    unsigned int has_porte :1;

    // RNG
    unsigned int has_rng :1;

    // RTC
    unsigned int has_rtc :1;

    // SDHC
    unsigned int has_sdhc :1;

    // SIM
    unsigned int has_sim :1;

    // SMC
    unsigned int has_smc :1;

    // SPI
    unsigned int has_spi0 :1;
    unsigned int has_spi1 :1;
    unsigned int has_spi2 :1;

    // UART
    unsigned int has_uart0 :1;
    unsigned int has_uart1 :1;
    unsigned int has_uart2 :1;
    unsigned int has_uart3 :1;
    unsigned int has_uart4 :1;
    unsigned int has_uart5 :1;

    // USB
    unsigned int has_usb0 :1;

    // USB DCD
    unsigned int has_usbdcd :1;

    // VREF
    unsigned int has_vref :1;

    // WDOG
    unsigned int has_wdog :1;

    /*
     * Note: the family definitions are mutual exclusive, and could
     * be packed in a union, but this makes writing the definitions
     * more complicated and was discarded.
     * The memory penalty is not significant.
     */
    struct {
        // DEPRECATED, to be removed!
        // unsigned int is_51xx :1;

        // The names follow the STM CMSIS SVD naming scheme,
        // with the STM32F prefix removed.
        unsigned int is_k64 :1;
    } k6;

// TODO: add other families that have sub-families.

} KinetisCapabilities;

#endif /* KINETIS_CAPABILITIES_H_ */
