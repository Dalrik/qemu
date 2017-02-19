/*
 * Kinetis - UART (Serial Communication Interface) emulation.
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

#include <hw/cortexm/kinetis/uart.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_uart_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisUARTState *state = KINETIS_UART_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.bdh = cm_object_get_child_by_name(obj, "BDH");
    state->u.k6.reg.bdl = cm_object_get_child_by_name(obj, "BDL");
    state->u.k6.reg.c1 = cm_object_get_child_by_name(obj, "C1");
    state->u.k6.reg.c2 = cm_object_get_child_by_name(obj, "C2");
    state->u.k6.reg.s1 = cm_object_get_child_by_name(obj, "S1");
    state->u.k6.reg.s2 = cm_object_get_child_by_name(obj, "S2");
    state->u.k6.reg.c3 = cm_object_get_child_by_name(obj, "C3");
    state->u.k6.reg.d = cm_object_get_child_by_name(obj, "D");
    state->u.k6.reg.ma1 = cm_object_get_child_by_name(obj, "MA1");
    state->u.k6.reg.ma2 = cm_object_get_child_by_name(obj, "MA2");
    state->u.k6.reg.c4 = cm_object_get_child_by_name(obj, "C4");
    state->u.k6.reg.c5 = cm_object_get_child_by_name(obj, "C5");
    state->u.k6.reg.ed = cm_object_get_child_by_name(obj, "ED");
    state->u.k6.reg.modem = cm_object_get_child_by_name(obj, "MODEM");
    state->u.k6.reg.ir = cm_object_get_child_by_name(obj, "IR");
    state->u.k6.reg.pfifo = cm_object_get_child_by_name(obj, "PFIFO");
    state->u.k6.reg.cfifo = cm_object_get_child_by_name(obj, "CFIFO");
    state->u.k6.reg.sfifo = cm_object_get_child_by_name(obj, "SFIFO");
    state->u.k6.reg.twfifo = cm_object_get_child_by_name(obj, "TWFIFO");
    state->u.k6.reg.tcfifo = cm_object_get_child_by_name(obj, "TCFIFO");
    state->u.k6.reg.rwfifo = cm_object_get_child_by_name(obj, "RWFIFO");
    state->u.k6.reg.rcfifo = cm_object_get_child_by_name(obj, "RCFIFO");

    // BDH bitfields.
    state->u.k6.fld.bdh.sbr = cm_object_get_child_by_name(state->u.k6.reg.bdh, "SBR");
    state->u.k6.fld.bdh.sbns = cm_object_get_child_by_name(state->u.k6.reg.bdh, "SBNS");
    state->u.k6.fld.bdh.rxedgie = cm_object_get_child_by_name(state->u.k6.reg.bdh, "RXEDGIE");
    state->u.k6.fld.bdh.lbkdie = cm_object_get_child_by_name(state->u.k6.reg.bdh, "LBKDIE");

    // BDL bitfields.
    state->u.k6.fld.bdl.sbr = cm_object_get_child_by_name(state->u.k6.reg.bdl, "SBR");

    // C1 bitfields.
    state->u.k6.fld.c1.pt = cm_object_get_child_by_name(state->u.k6.reg.c1, "PT");
    state->u.k6.fld.c1.pe = cm_object_get_child_by_name(state->u.k6.reg.c1, "PE");
    state->u.k6.fld.c1.ilt = cm_object_get_child_by_name(state->u.k6.reg.c1, "ILT");
    state->u.k6.fld.c1.wake = cm_object_get_child_by_name(state->u.k6.reg.c1, "WAKE");
    state->u.k6.fld.c1.m = cm_object_get_child_by_name(state->u.k6.reg.c1, "M");
    state->u.k6.fld.c1.rsrc = cm_object_get_child_by_name(state->u.k6.reg.c1, "RSRC");
    state->u.k6.fld.c1.uartswai = cm_object_get_child_by_name(state->u.k6.reg.c1, "UARTSWAI");
    state->u.k6.fld.c1.loops = cm_object_get_child_by_name(state->u.k6.reg.c1, "LOOPS");

    // C2 bitfields.
    state->u.k6.fld.c2.sbk = cm_object_get_child_by_name(state->u.k6.reg.c2, "SBK");
    state->u.k6.fld.c2.rwu = cm_object_get_child_by_name(state->u.k6.reg.c2, "RWU");
    state->u.k6.fld.c2.re = cm_object_get_child_by_name(state->u.k6.reg.c2, "RE");
    state->u.k6.fld.c2.te = cm_object_get_child_by_name(state->u.k6.reg.c2, "TE");
    state->u.k6.fld.c2.ilie = cm_object_get_child_by_name(state->u.k6.reg.c2, "ILIE");
    state->u.k6.fld.c2.rie = cm_object_get_child_by_name(state->u.k6.reg.c2, "RIE");
    state->u.k6.fld.c2.tcie = cm_object_get_child_by_name(state->u.k6.reg.c2, "TCIE");
    state->u.k6.fld.c2.tie = cm_object_get_child_by_name(state->u.k6.reg.c2, "TIE");

    // S1 bitfields.
    state->u.k6.fld.s1.pf = cm_object_get_child_by_name(state->u.k6.reg.s1, "PF");
    state->u.k6.fld.s1.fe = cm_object_get_child_by_name(state->u.k6.reg.s1, "FE");
    state->u.k6.fld.s1.nf = cm_object_get_child_by_name(state->u.k6.reg.s1, "NF");
    state->u.k6.fld.s1.or_ = cm_object_get_child_by_name(state->u.k6.reg.s1, "OR");
    state->u.k6.fld.s1.idle = cm_object_get_child_by_name(state->u.k6.reg.s1, "IDLE");
    state->u.k6.fld.s1.rdrf = cm_object_get_child_by_name(state->u.k6.reg.s1, "RDRF");
    state->u.k6.fld.s1.tc = cm_object_get_child_by_name(state->u.k6.reg.s1, "TC");
    state->u.k6.fld.s1.tdre = cm_object_get_child_by_name(state->u.k6.reg.s1, "TDRE");

    // S2 bitfields.
    state->u.k6.fld.s2.raf = cm_object_get_child_by_name(state->u.k6.reg.s2, "RAF");
    state->u.k6.fld.s2.lbkde = cm_object_get_child_by_name(state->u.k6.reg.s2, "LBKDE");
    state->u.k6.fld.s2.brk13 = cm_object_get_child_by_name(state->u.k6.reg.s2, "BRK13");
    state->u.k6.fld.s2.rwuid = cm_object_get_child_by_name(state->u.k6.reg.s2, "RWUID");
    state->u.k6.fld.s2.rxinv = cm_object_get_child_by_name(state->u.k6.reg.s2, "RXINV");
    state->u.k6.fld.s2.msbf = cm_object_get_child_by_name(state->u.k6.reg.s2, "MSBF");
    state->u.k6.fld.s2.rxedgif = cm_object_get_child_by_name(state->u.k6.reg.s2, "RXEDGIF");
    state->u.k6.fld.s2.lbkdif = cm_object_get_child_by_name(state->u.k6.reg.s2, "LBKDIF");

    // C3 bitfields.
    state->u.k6.fld.c3.peie = cm_object_get_child_by_name(state->u.k6.reg.c3, "PEIE");
    state->u.k6.fld.c3.feie = cm_object_get_child_by_name(state->u.k6.reg.c3, "FEIE");
    state->u.k6.fld.c3.neie = cm_object_get_child_by_name(state->u.k6.reg.c3, "NEIE");
    state->u.k6.fld.c3.orie = cm_object_get_child_by_name(state->u.k6.reg.c3, "ORIE");
    state->u.k6.fld.c3.txinv = cm_object_get_child_by_name(state->u.k6.reg.c3, "TXINV");
    state->u.k6.fld.c3.txdir = cm_object_get_child_by_name(state->u.k6.reg.c3, "TXDIR");
    state->u.k6.fld.c3.t8 = cm_object_get_child_by_name(state->u.k6.reg.c3, "T8");
    state->u.k6.fld.c3.r8 = cm_object_get_child_by_name(state->u.k6.reg.c3, "R8");

    // D bitfields.
    state->u.k6.fld.d.rt = cm_object_get_child_by_name(state->u.k6.reg.d, "RT");

    // MA1 bitfields.
    state->u.k6.fld.ma1.ma = cm_object_get_child_by_name(state->u.k6.reg.ma1, "MA");

    // MA2 bitfields.
    state->u.k6.fld.ma2.ma = cm_object_get_child_by_name(state->u.k6.reg.ma2, "MA");

    // C4 bitfields.
    state->u.k6.fld.c4.brfa = cm_object_get_child_by_name(state->u.k6.reg.c4, "BRFA");
    state->u.k6.fld.c4.m10 = cm_object_get_child_by_name(state->u.k6.reg.c4, "M10");
    state->u.k6.fld.c4.maen2 = cm_object_get_child_by_name(state->u.k6.reg.c4, "MAEN2");
    state->u.k6.fld.c4.maen1 = cm_object_get_child_by_name(state->u.k6.reg.c4, "MAEN1");

    // C5 bitfields.
    state->u.k6.fld.c5.lbkddmas = cm_object_get_child_by_name(state->u.k6.reg.c5, "LBKDDMAS");
    state->u.k6.fld.c5.ildmas = cm_object_get_child_by_name(state->u.k6.reg.c5, "ILDMAS");
    state->u.k6.fld.c5.rdmas = cm_object_get_child_by_name(state->u.k6.reg.c5, "RDMAS");
    state->u.k6.fld.c5.tcdmas = cm_object_get_child_by_name(state->u.k6.reg.c5, "TCDMAS");
    state->u.k6.fld.c5.tdmas = cm_object_get_child_by_name(state->u.k6.reg.c5, "TDMAS");

    // ED bitfields.
    state->u.k6.fld.ed.paritye = cm_object_get_child_by_name(state->u.k6.reg.ed, "PARITYE");
    state->u.k6.fld.ed.noisy = cm_object_get_child_by_name(state->u.k6.reg.ed, "NOISY");

    // MODEM bitfields.
    state->u.k6.fld.modem.txctse = cm_object_get_child_by_name(state->u.k6.reg.modem, "TXCTSE");
    state->u.k6.fld.modem.txrtse = cm_object_get_child_by_name(state->u.k6.reg.modem, "TXRTSE");
    state->u.k6.fld.modem.txrtspol = cm_object_get_child_by_name(state->u.k6.reg.modem, "TXRTSPOL");
    state->u.k6.fld.modem.rxrtse = cm_object_get_child_by_name(state->u.k6.reg.modem, "RXRTSE");

    // IR bitfields.
    state->u.k6.fld.ir.tnp = cm_object_get_child_by_name(state->u.k6.reg.ir, "TNP");
    state->u.k6.fld.ir.iren = cm_object_get_child_by_name(state->u.k6.reg.ir, "IREN");

    // PFIFO bitfields.
    state->u.k6.fld.pfifo.rxfifosize = cm_object_get_child_by_name(state->u.k6.reg.pfifo, "RXFIFOSIZE");
    state->u.k6.fld.pfifo.rxfe = cm_object_get_child_by_name(state->u.k6.reg.pfifo, "RXFE");
    state->u.k6.fld.pfifo.txfifosize = cm_object_get_child_by_name(state->u.k6.reg.pfifo, "TXFIFOSIZE");
    state->u.k6.fld.pfifo.txfe = cm_object_get_child_by_name(state->u.k6.reg.pfifo, "TXFE");

    // CFIFO bitfields.
    state->u.k6.fld.cfifo.rxufe = cm_object_get_child_by_name(state->u.k6.reg.cfifo, "RXUFE");
    state->u.k6.fld.cfifo.txofe = cm_object_get_child_by_name(state->u.k6.reg.cfifo, "TXOFE");
    state->u.k6.fld.cfifo.rxofe = cm_object_get_child_by_name(state->u.k6.reg.cfifo, "RXOFE");
    state->u.k6.fld.cfifo.rxflush = cm_object_get_child_by_name(state->u.k6.reg.cfifo, "RXFLUSH");
    state->u.k6.fld.cfifo.txflush = cm_object_get_child_by_name(state->u.k6.reg.cfifo, "TXFLUSH");

    // SFIFO bitfields.
    state->u.k6.fld.sfifo.rxuf = cm_object_get_child_by_name(state->u.k6.reg.sfifo, "RXUF");
    state->u.k6.fld.sfifo.txof = cm_object_get_child_by_name(state->u.k6.reg.sfifo, "TXOF");
    state->u.k6.fld.sfifo.rxof = cm_object_get_child_by_name(state->u.k6.reg.sfifo, "RXOF");
    state->u.k6.fld.sfifo.rxempt = cm_object_get_child_by_name(state->u.k6.reg.sfifo, "RXEMPT");
    state->u.k6.fld.sfifo.txempt = cm_object_get_child_by_name(state->u.k6.reg.sfifo, "TXEMPT");

    // TWFIFO bitfields.
    state->u.k6.fld.twfifo.txwater = cm_object_get_child_by_name(state->u.k6.reg.twfifo, "TXWATER");

    // TCFIFO bitfields.
    state->u.k6.fld.tcfifo.txcount = cm_object_get_child_by_name(state->u.k6.reg.tcfifo, "TXCOUNT");

    // RWFIFO bitfields.
    state->u.k6.fld.rwfifo.rxwater = cm_object_get_child_by_name(state->u.k6.reg.rwfifo, "RXWATER");

    // RCFIFO bitfields.
    state->u.k6.fld.rcfifo.rxcount = cm_object_get_child_by_name(state->u.k6.reg.rcfifo, "RXCOUNT");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_uart_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisUARTState *state = KINETIS_UART_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_uart_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisUARTState *state = KINETIS_UART_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_uart_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisUARTState *state = KINETIS_UART_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_uart_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisUARTState *state = KINETIS_UART_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_uart_is_enabled(Object *obj)
{
    KinetisUARTState *state = KINETIS_UART_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_uart_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisUARTState *state = KINETIS_UART_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_UART_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_uart_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_UART)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisUARTState *state = KINETIS_UART_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "UART";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_uart_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_uart_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_uart_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_uart_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_uart_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/UART%dEN",
                1 + state->port_index - KINETIS_PORT_UART1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_uart_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_UART);
}

static void kinetis_uart_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_uart_reset_callback;
    dc->realize = kinetis_uart_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_uart_is_enabled;
}

static const TypeInfo kinetis_uart_type_info = {
    .name = TYPE_KINETIS_UART,
    .parent = TYPE_KINETIS_UART_PARENT,
    .instance_init = kinetis_uart_instance_init_callback,
    .instance_size = sizeof(KinetisUARTState),
    .class_init = kinetis_uart_class_init_callback,
    .class_size = sizeof(KinetisUARTClass) };

static void kinetis_uart_register_types(void)
{
    type_register_static(&kinetis_uart_type_info);
}

type_init(kinetis_uart_register_types);

// ----------------------------------------------------------------------------
