/*
 * Kinetis - ADC (Analog-to-Digital Converter) emulation.
 *
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

#ifndef KINETIS_ADC_H_
#define KINETIS_ADC_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_ADC DEVICE_PATH_KINETIS "ADC"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_ADC0,
    KINETIS_PORT_ADC1,
    KINETIS_PORT_ADC_UNDEFINED = 0xFF,
} kinetis_adc_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_ADC TYPE_KINETIS_PREFIX "adc" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_ADC_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisADCParentClass;
typedef PeripheralState KinetisADCParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_ADC_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisADCClass, (obj), TYPE_KINETIS_ADC)
#define KINETIS_ADC_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisADCClass, (klass), TYPE_KINETIS_ADC)

typedef struct {
    // private: 
    KinetisADCParentClass parent_class;
    // public: 

    // None, so far.
} KinetisADCClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_ADC_STATE(obj) \
    OBJECT_CHECK(KinetisADCState, (obj), TYPE_KINETIS_ADC)

typedef struct {
    // private:
    KinetisADCParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_adc_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 ADC (Analog-to-Digital Converter) registers.
        struct { 
          Object *sc1[2]; // 0 (ADC Status and Control Registers 1) 
          Object *cfg1; // 0x8 (ADC Configuration Register 1) 
          Object *cfg2; // 0xC (ADC Configuration Register 2) 
          Object *r[2]; // 0x10 (ADC Data Result Register) 
          Object *cv[2]; // 0x18 (Compare Value Registers) 
          Object *sc2; // 0x20 (Status and Control Register 2) 
          Object *sc3; // 0x24 (Status and Control Register 3) 
          Object *ofs; // 0x28 (ADC Offset Correction Register) 
          Object *pg; // 0x2C (ADC Plus-Side Gain Register) 
          Object *mg; // 0x30 (ADC Minus-Side Gain Register) 
          Object *clpd; // 0x34 (ADC Plus-Side General Calibration Value Register) 
          Object *clps; // 0x38 (ADC Plus-Side General Calibration Value Register) 
          Object *clp4; // 0x3C (ADC Plus-Side General Calibration Value Register) 
          Object *clp3; // 0x40 (ADC Plus-Side General Calibration Value Register) 
          Object *clp2; // 0x44 (ADC Plus-Side General Calibration Value Register) 
          Object *clp1; // 0x48 (ADC Plus-Side General Calibration Value Register) 
          Object *clp0; // 0x4C (ADC Plus-Side General Calibration Value Register) 
          Object *clmd; // 0x54 (ADC Minus-Side General Calibration Value Register) 
          Object *clms; // 0x58 (ADC Minus-Side General Calibration Value Register) 
          Object *clm4; // 0x5C (ADC Minus-Side General Calibration Value Register) 
          Object *clm3; // 0x60 (ADC Minus-Side General Calibration Value Register) 
          Object *clm2; // 0x64 (ADC Minus-Side General Calibration Value Register) 
          Object *clm1; // 0x68 (ADC Minus-Side General Calibration Value Register) 
          Object *clm0; // 0x6C (ADC Minus-Side General Calibration Value Register) 
        } reg;

        struct { 

          // SC1n (ADC Status and Control Registers 1) bitfields.
          struct { 
            Object *adch; // [0:4] Input channel select
            Object *diff; // [5:5] Differential Mode Enable
            Object *aien; // [6:6] Interrupt Enable
            Object *coco; // [7:7] Conversion Complete Flag
          } sc1[2]; 

          // CFG1 (ADC Configuration Register 1) bitfields.
          struct { 
            Object *adiclk; // [0:1] Input Clock Select
            Object *mode; // [2:3] Conversion mode selection
            Object *adlsmp; // [4:4] Sample Time Configuration
            Object *adiv; // [5:6] Clock Divide Select
            Object *adlpc; // [7:7] Low-Power Configuration
          } cfg1; 

          // CFG2 (ADC Configuration Register 2) bitfields.
          struct { 
            Object *adlsts; // [0:1] Long Sample Time Select
            Object *adhsc; // [2:2] High-Speed Configuration
            Object *adacken; // [3:3] Asynchronous Clock Output Enable
            Object *muxsel; // [4:4] ADC Mux Select
          } cfg2; 

          // Rn (ADC Data Result Register) bitfields.
          struct { 
            Object *d; // [0:15] Data result
          } r[2]; 

          // CVn (Compare Value Registers) bitfields.
          struct { 
            Object *cv; // [0:15] Compare Value.
          } cv[2]; 

          // SC2 (Status and Control Register 2) bitfields.
          struct { 
            Object *refsel; // [0:1] Voltage Reference Selection
            Object *dmaen; // [2:2] DMA Enable
            Object *acren; // [3:3] Compare Function Range Enable
            Object *acfgt; // [4:4] Compare Function Greater Than Enable
            Object *acfe; // [5:5] Compare Function Enable
            Object *adtrg; // [6:6] Conversion Trigger Select
            Object *adact; // [7:7] Conversion Active
          } sc2; 

          // SC3 (Status and Control Register 3) bitfields.
          struct { 
            Object *avgs; // [0:1] Hardware Average Select
            Object *avge; // [2:2] Hardware Average Enable
            Object *adco; // [3:3] Continuous Conversion Enable
            Object *calf; // [6:6] Calibration Failed Flag
            Object *cal; // [7:7] Calibration
          } sc3; 

          // OFS (ADC Offset Correction Register) bitfields.
          struct { 
            Object *ofs; // [0:15] Offset Error Correction Value
          } ofs; 

          // PG (ADC Plus-Side Gain Register) bitfields.
          struct { 
            Object *pg; // [0:15] Plus-Side Gain
          } pg; 

          // MG (ADC Minus-Side Gain Register) bitfields.
          struct { 
            Object *mg; // [0:15] Minus-Side Gain
          } mg; 

          // CLPD (ADC Plus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clpd; // [0:5] No description available
          } clpd; 

          // CLPS (ADC Plus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clps; // [0:5] No description available
          } clps; 

          // CLP4 (ADC Plus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clp4; // [0:9] No description available
          } clp4; 

          // CLP3 (ADC Plus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clp3; // [0:8] No description available
          } clp3; 

          // CLP2 (ADC Plus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clp2; // [0:7] No description available
          } clp2; 

          // CLP1 (ADC Plus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clp1; // [0:6] No description available
          } clp1; 

          // CLP0 (ADC Plus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clp0; // [0:5] No description available
          } clp0; 

          // CLMD (ADC Minus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clmd; // [0:5] No description available
          } clmd; 

          // CLMS (ADC Minus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clms; // [0:5] No description available
          } clms; 

          // CLM4 (ADC Minus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clm4; // [0:9] No description available
          } clm4; 

          // CLM3 (ADC Minus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clm3; // [0:8] No description available
          } clm3; 

          // CLM2 (ADC Minus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clm2; // [0:7] No description available
          } clm2; 

          // CLM1 (ADC Minus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clm1; // [0:6] No description available
          } clm1; 

          // CLM0 (ADC Minus-Side General Calibration Value Register) bitfields.
          struct { 
            Object *clm0; // [0:5] No description available
          } clm0; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisADCState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_ADC_H_ */
