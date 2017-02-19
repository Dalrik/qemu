/*
 * Kinetis - SIM (System Integration Module) emulation.
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

#include <hw/cortexm/kinetis/sim.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_sim_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisSIMState *state = KINETIS_SIM_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.sopt1 = cm_object_get_child_by_name(obj, "SOPT1");
    state->u.k6.reg.sopt1cfg = cm_object_get_child_by_name(obj, "SOPT1CFG");
    state->u.k6.reg.sopt2 = cm_object_get_child_by_name(obj, "SOPT2");
    state->u.k6.reg.sopt4 = cm_object_get_child_by_name(obj, "SOPT4");
    state->u.k6.reg.sopt5 = cm_object_get_child_by_name(obj, "SOPT5");
    state->u.k6.reg.sopt7 = cm_object_get_child_by_name(obj, "SOPT7");
    state->u.k6.reg.sdid = cm_object_get_child_by_name(obj, "SDID");
    state->u.k6.reg.scgc1 = cm_object_get_child_by_name(obj, "SCGC1");
    state->u.k6.reg.scgc2 = cm_object_get_child_by_name(obj, "SCGC2");
    state->u.k6.reg.scgc3 = cm_object_get_child_by_name(obj, "SCGC3");
    state->u.k6.reg.scgc4 = cm_object_get_child_by_name(obj, "SCGC4");
    state->u.k6.reg.scgc5 = cm_object_get_child_by_name(obj, "SCGC5");
    state->u.k6.reg.scgc6 = cm_object_get_child_by_name(obj, "SCGC6");
    state->u.k6.reg.scgc7 = cm_object_get_child_by_name(obj, "SCGC7");
    state->u.k6.reg.clkdiv1 = cm_object_get_child_by_name(obj, "CLKDIV1");
    state->u.k6.reg.clkdiv2 = cm_object_get_child_by_name(obj, "CLKDIV2");
    state->u.k6.reg.fcfg1 = cm_object_get_child_by_name(obj, "FCFG1");
    state->u.k6.reg.fcfg2 = cm_object_get_child_by_name(obj, "FCFG2");
    state->u.k6.reg.uidh = cm_object_get_child_by_name(obj, "UIDH");
    state->u.k6.reg.uidmh = cm_object_get_child_by_name(obj, "UIDMH");
    state->u.k6.reg.uidml = cm_object_get_child_by_name(obj, "UIDML");
    state->u.k6.reg.uidl = cm_object_get_child_by_name(obj, "UIDL");

    // SOPT1 bitfields.
    state->u.k6.fld.sopt1.ramsize = cm_object_get_child_by_name(state->u.k6.reg.sopt1, "RAMSIZE");
    state->u.k6.fld.sopt1.osc32ksel = cm_object_get_child_by_name(state->u.k6.reg.sopt1, "OSC32KSEL");
    state->u.k6.fld.sopt1.usbvstby = cm_object_get_child_by_name(state->u.k6.reg.sopt1, "USBVSTBY");
    state->u.k6.fld.sopt1.usbsstby = cm_object_get_child_by_name(state->u.k6.reg.sopt1, "USBSSTBY");
    state->u.k6.fld.sopt1.usbregen = cm_object_get_child_by_name(state->u.k6.reg.sopt1, "USBREGEN");

    // SOPT1CFG bitfields.
    state->u.k6.fld.sopt1cfg.urwe = cm_object_get_child_by_name(state->u.k6.reg.sopt1cfg, "URWE");
    state->u.k6.fld.sopt1cfg.uvswe = cm_object_get_child_by_name(state->u.k6.reg.sopt1cfg, "UVSWE");
    state->u.k6.fld.sopt1cfg.usswe = cm_object_get_child_by_name(state->u.k6.reg.sopt1cfg, "USSWE");

    // SOPT2 bitfields.
    state->u.k6.fld.sopt2.rtcclkoutsel = cm_object_get_child_by_name(state->u.k6.reg.sopt2, "RTCCLKOUTSEL");
    state->u.k6.fld.sopt2.clkoutsel = cm_object_get_child_by_name(state->u.k6.reg.sopt2, "CLKOUTSEL");
    state->u.k6.fld.sopt2.fbsl = cm_object_get_child_by_name(state->u.k6.reg.sopt2, "FBSL");
    state->u.k6.fld.sopt2.ptd7pad = cm_object_get_child_by_name(state->u.k6.reg.sopt2, "PTD7PAD");
    state->u.k6.fld.sopt2.traceclksel = cm_object_get_child_by_name(state->u.k6.reg.sopt2, "TRACECLKSEL");
    state->u.k6.fld.sopt2.pllfllsel = cm_object_get_child_by_name(state->u.k6.reg.sopt2, "PLLFLLSEL");
    state->u.k6.fld.sopt2.usbsrc = cm_object_get_child_by_name(state->u.k6.reg.sopt2, "USBSRC");
    state->u.k6.fld.sopt2.rmiisrc = cm_object_get_child_by_name(state->u.k6.reg.sopt2, "RMIISRC");
    state->u.k6.fld.sopt2.timesrc = cm_object_get_child_by_name(state->u.k6.reg.sopt2, "TIMESRC");
    state->u.k6.fld.sopt2.sdhcsrc = cm_object_get_child_by_name(state->u.k6.reg.sopt2, "SDHCSRC");

    // SOPT4 bitfields.
    state->u.k6.fld.sopt4.ftm0flt0 = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM0FLT0");
    state->u.k6.fld.sopt4.ftm0flt1 = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM0FLT1");
    state->u.k6.fld.sopt4.ftm0flt2 = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM0FLT2");
    state->u.k6.fld.sopt4.ftm1flt0 = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM1FLT0");
    state->u.k6.fld.sopt4.ftm2flt0 = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM2FLT0");
    state->u.k6.fld.sopt4.ftm3flt0 = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM3FLT0");
    state->u.k6.fld.sopt4.ftm1ch0src = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM1CH0SRC");
    state->u.k6.fld.sopt4.ftm2ch0src = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM2CH0SRC");
    state->u.k6.fld.sopt4.ftm0clksel = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM0CLKSEL");
    state->u.k6.fld.sopt4.ftm1clksel = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM1CLKSEL");
    state->u.k6.fld.sopt4.ftm2clksel = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM2CLKSEL");
    state->u.k6.fld.sopt4.ftm3clksel = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM3CLKSEL");
    state->u.k6.fld.sopt4.ftm0trg0src = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM0TRG0SRC");
    state->u.k6.fld.sopt4.ftm0trg1src = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM0TRG1SRC");
    state->u.k6.fld.sopt4.ftm3trg0src = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM3TRG0SRC");
    state->u.k6.fld.sopt4.ftm3trg1src = cm_object_get_child_by_name(state->u.k6.reg.sopt4, "FTM3TRG1SRC");

    // SOPT5 bitfields.
    state->u.k6.fld.sopt5.uart0txsrc = cm_object_get_child_by_name(state->u.k6.reg.sopt5, "UART0TXSRC");
    state->u.k6.fld.sopt5.uart0rxsrc = cm_object_get_child_by_name(state->u.k6.reg.sopt5, "UART0RXSRC");
    state->u.k6.fld.sopt5.uart1txsrc = cm_object_get_child_by_name(state->u.k6.reg.sopt5, "UART1TXSRC");
    state->u.k6.fld.sopt5.uart1rxsrc = cm_object_get_child_by_name(state->u.k6.reg.sopt5, "UART1RXSRC");

    // SOPT7 bitfields.
    state->u.k6.fld.sopt7.adc0trgsel = cm_object_get_child_by_name(state->u.k6.reg.sopt7, "ADC0TRGSEL");
    state->u.k6.fld.sopt7.adc0pretrgsel = cm_object_get_child_by_name(state->u.k6.reg.sopt7, "ADC0PRETRGSEL");
    state->u.k6.fld.sopt7.adc0alttrgen = cm_object_get_child_by_name(state->u.k6.reg.sopt7, "ADC0ALTTRGEN");
    state->u.k6.fld.sopt7.adc1trgsel = cm_object_get_child_by_name(state->u.k6.reg.sopt7, "ADC1TRGSEL");
    state->u.k6.fld.sopt7.adc1pretrgsel = cm_object_get_child_by_name(state->u.k6.reg.sopt7, "ADC1PRETRGSEL");
    state->u.k6.fld.sopt7.adc1alttrgen = cm_object_get_child_by_name(state->u.k6.reg.sopt7, "ADC1ALTTRGEN");

    // SDID bitfields.
    state->u.k6.fld.sdid.pinid = cm_object_get_child_by_name(state->u.k6.reg.sdid, "PINID");
    state->u.k6.fld.sdid.famid = cm_object_get_child_by_name(state->u.k6.reg.sdid, "FAMID");
    state->u.k6.fld.sdid.dieid = cm_object_get_child_by_name(state->u.k6.reg.sdid, "DIEID");
    state->u.k6.fld.sdid.revid = cm_object_get_child_by_name(state->u.k6.reg.sdid, "REVID");
    state->u.k6.fld.sdid.seriesid = cm_object_get_child_by_name(state->u.k6.reg.sdid, "SERIESID");
    state->u.k6.fld.sdid.subfamid = cm_object_get_child_by_name(state->u.k6.reg.sdid, "SUBFAMID");
    state->u.k6.fld.sdid.familyid = cm_object_get_child_by_name(state->u.k6.reg.sdid, "FAMILYID");

    // SCGC1 bitfields.
    state->u.k6.fld.scgc1.i2c2 = cm_object_get_child_by_name(state->u.k6.reg.scgc1, "I2C2");
    state->u.k6.fld.scgc1.uart4 = cm_object_get_child_by_name(state->u.k6.reg.scgc1, "UART4");
    state->u.k6.fld.scgc1.uart5 = cm_object_get_child_by_name(state->u.k6.reg.scgc1, "UART5");

    // SCGC2 bitfields.
    state->u.k6.fld.scgc2.enet = cm_object_get_child_by_name(state->u.k6.reg.scgc2, "ENET");
    state->u.k6.fld.scgc2.dac0 = cm_object_get_child_by_name(state->u.k6.reg.scgc2, "DAC0");
    state->u.k6.fld.scgc2.dac1 = cm_object_get_child_by_name(state->u.k6.reg.scgc2, "DAC1");

    // SCGC3 bitfields.
    state->u.k6.fld.scgc3.rnga = cm_object_get_child_by_name(state->u.k6.reg.scgc3, "RNGA");
    state->u.k6.fld.scgc3.spi2 = cm_object_get_child_by_name(state->u.k6.reg.scgc3, "SPI2");
    state->u.k6.fld.scgc3.sdhc = cm_object_get_child_by_name(state->u.k6.reg.scgc3, "SDHC");
    state->u.k6.fld.scgc3.ftm2 = cm_object_get_child_by_name(state->u.k6.reg.scgc3, "FTM2");
    state->u.k6.fld.scgc3.ftm3 = cm_object_get_child_by_name(state->u.k6.reg.scgc3, "FTM3");
    state->u.k6.fld.scgc3.adc1 = cm_object_get_child_by_name(state->u.k6.reg.scgc3, "ADC1");

    // SCGC4 bitfields.
    state->u.k6.fld.scgc4.ewm = cm_object_get_child_by_name(state->u.k6.reg.scgc4, "EWM");
    state->u.k6.fld.scgc4.cmt = cm_object_get_child_by_name(state->u.k6.reg.scgc4, "CMT");
    state->u.k6.fld.scgc4.i2c0 = cm_object_get_child_by_name(state->u.k6.reg.scgc4, "I2C0");
    state->u.k6.fld.scgc4.i2c1 = cm_object_get_child_by_name(state->u.k6.reg.scgc4, "I2C1");
    state->u.k6.fld.scgc4.uart0 = cm_object_get_child_by_name(state->u.k6.reg.scgc4, "UART0");
    state->u.k6.fld.scgc4.uart1 = cm_object_get_child_by_name(state->u.k6.reg.scgc4, "UART1");
    state->u.k6.fld.scgc4.uart2 = cm_object_get_child_by_name(state->u.k6.reg.scgc4, "UART2");
    state->u.k6.fld.scgc4.uart3 = cm_object_get_child_by_name(state->u.k6.reg.scgc4, "UART3");
    state->u.k6.fld.scgc4.usbotg = cm_object_get_child_by_name(state->u.k6.reg.scgc4, "USBOTG");
    state->u.k6.fld.scgc4.cmp = cm_object_get_child_by_name(state->u.k6.reg.scgc4, "CMP");
    state->u.k6.fld.scgc4.vref = cm_object_get_child_by_name(state->u.k6.reg.scgc4, "VREF");

    // SCGC5 bitfields.
    state->u.k6.fld.scgc5.lptmr = cm_object_get_child_by_name(state->u.k6.reg.scgc5, "LPTMR");
    state->u.k6.fld.scgc5.porta = cm_object_get_child_by_name(state->u.k6.reg.scgc5, "PORTA");
    state->u.k6.fld.scgc5.portb = cm_object_get_child_by_name(state->u.k6.reg.scgc5, "PORTB");
    state->u.k6.fld.scgc5.portc = cm_object_get_child_by_name(state->u.k6.reg.scgc5, "PORTC");
    state->u.k6.fld.scgc5.portd = cm_object_get_child_by_name(state->u.k6.reg.scgc5, "PORTD");
    state->u.k6.fld.scgc5.porte = cm_object_get_child_by_name(state->u.k6.reg.scgc5, "PORTE");

    // SCGC6 bitfields.
    state->u.k6.fld.scgc6.ftf = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "FTF");
    state->u.k6.fld.scgc6.dmamux = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "DMAMUX");
    state->u.k6.fld.scgc6.flexcan0 = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "FLEXCAN0");
    state->u.k6.fld.scgc6.rnga = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "RNGA");
    state->u.k6.fld.scgc6.spi0 = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "SPI0");
    state->u.k6.fld.scgc6.spi1 = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "SPI1");
    state->u.k6.fld.scgc6.i2s = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "I2S");
    state->u.k6.fld.scgc6.crc = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "CRC");
    state->u.k6.fld.scgc6.usbdcd = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "USBDCD");
    state->u.k6.fld.scgc6.pdb = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "PDB");
    state->u.k6.fld.scgc6.pit = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "PIT");
    state->u.k6.fld.scgc6.ftm0 = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "FTM0");
    state->u.k6.fld.scgc6.ftm1 = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "FTM1");
    state->u.k6.fld.scgc6.ftm2 = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "FTM2");
    state->u.k6.fld.scgc6.adc0 = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "ADC0");
    state->u.k6.fld.scgc6.rtc = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "RTC");
    state->u.k6.fld.scgc6.dac0 = cm_object_get_child_by_name(state->u.k6.reg.scgc6, "DAC0");

    // SCGC7 bitfields.
    state->u.k6.fld.scgc7.flexbus = cm_object_get_child_by_name(state->u.k6.reg.scgc7, "FLEXBUS");
    state->u.k6.fld.scgc7.dma = cm_object_get_child_by_name(state->u.k6.reg.scgc7, "DMA");
    state->u.k6.fld.scgc7.mpu = cm_object_get_child_by_name(state->u.k6.reg.scgc7, "MPU");

    // CLKDIV1 bitfields.
    state->u.k6.fld.clkdiv1.outdiv4 = cm_object_get_child_by_name(state->u.k6.reg.clkdiv1, "OUTDIV4");
    state->u.k6.fld.clkdiv1.outdiv3 = cm_object_get_child_by_name(state->u.k6.reg.clkdiv1, "OUTDIV3");
    state->u.k6.fld.clkdiv1.outdiv2 = cm_object_get_child_by_name(state->u.k6.reg.clkdiv1, "OUTDIV2");
    state->u.k6.fld.clkdiv1.outdiv1 = cm_object_get_child_by_name(state->u.k6.reg.clkdiv1, "OUTDIV1");

    // CLKDIV2 bitfields.
    state->u.k6.fld.clkdiv2.usbfrac = cm_object_get_child_by_name(state->u.k6.reg.clkdiv2, "USBFRAC");
    state->u.k6.fld.clkdiv2.usbdiv = cm_object_get_child_by_name(state->u.k6.reg.clkdiv2, "USBDIV");

    // FCFG1 bitfields.
    state->u.k6.fld.fcfg1.flashdis = cm_object_get_child_by_name(state->u.k6.reg.fcfg1, "FLASHDIS");
    state->u.k6.fld.fcfg1.flashdoze = cm_object_get_child_by_name(state->u.k6.reg.fcfg1, "FLASHDOZE");
    state->u.k6.fld.fcfg1.depart = cm_object_get_child_by_name(state->u.k6.reg.fcfg1, "DEPART");
    state->u.k6.fld.fcfg1.eesize = cm_object_get_child_by_name(state->u.k6.reg.fcfg1, "EESIZE");
    state->u.k6.fld.fcfg1.pfsize = cm_object_get_child_by_name(state->u.k6.reg.fcfg1, "PFSIZE");
    state->u.k6.fld.fcfg1.nvmsize = cm_object_get_child_by_name(state->u.k6.reg.fcfg1, "NVMSIZE");

    // FCFG2 bitfields.
    state->u.k6.fld.fcfg2.maxaddr1 = cm_object_get_child_by_name(state->u.k6.reg.fcfg2, "MAXADDR1");
    state->u.k6.fld.fcfg2.pflsh = cm_object_get_child_by_name(state->u.k6.reg.fcfg2, "PFLSH");
    state->u.k6.fld.fcfg2.maxaddr0 = cm_object_get_child_by_name(state->u.k6.reg.fcfg2, "MAXADDR0");

    // UIDH bitfields.
    state->u.k6.fld.uidh.uid = cm_object_get_child_by_name(state->u.k6.reg.uidh, "UID");

    // UIDMH bitfields.
    state->u.k6.fld.uidmh.uid = cm_object_get_child_by_name(state->u.k6.reg.uidmh, "UID");

    // UIDML bitfields.
    state->u.k6.fld.uidml.uid = cm_object_get_child_by_name(state->u.k6.reg.uidml, "UID");

    // UIDL bitfields.
    state->u.k6.fld.uidl.uid = cm_object_get_child_by_name(state->u.k6.reg.uidl, "UID");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_sim_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisSIMState *state = KINETIS_SIM_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_sim_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisSIMState *state = KINETIS_SIM_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_sim_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisSIMState *state = KINETIS_SIM_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_sim_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisSIMState *state = KINETIS_SIM_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_sim_is_enabled(Object *obj)
{
    KinetisSIMState *state = KINETIS_SIM_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_sim_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisSIMState *state = KINETIS_SIM_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_sim_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_SIM)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisSIMState *state = KINETIS_SIM_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "SIM";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_sim_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_sim_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_sim_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_sim_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_sim_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/SIMEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_sim_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_SIM);
}

static void kinetis_sim_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_sim_reset_callback;
    dc->realize = kinetis_sim_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_sim_is_enabled;
}

static const TypeInfo kinetis_sim_type_info = {
    .name = TYPE_KINETIS_SIM,
    .parent = TYPE_KINETIS_SIM_PARENT,
    .instance_init = kinetis_sim_instance_init_callback,
    .instance_size = sizeof(KinetisSIMState),
    .class_init = kinetis_sim_class_init_callback,
    .class_size = sizeof(KinetisSIMClass) };

static void kinetis_sim_register_types(void)
{
    type_register_static(&kinetis_sim_type_info);
}

type_init(kinetis_sim_register_types);

// ----------------------------------------------------------------------------
