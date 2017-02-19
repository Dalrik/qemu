/*
 * Kinetis - CMP (High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX)) emulation.
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

#include <hw/cortexm/kinetis/cmp.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_cmp_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisCMPState *state = KINETIS_CMP_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.cr0 = cm_object_get_child_by_name(obj, "CR0");
    state->u.k6.reg.cr1 = cm_object_get_child_by_name(obj, "CR1");
    state->u.k6.reg.fpr = cm_object_get_child_by_name(obj, "FPR");
    state->u.k6.reg.scr = cm_object_get_child_by_name(obj, "SCR");
    state->u.k6.reg.daccr = cm_object_get_child_by_name(obj, "DACCR");
    state->u.k6.reg.muxcr = cm_object_get_child_by_name(obj, "MUXCR");

    // CR0 bitfields.
    state->u.k6.fld.cr0.hystctr = cm_object_get_child_by_name(state->u.k6.reg.cr0, "HYSTCTR");
    state->u.k6.fld.cr0.filter_cnt = cm_object_get_child_by_name(state->u.k6.reg.cr0, "FILTER_CNT");

    // CR1 bitfields.
    state->u.k6.fld.cr1.en = cm_object_get_child_by_name(state->u.k6.reg.cr1, "EN");
    state->u.k6.fld.cr1.ope = cm_object_get_child_by_name(state->u.k6.reg.cr1, "OPE");
    state->u.k6.fld.cr1.cos = cm_object_get_child_by_name(state->u.k6.reg.cr1, "COS");
    state->u.k6.fld.cr1.inv = cm_object_get_child_by_name(state->u.k6.reg.cr1, "INV");
    state->u.k6.fld.cr1.pmode = cm_object_get_child_by_name(state->u.k6.reg.cr1, "PMODE");
    state->u.k6.fld.cr1.we = cm_object_get_child_by_name(state->u.k6.reg.cr1, "WE");
    state->u.k6.fld.cr1.se = cm_object_get_child_by_name(state->u.k6.reg.cr1, "SE");

    // FPR bitfields.
    state->u.k6.fld.fpr.filt_per = cm_object_get_child_by_name(state->u.k6.reg.fpr, "FILT_PER");

    // SCR bitfields.
    state->u.k6.fld.scr.cout = cm_object_get_child_by_name(state->u.k6.reg.scr, "COUT");
    state->u.k6.fld.scr.cff = cm_object_get_child_by_name(state->u.k6.reg.scr, "CFF");
    state->u.k6.fld.scr.cfr = cm_object_get_child_by_name(state->u.k6.reg.scr, "CFR");
    state->u.k6.fld.scr.ief = cm_object_get_child_by_name(state->u.k6.reg.scr, "IEF");
    state->u.k6.fld.scr.ier = cm_object_get_child_by_name(state->u.k6.reg.scr, "IER");
    state->u.k6.fld.scr.dmaen = cm_object_get_child_by_name(state->u.k6.reg.scr, "DMAEN");

    // DACCR bitfields.
    state->u.k6.fld.daccr.vosel = cm_object_get_child_by_name(state->u.k6.reg.daccr, "VOSEL");
    state->u.k6.fld.daccr.vrsel = cm_object_get_child_by_name(state->u.k6.reg.daccr, "VRSEL");
    state->u.k6.fld.daccr.dacen = cm_object_get_child_by_name(state->u.k6.reg.daccr, "DACEN");

    // MUXCR bitfields.
    state->u.k6.fld.muxcr.msel = cm_object_get_child_by_name(state->u.k6.reg.muxcr, "MSEL");
    state->u.k6.fld.muxcr.psel = cm_object_get_child_by_name(state->u.k6.reg.muxcr, "PSEL");
    state->u.k6.fld.muxcr.pstm = cm_object_get_child_by_name(state->u.k6.reg.muxcr, "PSTM");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_cmp_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisCMPState *state = KINETIS_CMP_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_cmp_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisCMPState *state = KINETIS_CMP_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_cmp_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisCMPState *state = KINETIS_CMP_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_cmp_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisCMPState *state = KINETIS_CMP_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_cmp_is_enabled(Object *obj)
{
    KinetisCMPState *state = KINETIS_CMP_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_cmp_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisCMPState *state = KINETIS_CMP_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_CMP_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_cmp_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_CMP)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisCMPState *state = KINETIS_CMP_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "CMP";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_cmp_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_cmp_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_cmp_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_cmp_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_cmp_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/CMP%dEN",
                1 + state->port_index - KINETIS_PORT_CMP1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_cmp_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_CMP);
}

static void kinetis_cmp_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_cmp_reset_callback;
    dc->realize = kinetis_cmp_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_cmp_is_enabled;
}

static const TypeInfo kinetis_cmp_type_info = {
    .name = TYPE_KINETIS_CMP,
    .parent = TYPE_KINETIS_CMP_PARENT,
    .instance_init = kinetis_cmp_instance_init_callback,
    .instance_size = sizeof(KinetisCMPState),
    .class_init = kinetis_cmp_class_init_callback,
    .class_size = sizeof(KinetisCMPClass) };

static void kinetis_cmp_register_types(void)
{
    type_register_static(&kinetis_cmp_type_info);
}

type_init(kinetis_cmp_register_types);

// ----------------------------------------------------------------------------
