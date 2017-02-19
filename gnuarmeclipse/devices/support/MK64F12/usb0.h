/*
 * Kinetis - USB (Universal Serial Bus, OTG Capable Controller) emulation.
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

#ifndef KINETIS_USB_H_
#define KINETIS_USB_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_USB DEVICE_PATH_KINETIS "USB"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_USB0,
    KINETIS_PORT_USB_UNDEFINED = 0xFF,
} kinetis_usb_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_USB TYPE_KINETIS_PREFIX "usb" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_USB_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisUSBParentClass;
typedef PeripheralState KinetisUSBParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_USB_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisUSBClass, (obj), TYPE_KINETIS_USB)
#define KINETIS_USB_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisUSBClass, (klass), TYPE_KINETIS_USB)

typedef struct {
    // private: 
    KinetisUSBParentClass parent_class;
    // public: 

    // None, so far.
} KinetisUSBClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_USB_STATE(obj) \
    OBJECT_CHECK(KinetisUSBState, (obj), TYPE_KINETIS_USB)

typedef struct {
    // private:
    KinetisUSBParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_usb_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 USB (Universal Serial Bus, OTG Capable Controller) registers.
        struct { 
          Object *perid; // 0 (Peripheral ID register) 
          Object *idcomp; // 0x4 (Peripheral ID Complement register) 
          Object *rev; // 0x8 (Peripheral Revision register) 
          Object *addinfo; // 0xC (Peripheral Additional Info register) 
          Object *otgistat; // 0x10 (OTG Interrupt Status register) 
          Object *otgicr; // 0x14 (OTG Interrupt Control register) 
          Object *otgstat; // 0x18 (OTG Status register) 
          Object *otgctl; // 0x1C (OTG Control register) 
          Object *istat; // 0x80 (Interrupt Status register) 
          Object *inten; // 0x84 (Interrupt Enable register) 
          Object *errstat; // 0x88 (Error Interrupt Status register) 
          Object *erren; // 0x8C (Error Interrupt Enable register) 
          Object *stat; // 0x90 (Status register) 
          Object *ctl; // 0x94 (Control register) 
          Object *addr; // 0x98 (Address register) 
          Object *bdtpage1; // 0x9C (BDT Page register 1) 
          Object *frmnuml; // 0xA0 (Frame Number register Low) 
          Object *frmnumh; // 0xA4 (Frame Number register High) 
          Object *token; // 0xA8 (Token register) 
          Object *softhld; // 0xAC (SOF Threshold register) 
          Object *bdtpage2; // 0xB0 (BDT Page Register 2) 
          Object *bdtpage3; // 0xB4 (BDT Page Register 3) 
          Object *endpt[16]; // 0xC0 (Endpoint Control register) 
          Object *usbctrl; // 0x100 (USB Control register) 
          Object *observe; // 0x104 (USB OTG Observe register) 
          Object *control; // 0x108 (USB OTG Control register) 
          Object *usbtrc0; // 0x10C (USB Transceiver Control register 0) 
          Object *usbfrmadjust; // 0x114 (Frame Adjust Register) 
          Object *clk_recover_ctrl; // 0x140 (USB Clock recovery control) 
          Object *clk_recover_irc_en; // 0x144 (IRC48M oscillator enable register) 
          Object *clk_recover_int_status; // 0x15C (Clock recovery separated interrupt status) 
        } reg;

        struct { 

          // PERID (Peripheral ID register) bitfields.
          struct { 
            Object *id; // [0:5] Peripheral Identification
          } perid; 

          // IDCOMP (Peripheral ID Complement register) bitfields.
          struct { 
            Object *nid; // [0:5] No description available
          } idcomp; 

          // REV (Peripheral Revision register) bitfields.
          struct { 
            Object *rev; // [0:7] Revision
          } rev; 

          // ADDINFO (Peripheral Additional Info register) bitfields.
          struct { 
            Object *iehost; // [0:0] No description available
            Object *irqnum; // [3:7] Assigned Interrupt Request Number
          } addinfo; 

          // OTGISTAT (OTG Interrupt Status register) bitfields.
          struct { 
            Object *avbuschg; // [0:0] No description available
            Object *b_sess_chg; // [2:2] No description available
            Object *sessvldchg; // [3:3] No description available
            Object *line_state_chg; // [5:5] No description available
            Object *onemsec; // [6:6] No description available
            Object *idchg; // [7:7] No description available
          } otgistat; 

          // OTGICR (OTG Interrupt Control register) bitfields.
          struct { 
            Object *avbusen; // [0:0] A VBUS Valid Interrupt Enable
            Object *bsessen; // [2:2] B Session END Interrupt Enable
            Object *sessvlden; // [3:3] Session Valid Interrupt Enable
            Object *linestateen; // [5:5] Line State Change Interrupt Enable
            Object *onemsecen; // [6:6] One Millisecond Interrupt Enable
            Object *iden; // [7:7] ID Interrupt Enable
          } otgicr; 

          // OTGSTAT (OTG Status register) bitfields.
          struct { 
            Object *avbusvld; // [0:0] A VBUS Valid
            Object *bsessend; // [2:2] B Session End
            Object *sess_vld; // [3:3] Session Valid
            Object *linestatestable; // [5:5] No description available
            Object *onemsecen; // [6:6] No description available
            Object *id; // [7:7] No description available
          } otgstat; 

          // OTGCTL (OTG Control register) bitfields.
          struct { 
            Object *otgen; // [2:2] On-The-Go pullup/pulldown resistor enable
            Object *dmlow; // [4:4] D- Data Line pull-down resistor enable
            Object *dplow; // [5:5] D+ Data Line pull-down resistor enable
            Object *dphigh; // [7:7] D+ Data Line pullup resistor enable
          } otgctl; 

          // ISTAT (Interrupt Status register) bitfields.
          struct { 
            Object *usbrst; // [0:0] No description available
            Object *error; // [1:1] No description available
            Object *softok; // [2:2] No description available
            Object *tokdne; // [3:3] No description available
            Object *sleep; // [4:4] No description available
            Object *resume; // [5:5] No description available
            Object *attach; // [6:6] Attach Interrupt
            Object *stall; // [7:7] Stall Interrupt
          } istat; 

          // INTEN (Interrupt Enable register) bitfields.
          struct { 
            Object *usbrsten; // [0:0] USBRST Interrupt Enable
            Object *erroren; // [1:1] ERROR Interrupt Enable
            Object *softoken; // [2:2] SOFTOK Interrupt Enable
            Object *tokdneen; // [3:3] TOKDNE Interrupt Enable
            Object *sleepen; // [4:4] SLEEP Interrupt Enable
            Object *resumeen; // [5:5] RESUME Interrupt Enable
            Object *attachen; // [6:6] ATTACH Interrupt Enable
            Object *stallen; // [7:7] STALL Interrupt Enable
          } inten; 

          // ERRSTAT (Error Interrupt Status register) bitfields.
          struct { 
            Object *piderr; // [0:0] No description available
            Object *crc5eof; // [1:1] No description available
            Object *crc16; // [2:2] No description available
            Object *dfn8; // [3:3] No description available
            Object *btoerr; // [4:4] No description available
            Object *dmaerr; // [5:5] No description available
            Object *btserr; // [7:7] No description available
          } errstat; 

          // ERREN (Error Interrupt Enable register) bitfields.
          struct { 
            Object *piderren; // [0:0] PIDERR Interrupt Enable
            Object *crc5eofen; // [1:1] CRC5/EOF Interrupt Enable
            Object *crc16en; // [2:2] CRC16 Interrupt Enable
            Object *dfn8en; // [3:3] DFN8 Interrupt Enable
            Object *btoerren; // [4:4] BTOERR Interrupt Enable
            Object *dmaerren; // [5:5] DMAERR Interrupt Enable
            Object *btserren; // [7:7] BTSERR Interrupt Enable
          } erren; 

          // STAT (Status register) bitfields.
          struct { 
            Object *odd; // [2:2] No description available
            Object *tx; // [3:3] Transmit Indicator
            Object *endp; // [4:7] No description available
          } stat; 

          // CTL (Control register) bitfields.
          struct { 
            Object *usbensofen; // [0:0] USB Enable
            Object *oddrst; // [1:1] No description available
            Object *resume; // [2:2] No description available
            Object *hostmodeen; // [3:3] No description available
            Object *reset; // [4:4] No description available
            Object *txsuspendtokenbusy; // [5:5] No description available
            Object *se0; // [6:6] Live USB Single Ended Zero signal
            Object *jstate; // [7:7] Live USB differential receiver JSTATE signal
          } ctl; 

          // ADDR (Address register) bitfields.
          struct { 
            Object *addr; // [0:6] USB Address
            Object *lsen; // [7:7] Low Speed Enable bit
          } addr; 

          // BDTPAGE1 (BDT Page register 1) bitfields.
          struct { 
            Object *bdtba; // [1:7] No description available
          } bdtpage1; 

          // FRMNUML (Frame Number register Low) bitfields.
          struct { 
            Object *frm; // [0:7] No description available
          } frmnuml; 

          // FRMNUMH (Frame Number register High) bitfields.
          struct { 
            Object *frm; // [0:2] No description available
          } frmnumh; 

          // TOKEN (Token register) bitfields.
          struct { 
            Object *tokenendpt; // [0:3] No description available
            Object *tokenpid; // [4:7] No description available
          } token; 

          // SOFTHLD (SOF Threshold register) bitfields.
          struct { 
            Object *cnt; // [0:7] No description available
          } softhld; 

          // BDTPAGE2 (BDT Page Register 2) bitfields.
          struct { 
            Object *bdtba; // [0:7] No description available
          } bdtpage2; 

          // BDTPAGE3 (BDT Page Register 3) bitfields.
          struct { 
            Object *bdtba; // [0:7] No description available
          } bdtpage3; 

          // ENDPTn (Endpoint Control register) bitfields.
          struct { 
            Object *ephshk; // [0:0] No description available
            Object *epstall; // [1:1] No description available
            Object *eptxen; // [2:2] No description available
            Object *eprxen; // [3:3] No description available
            Object *epctldis; // [4:4] No description available
            Object *retrydis; // [6:6] No description available
            Object *hostwohub; // [7:7] No description available
          } endpt[16]; 

          // USBCTRL (USB Control register) bitfields.
          struct { 
            Object *pde; // [6:6] No description available
            Object *susp; // [7:7] No description available
          } usbctrl; 

          // OBSERVE (USB OTG Observe register) bitfields.
          struct { 
            Object *dmpd; // [4:4] No description available
            Object *dppd; // [6:6] No description available
            Object *dppu; // [7:7] No description available
          } observe; 

          // CONTROL (USB OTG Control register) bitfields.
          struct { 
            Object *dppullupnonotg; // [4:4] No description available
          } control; 

          // USBTRC0 (USB Transceiver Control register 0) bitfields.
          struct { 
            Object *usb_resume_int; // [0:0] USB Asynchronous Interrupt
            Object *sync_det; // [1:1] Synchronous USB Interrupt Detect
            Object *usb_clk_recovery_int; // [2:2] Combined USB Clock Recovery interrupt status
            Object *usbresmen; // [5:5] Asynchronous Resume Interrupt Enable
            Object *usbreset; // [7:7] USB Reset
          } usbtrc0; 

          // USBFRMADJUST (Frame Adjust Register) bitfields.
          struct { 
            Object *adj; // [0:7] Frame Adjustment
          } usbfrmadjust; 

          // CLK_RECOVER_CTRL (USB Clock recovery control) bitfields.
          struct { 
            Object *restart_ifrtrim_en; // [5:5] Restart from IFR trim value
            Object *reset_resume_rough_en; // [6:6] Reset/resume to rough phase enable
            Object *clock_recover_en; // [7:7] Crystal-less USB enable
          } clk_recover_ctrl; 

          // CLK_RECOVER_IRC_EN (IRC48M oscillator enable register) bitfields.
          struct { 
            Object *reg_en; // [0:0] IRC48M regulator enable
            Object *irc_en; // [1:1] IRC48M enable
          } clk_recover_irc_en; 

          // CLK_RECOVER_INT_STATUS (Clock recovery separated interrupt status) bitfields.
          struct { 
            Object *ovf_error; // [4:4] No description available
          } clk_recover_int_status; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisUSBState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_USB_H_ */
