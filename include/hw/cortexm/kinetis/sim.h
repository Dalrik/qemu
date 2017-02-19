/*
 * Kinetis - SIM (System Integration Module) emulation.
 *
 * Copyright (c) 2017 Ian Thompson.
 * Copyright (c) 2016 Liviu Ionescu.
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

#ifndef KINETIS_SIM_H_
#define KINETIS_SIM_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_SIM DEVICE_PATH_KINETIS "SIM"

#define KINETIS_SIM_SIZEOF_ENABLING_BITFIELD (sizeof(DEVICE_PATH_KINETIS_SIM)+32)

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_SIM TYPE_KINETIS_PREFIX "sim" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_SIM_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisSIMParentClass;
typedef PeripheralState KinetisSIMParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_SIM_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisSIMClass, (obj), TYPE_KINETIS_SIM)
#define KINETIS_SIM_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisSIMClass, (klass), TYPE_KINETIS_SIM)

typedef struct {
    // private: 
    KinetisSIMParentClass parent_class;
    // public: 

    // None, so far.
} KinetisSIMClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_SIM_STATE(obj) \
    OBJECT_CHECK(KinetisSIMState, (obj), TYPE_KINETIS_SIM)

typedef struct {
    // private:
    KinetisSIMParentState parent_obj;
    // public:
    
    uint32_t mcg_out_freq_hz;
    uint32_t core_freq_hz;

    const KinetisCapabilities *capabilities;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 SIM (System Integration Module) registers.
        struct { 
          Object *sopt1; // 0 (System Options Register 1) 
          Object *sopt1cfg; // 0x4 (SOPT1 Configuration Register) 
          Object *sopt2; // 0x1004 (System Options Register 2) 
          Object *sopt4; // 0x100C (System Options Register 4) 
          Object *sopt5; // 0x1010 (System Options Register 5) 
          Object *sopt7; // 0x1018 (System Options Register 7) 
          Object *sdid; // 0x1024 (System Device Identification Register) 
          Object *scgc1; // 0x1028 (System Clock Gating Control Register 1) 
          Object *scgc2; // 0x102C (System Clock Gating Control Register 2) 
          Object *scgc3; // 0x1030 (System Clock Gating Control Register 3) 
          Object *scgc4; // 0x1034 (System Clock Gating Control Register 4) 
          Object *scgc5; // 0x1038 (System Clock Gating Control Register 5) 
          Object *scgc6; // 0x103C (System Clock Gating Control Register 6) 
          Object *scgc7; // 0x1040 (System Clock Gating Control Register 7) 
          Object *clkdiv1; // 0x1044 (System Clock Divider Register 1) 
          Object *clkdiv2; // 0x1048 (System Clock Divider Register 2) 
          Object *fcfg1; // 0x104C (Flash Configuration Register 1) 
          Object *fcfg2; // 0x1050 (Flash Configuration Register 2) 
          Object *uidh; // 0x1054 (Unique Identification Register High) 
          Object *uidmh; // 0x1058 (Unique Identification Register Mid-High) 
          Object *uidml; // 0x105C (Unique Identification Register Mid Low) 
          Object *uidl; // 0x1060 (Unique Identification Register Low) 
        } reg;

        struct { 

          // SOPT1 (System Options Register 1) bitfields.
          struct { 
            Object *ramsize; // [12:15] RAM size
            Object *osc32ksel; // [18:19] 32K oscillator clock select
            Object *usbvstby; // [29:29] USB voltage regulator in standby mode during VLPR and VLPW modes
            Object *usbsstby; // [30:30] USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes.
            Object *usbregen; // [31:31] USB voltage regulator enable
          } sopt1; 

          // SOPT1CFG (SOPT1 Configuration Register) bitfields.
          struct { 
            Object *urwe; // [24:24] USB voltage regulator enable write enable
            Object *uvswe; // [25:25] USB voltage regulator VLP standby write enable
            Object *usswe; // [26:26] USB voltage regulator stop standby write enable
          } sopt1cfg; 

          // SOPT2 (System Options Register 2) bitfields.
          struct { 
            Object *rtcclkoutsel; // [4:4] RTC clock out select
            Object *clkoutsel; // [5:7] CLKOUT select
            Object *fbsl; // [8:9] FlexBus security level
            Object *ptd7pad; // [11:11] PTD7 pad drive strength
            Object *traceclksel; // [12:12] Debug trace clock select
            Object *pllfllsel; // [16:17] PLL/FLL clock select
            Object *usbsrc; // [18:18] USB clock source select
            Object *rmiisrc; // [19:19] RMII clock source select
            Object *timesrc; // [20:21] IEEE 1588 timestamp clock source select
            Object *sdhcsrc; // [28:29] SDHC clock source select
          } sopt2; 

          // SOPT4 (System Options Register 4) bitfields.
          struct { 
            Object *ftm0flt0; // [0:0] FTM0 Fault 0 Select
            Object *ftm0flt1; // [1:1] FTM0 Fault 1 Select
            Object *ftm0flt2; // [2:2] FTM0 Fault 2 Select
            Object *ftm1flt0; // [4:4] FTM1 Fault 0 Select
            Object *ftm2flt0; // [8:8] FTM2 Fault 0 Select
            Object *ftm3flt0; // [12:12] FTM3 Fault 0 Select
            Object *ftm1ch0src; // [18:19] FTM1 channel 0 input capture source select
            Object *ftm2ch0src; // [20:21] FTM2 channel 0 input capture source select
            Object *ftm0clksel; // [24:24] FlexTimer 0 External Clock Pin Select
            Object *ftm1clksel; // [25:25] FTM1 External Clock Pin Select
            Object *ftm2clksel; // [26:26] FlexTimer 2 External Clock Pin Select
            Object *ftm3clksel; // [27:27] FlexTimer 3 External Clock Pin Select
            Object *ftm0trg0src; // [28:28] FlexTimer 0 Hardware Trigger 0 Source Select
            Object *ftm0trg1src; // [29:29] FlexTimer 0 Hardware Trigger 1 Source Select
            Object *ftm3trg0src; // [30:30] FlexTimer 3 Hardware Trigger 0 Source Select
            Object *ftm3trg1src; // [31:31] FlexTimer 3 Hardware Trigger 1 Source Select
          } sopt4; 

          // SOPT5 (System Options Register 5) bitfields.
          struct { 
            Object *uart0txsrc; // [0:1] UART 0 transmit data source select
            Object *uart0rxsrc; // [2:3] UART 0 receive data source select
            Object *uart1txsrc; // [4:5] UART 1 transmit data source select
            Object *uart1rxsrc; // [6:7] UART 1 receive data source select
          } sopt5; 

          // SOPT7 (System Options Register 7) bitfields.
          struct { 
            Object *adc0trgsel; // [0:3] ADC0 trigger select
            Object *adc0pretrgsel; // [4:4] ADC0 pretrigger select
            Object *adc0alttrgen; // [7:7] ADC0 alternate trigger enable
            Object *adc1trgsel; // [8:11] ADC1 trigger select
            Object *adc1pretrgsel; // [12:12] ADC1 pre-trigger select
            Object *adc1alttrgen; // [15:15] ADC1 alternate trigger enable
          } sopt7; 

          // SDID (System Device Identification Register) bitfields.
          struct { 
            Object *pinid; // [0:3] Pincount identification
            Object *famid; // [4:6] Kinetis family identification
            Object *dieid; // [7:11] Device Die ID
            Object *revid; // [12:15] Device revision number
            Object *seriesid; // [20:23] Kinetis Series ID
            Object *subfamid; // [24:27] Kinetis Sub-Family ID
            Object *familyid; // [28:31] Kinetis Family ID
          } sdid; 

          // SCGC1 (System Clock Gating Control Register 1) bitfields.
          struct { 
            Object *i2c2; // [6:6] I2C2 Clock Gate Control
            Object *uart4; // [10:10] UART4 Clock Gate Control
            Object *uart5; // [11:11] UART5 Clock Gate Control
          } scgc1; 

          // SCGC2 (System Clock Gating Control Register 2) bitfields.
          struct { 
            Object *enet; // [0:0] ENET Clock Gate Control
            Object *dac0; // [12:12] DAC0 Clock Gate Control
            Object *dac1; // [13:13] DAC1 Clock Gate Control
          } scgc2; 

          // SCGC3 (System Clock Gating Control Register 3) bitfields.
          struct { 
            Object *rnga; // [0:0] RNGA Clock Gate Control
            Object *spi2; // [12:12] SPI2 Clock Gate Control
            Object *sdhc; // [17:17] SDHC Clock Gate Control
            Object *ftm2; // [24:24] FTM2 Clock Gate Control
            Object *ftm3; // [25:25] FTM3 Clock Gate Control
            Object *adc1; // [27:27] ADC1 Clock Gate Control
          } scgc3; 

          // SCGC4 (System Clock Gating Control Register 4) bitfields.
          struct { 
            Object *ewm; // [1:1] EWM Clock Gate Control
            Object *cmt; // [2:2] CMT Clock Gate Control
            Object *i2c0; // [6:6] I2C0 Clock Gate Control
            Object *i2c1; // [7:7] I2C1 Clock Gate Control
            Object *uart0; // [10:10] UART0 Clock Gate Control
            Object *uart1; // [11:11] UART1 Clock Gate Control
            Object *uart2; // [12:12] UART2 Clock Gate Control
            Object *uart3; // [13:13] UART3 Clock Gate Control
            Object *usbotg; // [18:18] USB Clock Gate Control
            Object *cmp; // [19:19] Comparator Clock Gate Control
            Object *vref; // [20:20] VREF Clock Gate Control
          } scgc4; 

          // SCGC5 (System Clock Gating Control Register 5) bitfields.
          struct { 
            Object *lptmr; // [0:0] Low Power Timer Access Control
            Object *porta; // [9:9] Port A Clock Gate Control
            Object *portb; // [10:10] Port B Clock Gate Control
            Object *portc; // [11:11] Port C Clock Gate Control
            Object *portd; // [12:12] Port D Clock Gate Control
            Object *porte; // [13:13] Port E Clock Gate Control
          } scgc5; 

          // SCGC6 (System Clock Gating Control Register 6) bitfields.
          struct { 
            Object *ftf; // [0:0] Flash Memory Clock Gate Control
            Object *dmamux; // [1:1] DMA Mux Clock Gate Control
            Object *flexcan0; // [4:4] FlexCAN0 Clock Gate Control
            Object *rnga; // [9:9] RNGA Clock Gate Control
            Object *spi0; // [12:12] SPI0 Clock Gate Control
            Object *spi1; // [13:13] SPI1 Clock Gate Control
            Object *i2s; // [15:15] I2S Clock Gate Control
            Object *crc; // [18:18] CRC Clock Gate Control
            Object *usbdcd; // [21:21] USB DCD Clock Gate Control
            Object *pdb; // [22:22] PDB Clock Gate Control
            Object *pit; // [23:23] PIT Clock Gate Control
            Object *ftm0; // [24:24] FTM0 Clock Gate Control
            Object *ftm1; // [25:25] FTM1 Clock Gate Control
            Object *ftm2; // [26:26] FTM2 Clock Gate Control
            Object *adc0; // [27:27] ADC0 Clock Gate Control
            Object *rtc; // [29:29] RTC Access Control
            Object *dac0; // [31:31] DAC0 Clock Gate Control
          } scgc6; 

          // SCGC7 (System Clock Gating Control Register 7) bitfields.
          struct { 
            Object *flexbus; // [0:0] FlexBus Clock Gate Control
            Object *dma; // [1:1] DMA Clock Gate Control
            Object *mpu; // [2:2] MPU Clock Gate Control
          } scgc7; 

          // CLKDIV1 (System Clock Divider Register 1) bitfields.
          struct { 
            Object *outdiv4; // [16:19] Clock 4 output divider value
            Object *outdiv3; // [20:23] Clock 3 output divider value
            Object *outdiv2; // [24:27] Clock 2 output divider value
            Object *outdiv1; // [28:31] Clock 1 output divider value
          } clkdiv1; 

          // CLKDIV2 (System Clock Divider Register 2) bitfields.
          struct { 
            Object *usbfrac; // [0:0] USB clock divider fraction
            Object *usbdiv; // [1:3] USB clock divider divisor
          } clkdiv2; 

          // FCFG1 (Flash Configuration Register 1) bitfields.
          struct { 
            Object *flashdis; // [0:0] Flash Disable
            Object *flashdoze; // [1:1] Flash Doze
            Object *depart; // [8:11] FlexNVM partition
            Object *eesize; // [16:19] EEPROM size
            Object *pfsize; // [24:27] Program flash size
            Object *nvmsize; // [28:31] FlexNVM size
          } fcfg1; 

          // FCFG2 (Flash Configuration Register 2) bitfields.
          struct { 
            Object *maxaddr1; // [16:22] Max address block 1
            Object *pflsh; // [23:23] Program flash only
            Object *maxaddr0; // [24:30] Max address block 0
          } fcfg2; 

          // UIDH (Unique Identification Register High) bitfields.
          struct { 
            Object *uid; // [0:31] Unique Identification
          } uidh; 

          // UIDMH (Unique Identification Register Mid-High) bitfields.
          struct { 
            Object *uid; // [0:31] Unique Identification
          } uidmh; 

          // UIDML (Unique Identification Register Mid Low) bitfields.
          struct { 
            Object *uid; // [0:31] Unique Identification
          } uidml; 

          // UIDL (Unique Identification Register Low) bitfields.
          struct { 
            Object *uid; // [0:31] Unique Identification
          } uidl; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisSIMState;

void kinetis_sim_update_clocks(KinetisSIMState* state);

// ----------------------------------------------------------------------------

#endif /* KINETIS_SIM_H_ */
