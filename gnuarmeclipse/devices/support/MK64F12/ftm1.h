/*
 * Kinetis - FTM (FlexTimer Module) emulation.
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

#ifndef KINETIS_FTM_H_
#define KINETIS_FTM_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_FTM DEVICE_PATH_KINETIS "FTM"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_FTM0,
    KINETIS_PORT_FTM1,
    KINETIS_PORT_FTM2,
    KINETIS_PORT_FTM3,
    KINETIS_PORT_FTM_UNDEFINED = 0xFF,
} kinetis_ftm_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_FTM TYPE_KINETIS_PREFIX "ftm" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_FTM_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisFTMParentClass;
typedef PeripheralState KinetisFTMParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_FTM_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisFTMClass, (obj), TYPE_KINETIS_FTM)
#define KINETIS_FTM_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisFTMClass, (klass), TYPE_KINETIS_FTM)

typedef struct {
    // private: 
    KinetisFTMParentClass parent_class;
    // public: 

    // None, so far.
} KinetisFTMClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_FTM_STATE(obj) \
    OBJECT_CHECK(KinetisFTMState, (obj), TYPE_KINETIS_FTM)

typedef struct {
    // private:
    KinetisFTMParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_ftm_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 FTM (FlexTimer Module) registers.
        struct { 
          Object *sc; // 0 (Status And Control) 
          Object *cnt; // 0x4 (Counter) 
          Object *mod; // 0x8 (Modulo) 
          Object *csc[2]; // 0xC (Channel (n) Status And Control) 
          Object *cv[2]; // 0x10 (Channel (n) Value) 
          Object *cntin; // 0x4C (Counter Initial Value) 
          Object *status; // 0x50 (Capture And Compare Status) 
          Object *mode; // 0x54 (Features Mode Selection) 
          Object *sync; // 0x58 (Synchronization) 
          Object *outinit; // 0x5C (Initial State For Channels Output) 
          Object *outmask; // 0x60 (Output Mask) 
          Object *combine; // 0x64 (Function For Linked Channels) 
          Object *deadtime; // 0x68 (Deadtime Insertion Control) 
          Object *exttrig; // 0x6C (FTM External Trigger) 
          Object *pol; // 0x70 (Channels Polarity) 
          Object *fms; // 0x74 (Fault Mode Status) 
          Object *filter; // 0x78 (Input Capture Filter Control) 
          Object *fltctrl; // 0x7C (Fault Control) 
          Object *qdctrl; // 0x80 (Quadrature Decoder Control And Status) 
          Object *conf; // 0x84 (Configuration) 
          Object *fltpol; // 0x88 (FTM Fault Input Polarity) 
          Object *synconf; // 0x8C (Synchronization Configuration) 
          Object *invctrl; // 0x90 (FTM Inverting Control) 
          Object *swoctrl; // 0x94 (FTM Software Output Control) 
          Object *pwmload; // 0x98 (FTM PWM Load) 
        } reg;

        struct { 

          // SC (Status And Control) bitfields.
          struct { 
            Object *ps; // [0:2] Prescale Factor Selection
            Object *clks; // [3:4] Clock Source Selection
            Object *cpwms; // [5:5] Center-Aligned PWM Select
            Object *toie; // [6:6] Timer Overflow Interrupt Enable
            Object *tof; // [7:7] Timer Overflow Flag
          } sc; 

          // CNT (Counter) bitfields.
          struct { 
            Object *count; // [0:15] Counter Value
          } cnt; 

          // MOD (Modulo) bitfields.
          struct { 
            Object *mod; // [0:15] No description available
          } mod; 

          // CnSC (Channel (n) Status And Control) bitfields.
          struct { 
            Object *dma; // [0:0] DMA Enable
            Object *elsa; // [2:2] Edge or Level Select
            Object *elsb; // [3:3] Edge or Level Select
            Object *msa; // [4:4] Channel Mode Select
            Object *msb; // [5:5] Channel Mode Select
            Object *chie; // [6:6] Channel Interrupt Enable
            Object *chf; // [7:7] Channel Flag
          } csc[2]; 

          // CnV (Channel (n) Value) bitfields.
          struct { 
            Object *val; // [0:15] Channel Value
          } cv[2]; 

          // CNTIN (Counter Initial Value) bitfields.
          struct { 
            Object *init; // [0:15] No description available
          } cntin; 

          // STATUS (Capture And Compare Status) bitfields.
          struct { 
            Object *ch0f; // [0:0] Channel 0 Flag
            Object *ch1f; // [1:1] Channel 1 Flag
            Object *ch2f; // [2:2] Channel 2 Flag
            Object *ch3f; // [3:3] Channel 3 Flag
            Object *ch4f; // [4:4] Channel 4 Flag
            Object *ch5f; // [5:5] Channel 5 Flag
            Object *ch6f; // [6:6] Channel 6 Flag
            Object *ch7f; // [7:7] Channel 7 Flag
          } status; 

          // MODE (Features Mode Selection) bitfields.
          struct { 
            Object *ftmen; // [0:0] FTM Enable
            Object *init; // [1:1] Initialize The Channels Output
            Object *wpdis; // [2:2] Write Protection Disable
            Object *pwmsync; // [3:3] PWM Synchronization Mode
            Object *captest; // [4:4] Capture Test Mode Enable
            Object *faultm; // [5:6] Fault Control Mode
            Object *faultie; // [7:7] Fault Interrupt Enable
          } mode; 

          // SYNC (Synchronization) bitfields.
          struct { 
            Object *cntmin; // [0:0] Minimum Loading Point Enable
            Object *cntmax; // [1:1] Maximum Loading Point Enable
            Object *reinit; // [2:2] FTM Counter Reinitialization By Synchronization (FTM counter synchronization)
            Object *synchom; // [3:3] Output Mask Synchronization
            Object *trig0; // [4:4] PWM Synchronization Hardware Trigger 0
            Object *trig1; // [5:5] PWM Synchronization Hardware Trigger 1
            Object *trig2; // [6:6] PWM Synchronization Hardware Trigger 2
            Object *swsync; // [7:7] PWM Synchronization Software Trigger
          } sync; 

          // OUTINIT (Initial State For Channels Output) bitfields.
          struct { 
            Object *ch0oi; // [0:0] Channel 0 Output Initialization Value
            Object *ch1oi; // [1:1] Channel 1 Output Initialization Value
            Object *ch2oi; // [2:2] Channel 2 Output Initialization Value
            Object *ch3oi; // [3:3] Channel 3 Output Initialization Value
            Object *ch4oi; // [4:4] Channel 4 Output Initialization Value
            Object *ch5oi; // [5:5] Channel 5 Output Initialization Value
            Object *ch6oi; // [6:6] Channel 6 Output Initialization Value
            Object *ch7oi; // [7:7] Channel 7 Output Initialization Value
          } outinit; 

          // OUTMASK (Output Mask) bitfields.
          struct { 
            Object *ch0om; // [0:0] Channel 0 Output Mask
            Object *ch1om; // [1:1] Channel 1 Output Mask
            Object *ch2om; // [2:2] Channel 2 Output Mask
            Object *ch3om; // [3:3] Channel 3 Output Mask
            Object *ch4om; // [4:4] Channel 4 Output Mask
            Object *ch5om; // [5:5] Channel 5 Output Mask
            Object *ch6om; // [6:6] Channel 6 Output Mask
            Object *ch7om; // [7:7] Channel 7 Output Mask
          } outmask; 

          // COMBINE (Function For Linked Channels) bitfields.
          struct { 
            Object *combine0; // [0:0] Combine Channels For n = 0
            Object *comp0; // [1:1] Complement Of Channel (n) For n = 0
            Object *decapen0; // [2:2] Dual Edge Capture Mode Enable For n = 0
            Object *decap0; // [3:3] Dual Edge Capture Mode Captures For n = 0
            Object *dten0; // [4:4] Deadtime Enable For n = 0
            Object *syncen0; // [5:5] Synchronization Enable For n = 0
            Object *faulten0; // [6:6] Fault Control Enable For n = 0
            Object *combine1; // [8:8] Combine Channels For n = 2
            Object *comp1; // [9:9] Complement Of Channel (n) For n = 2
            Object *decapen1; // [10:10] Dual Edge Capture Mode Enable For n = 2
            Object *decap1; // [11:11] Dual Edge Capture Mode Captures For n = 2
            Object *dten1; // [12:12] Deadtime Enable For n = 2
            Object *syncen1; // [13:13] Synchronization Enable For n = 2
            Object *faulten1; // [14:14] Fault Control Enable For n = 2
            Object *combine2; // [16:16] Combine Channels For n = 4
            Object *comp2; // [17:17] Complement Of Channel (n) For n = 4
            Object *decapen2; // [18:18] Dual Edge Capture Mode Enable For n = 4
            Object *decap2; // [19:19] Dual Edge Capture Mode Captures For n = 4
            Object *dten2; // [20:20] Deadtime Enable For n = 4
            Object *syncen2; // [21:21] Synchronization Enable For n = 4
            Object *faulten2; // [22:22] Fault Control Enable For n = 4
            Object *combine3; // [24:24] Combine Channels For n = 6
            Object *comp3; // [25:25] Complement Of Channel (n) for n = 6
            Object *decapen3; // [26:26] Dual Edge Capture Mode Enable For n = 6
            Object *decap3; // [27:27] Dual Edge Capture Mode Captures For n = 6
            Object *dten3; // [28:28] Deadtime Enable For n = 6
            Object *syncen3; // [29:29] Synchronization Enable For n = 6
            Object *faulten3; // [30:30] Fault Control Enable For n = 6
          } combine; 

          // DEADTIME (Deadtime Insertion Control) bitfields.
          struct { 
            Object *dtval; // [0:5] Deadtime Value
            Object *dtps; // [6:7] Deadtime Prescaler Value
          } deadtime; 

          // EXTTRIG (FTM External Trigger) bitfields.
          struct { 
            Object *ch2trig; // [0:0] Channel 2 Trigger Enable
            Object *ch3trig; // [1:1] Channel 3 Trigger Enable
            Object *ch4trig; // [2:2] Channel 4 Trigger Enable
            Object *ch5trig; // [3:3] Channel 5 Trigger Enable
            Object *ch0trig; // [4:4] Channel 0 Trigger Enable
            Object *ch1trig; // [5:5] Channel 1 Trigger Enable
            Object *inittrigen; // [6:6] Initialization Trigger Enable
            Object *trigf; // [7:7] Channel Trigger Flag
          } exttrig; 

          // POL (Channels Polarity) bitfields.
          struct { 
            Object *pol0; // [0:0] Channel 0 Polarity
            Object *pol1; // [1:1] Channel 1 Polarity
            Object *pol2; // [2:2] Channel 2 Polarity
            Object *pol3; // [3:3] Channel 3 Polarity
            Object *pol4; // [4:4] Channel 4 Polarity
            Object *pol5; // [5:5] Channel 5 Polarity
            Object *pol6; // [6:6] Channel 6 Polarity
            Object *pol7; // [7:7] Channel 7 Polarity
          } pol; 

          // FMS (Fault Mode Status) bitfields.
          struct { 
            Object *faultf0; // [0:0] Fault Detection Flag 0
            Object *faultf1; // [1:1] Fault Detection Flag 1
            Object *faultf2; // [2:2] Fault Detection Flag 2
            Object *faultf3; // [3:3] Fault Detection Flag 3
            Object *faultin; // [5:5] Fault Inputs
            Object *wpen; // [6:6] Write Protection Enable
            Object *faultf; // [7:7] Fault Detection Flag
          } fms; 

          // FILTER (Input Capture Filter Control) bitfields.
          struct { 
            Object *ch0fval; // [0:3] Channel 0 Input Filter
            Object *ch1fval; // [4:7] Channel 1 Input Filter
            Object *ch2fval; // [8:11] Channel 2 Input Filter
            Object *ch3fval; // [12:15] Channel 3 Input Filter
          } filter; 

          // FLTCTRL (Fault Control) bitfields.
          struct { 
            Object *fault0en; // [0:0] Fault Input 0 Enable
            Object *fault1en; // [1:1] Fault Input 1 Enable
            Object *fault2en; // [2:2] Fault Input 2 Enable
            Object *fault3en; // [3:3] Fault Input 3 Enable
            Object *ffltr0en; // [4:4] Fault Input 0 Filter Enable
            Object *ffltr1en; // [5:5] Fault Input 1 Filter Enable
            Object *ffltr2en; // [6:6] Fault Input 2 Filter Enable
            Object *ffltr3en; // [7:7] Fault Input 3 Filter Enable
            Object *ffval; // [8:11] Fault Input Filter
          } fltctrl; 

          // QDCTRL (Quadrature Decoder Control And Status) bitfields.
          struct { 
            Object *quaden; // [0:0] Quadrature Decoder Mode Enable
            Object *tofdir; // [1:1] Timer Overflow Direction In Quadrature Decoder Mode
            Object *quadir; // [2:2] FTM Counter Direction In Quadrature Decoder Mode
            Object *quadmode; // [3:3] Quadrature Decoder Mode
            Object *phbpol; // [4:4] Phase B Input Polarity
            Object *phapol; // [5:5] Phase A Input Polarity
            Object *phbfltren; // [6:6] Phase B Input Filter Enable
            Object *phafltren; // [7:7] Phase A Input Filter Enable
          } qdctrl; 

          // CONF (Configuration) bitfields.
          struct { 
            Object *numtof; // [0:4] TOF Frequency
            Object *bdmmode; // [6:7] BDM Mode
            Object *gtbeen; // [9:9] Global Time Base Enable
            Object *gtbeout; // [10:10] Global Time Base Output
          } conf; 

          // FLTPOL (FTM Fault Input Polarity) bitfields.
          struct { 
            Object *flt0pol; // [0:0] Fault Input 0 Polarity
            Object *flt1pol; // [1:1] Fault Input 1 Polarity
            Object *flt2pol; // [2:2] Fault Input 2 Polarity
            Object *flt3pol; // [3:3] Fault Input 3 Polarity
          } fltpol; 

          // SYNCONF (Synchronization Configuration) bitfields.
          struct { 
            Object *hwtrigmode; // [0:0] Hardware Trigger Mode
            Object *cntinc; // [2:2] CNTIN Register Synchronization
            Object *invc; // [4:4] INVCTRL Register Synchronization
            Object *swoc; // [5:5] SWOCTRL Register Synchronization
            Object *syncmode; // [7:7] Synchronization Mode
            Object *swrstcnt; // [8:8] No description available
            Object *swwrbuf; // [9:9] No description available
            Object *swom; // [10:10] No description available
            Object *swinvc; // [11:11] No description available
            Object *swsoc; // [12:12] No description available
            Object *hwrstcnt; // [16:16] No description available
            Object *hwwrbuf; // [17:17] No description available
            Object *hwom; // [18:18] No description available
            Object *hwinvc; // [19:19] No description available
            Object *hwsoc; // [20:20] No description available
          } synconf; 

          // INVCTRL (FTM Inverting Control) bitfields.
          struct { 
            Object *inv0en; // [0:0] Pair Channels 0 Inverting Enable
            Object *inv1en; // [1:1] Pair Channels 1 Inverting Enable
            Object *inv2en; // [2:2] Pair Channels 2 Inverting Enable
            Object *inv3en; // [3:3] Pair Channels 3 Inverting Enable
          } invctrl; 

          // SWOCTRL (FTM Software Output Control) bitfields.
          struct { 
            Object *ch0oc; // [0:0] Channel 0 Software Output Control Enable
            Object *ch1oc; // [1:1] Channel 1 Software Output Control Enable
            Object *ch2oc; // [2:2] Channel 2 Software Output Control Enable
            Object *ch3oc; // [3:3] Channel 3 Software Output Control Enable
            Object *ch4oc; // [4:4] Channel 4 Software Output Control Enable
            Object *ch5oc; // [5:5] Channel 5 Software Output Control Enable
            Object *ch6oc; // [6:6] Channel 6 Software Output Control Enable
            Object *ch7oc; // [7:7] Channel 7 Software Output Control Enable
            Object *ch0ocv; // [8:8] Channel 0 Software Output Control Value
            Object *ch1ocv; // [9:9] Channel 1 Software Output Control Value
            Object *ch2ocv; // [10:10] Channel 2 Software Output Control Value
            Object *ch3ocv; // [11:11] Channel 3 Software Output Control Value
            Object *ch4ocv; // [12:12] Channel 4 Software Output Control Value
            Object *ch5ocv; // [13:13] Channel 5 Software Output Control Value
            Object *ch6ocv; // [14:14] Channel 6 Software Output Control Value
            Object *ch7ocv; // [15:15] Channel 7 Software Output Control Value
          } swoctrl; 

          // PWMLOAD (FTM PWM Load) bitfields.
          struct { 
            Object *ch0sel; // [0:0] Channel 0 Select
            Object *ch1sel; // [1:1] Channel 1 Select
            Object *ch2sel; // [2:2] Channel 2 Select
            Object *ch3sel; // [3:3] Channel 3 Select
            Object *ch4sel; // [4:4] Channel 4 Select
            Object *ch5sel; // [5:5] Channel 5 Select
            Object *ch6sel; // [6:6] Channel 6 Select
            Object *ch7sel; // [7:7] Channel 7 Select
            Object *ldok; // [9:9] Load Enable
          } pwmload; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisFTMState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_FTM_H_ */
