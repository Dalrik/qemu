/*
 * Kinetis - DAC (12-Bit Digital-to-Analog Converter) emulation.
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

#include <hw/cortexm/kinetis/dac.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_dac_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisDACState *state = KINETIS_DAC_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.datl[0] = cm_object_get_child_by_name(obj, "DAT0L");
    state->u.k6.reg.datl[1] = cm_object_get_child_by_name(obj, "DAT1L");
    state->u.k6.reg.datl[2] = cm_object_get_child_by_name(obj, "DAT2L");
    state->u.k6.reg.datl[3] = cm_object_get_child_by_name(obj, "DAT3L");
    state->u.k6.reg.datl[4] = cm_object_get_child_by_name(obj, "DAT4L");
    state->u.k6.reg.datl[5] = cm_object_get_child_by_name(obj, "DAT5L");
    state->u.k6.reg.datl[6] = cm_object_get_child_by_name(obj, "DAT6L");
    state->u.k6.reg.datl[7] = cm_object_get_child_by_name(obj, "DAT7L");
    state->u.k6.reg.datl[8] = cm_object_get_child_by_name(obj, "DAT8L");
    state->u.k6.reg.datl[9] = cm_object_get_child_by_name(obj, "DAT9L");
    state->u.k6.reg.datl[10] = cm_object_get_child_by_name(obj, "DAT10L");
    state->u.k6.reg.datl[11] = cm_object_get_child_by_name(obj, "DAT11L");
    state->u.k6.reg.datl[12] = cm_object_get_child_by_name(obj, "DAT12L");
    state->u.k6.reg.datl[13] = cm_object_get_child_by_name(obj, "DAT13L");
    state->u.k6.reg.datl[14] = cm_object_get_child_by_name(obj, "DAT14L");
    state->u.k6.reg.datl[15] = cm_object_get_child_by_name(obj, "DAT15L");
    state->u.k6.reg.dath[0] = cm_object_get_child_by_name(obj, "DAT0H");
    state->u.k6.reg.dath[1] = cm_object_get_child_by_name(obj, "DAT1H");
    state->u.k6.reg.dath[2] = cm_object_get_child_by_name(obj, "DAT2H");
    state->u.k6.reg.dath[3] = cm_object_get_child_by_name(obj, "DAT3H");
    state->u.k6.reg.dath[4] = cm_object_get_child_by_name(obj, "DAT4H");
    state->u.k6.reg.dath[5] = cm_object_get_child_by_name(obj, "DAT5H");
    state->u.k6.reg.dath[6] = cm_object_get_child_by_name(obj, "DAT6H");
    state->u.k6.reg.dath[7] = cm_object_get_child_by_name(obj, "DAT7H");
    state->u.k6.reg.dath[8] = cm_object_get_child_by_name(obj, "DAT8H");
    state->u.k6.reg.dath[9] = cm_object_get_child_by_name(obj, "DAT9H");
    state->u.k6.reg.dath[10] = cm_object_get_child_by_name(obj, "DAT10H");
    state->u.k6.reg.dath[11] = cm_object_get_child_by_name(obj, "DAT11H");
    state->u.k6.reg.dath[12] = cm_object_get_child_by_name(obj, "DAT12H");
    state->u.k6.reg.dath[13] = cm_object_get_child_by_name(obj, "DAT13H");
    state->u.k6.reg.dath[14] = cm_object_get_child_by_name(obj, "DAT14H");
    state->u.k6.reg.dath[15] = cm_object_get_child_by_name(obj, "DAT15H");
    state->u.k6.reg.sr = cm_object_get_child_by_name(obj, "SR");
    state->u.k6.reg.c0 = cm_object_get_child_by_name(obj, "C0");
    state->u.k6.reg.c1 = cm_object_get_child_by_name(obj, "C1");
    state->u.k6.reg.c2 = cm_object_get_child_by_name(obj, "C2");
    // DAT0L bitfields.
    state->u.k6.fld.datl[0].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[0], "DATA0");
    // DAT1L bitfields.
    state->u.k6.fld.datl[1].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[1], "DATA0");
    // DAT2L bitfields.
    state->u.k6.fld.datl[2].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[2], "DATA0");
    // DAT3L bitfields.
    state->u.k6.fld.datl[3].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[3], "DATA0");
    // DAT4L bitfields.
    state->u.k6.fld.datl[4].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[4], "DATA0");
    // DAT5L bitfields.
    state->u.k6.fld.datl[5].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[5], "DATA0");
    // DAT6L bitfields.
    state->u.k6.fld.datl[6].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[6], "DATA0");
    // DAT7L bitfields.
    state->u.k6.fld.datl[7].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[7], "DATA0");
    // DAT8L bitfields.
    state->u.k6.fld.datl[8].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[8], "DATA0");
    // DAT9L bitfields.
    state->u.k6.fld.datl[9].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[9], "DATA0");
    // DAT10L bitfields.
    state->u.k6.fld.datl[10].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[10], "DATA0");
    // DAT11L bitfields.
    state->u.k6.fld.datl[11].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[11], "DATA0");
    // DAT12L bitfields.
    state->u.k6.fld.datl[12].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[12], "DATA0");
    // DAT13L bitfields.
    state->u.k6.fld.datl[13].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[13], "DATA0");
    // DAT14L bitfields.
    state->u.k6.fld.datl[14].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[14], "DATA0");
    // DAT15L bitfields.
    state->u.k6.fld.datl[15].data0 = cm_object_get_child_by_name(state->u.k6.reg.datl[15], "DATA0");
    // DAT0H bitfields.
    state->u.k6.fld.dath[0].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[0], "DATA1");
    // DAT1H bitfields.
    state->u.k6.fld.dath[1].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[1], "DATA1");
    // DAT2H bitfields.
    state->u.k6.fld.dath[2].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[2], "DATA1");
    // DAT3H bitfields.
    state->u.k6.fld.dath[3].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[3], "DATA1");
    // DAT4H bitfields.
    state->u.k6.fld.dath[4].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[4], "DATA1");
    // DAT5H bitfields.
    state->u.k6.fld.dath[5].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[5], "DATA1");
    // DAT6H bitfields.
    state->u.k6.fld.dath[6].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[6], "DATA1");
    // DAT7H bitfields.
    state->u.k6.fld.dath[7].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[7], "DATA1");
    // DAT8H bitfields.
    state->u.k6.fld.dath[8].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[8], "DATA1");
    // DAT9H bitfields.
    state->u.k6.fld.dath[9].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[9], "DATA1");
    // DAT10H bitfields.
    state->u.k6.fld.dath[10].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[10], "DATA1");
    // DAT11H bitfields.
    state->u.k6.fld.dath[11].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[11], "DATA1");
    // DAT12H bitfields.
    state->u.k6.fld.dath[12].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[12], "DATA1");
    // DAT13H bitfields.
    state->u.k6.fld.dath[13].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[13], "DATA1");
    // DAT14H bitfields.
    state->u.k6.fld.dath[14].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[14], "DATA1");
    // DAT15H bitfields.
    state->u.k6.fld.dath[15].data1 = cm_object_get_child_by_name(state->u.k6.reg.dath[15], "DATA1");

    // SR bitfields.
    state->u.k6.fld.sr.dacbfrpbf = cm_object_get_child_by_name(state->u.k6.reg.sr, "DACBFRPBF");
    state->u.k6.fld.sr.dacbfrptf = cm_object_get_child_by_name(state->u.k6.reg.sr, "DACBFRPTF");
    state->u.k6.fld.sr.dacbfwmf = cm_object_get_child_by_name(state->u.k6.reg.sr, "DACBFWMF");

    // C0 bitfields.
    state->u.k6.fld.c0.dacbbien = cm_object_get_child_by_name(state->u.k6.reg.c0, "DACBBIEN");
    state->u.k6.fld.c0.dacbtien = cm_object_get_child_by_name(state->u.k6.reg.c0, "DACBTIEN");
    state->u.k6.fld.c0.dacbwien = cm_object_get_child_by_name(state->u.k6.reg.c0, "DACBWIEN");
    state->u.k6.fld.c0.lpen = cm_object_get_child_by_name(state->u.k6.reg.c0, "LPEN");
    state->u.k6.fld.c0.dacswtrg = cm_object_get_child_by_name(state->u.k6.reg.c0, "DACSWTRG");
    state->u.k6.fld.c0.dactrgsel = cm_object_get_child_by_name(state->u.k6.reg.c0, "DACTRGSEL");
    state->u.k6.fld.c0.dacrfs = cm_object_get_child_by_name(state->u.k6.reg.c0, "DACRFS");
    state->u.k6.fld.c0.dacen = cm_object_get_child_by_name(state->u.k6.reg.c0, "DACEN");

    // C1 bitfields.
    state->u.k6.fld.c1.dacbfen = cm_object_get_child_by_name(state->u.k6.reg.c1, "DACBFEN");
    state->u.k6.fld.c1.dacbfmd = cm_object_get_child_by_name(state->u.k6.reg.c1, "DACBFMD");
    state->u.k6.fld.c1.dacbfwm = cm_object_get_child_by_name(state->u.k6.reg.c1, "DACBFWM");
    state->u.k6.fld.c1.dmaen = cm_object_get_child_by_name(state->u.k6.reg.c1, "DMAEN");

    // C2 bitfields.
    state->u.k6.fld.c2.dacbfup = cm_object_get_child_by_name(state->u.k6.reg.c2, "DACBFUP");
    state->u.k6.fld.c2.dacbfrp = cm_object_get_child_by_name(state->u.k6.reg.c2, "DACBFRP");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_dac_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisDACState *state = KINETIS_DAC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_dac_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisDACState *state = KINETIS_DAC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_dac_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisDACState *state = KINETIS_DAC_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_dac_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisDACState *state = KINETIS_DAC_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_dac_is_enabled(Object *obj)
{
    KinetisDACState *state = KINETIS_DAC_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_dac_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisDACState *state = KINETIS_DAC_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_DAC_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_dac_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_DAC)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisDACState *state = KINETIS_DAC_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "DAC";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_dac_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_dac_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_dac_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_dac_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_dac_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/DAC%dEN",
                1 + state->port_index - KINETIS_PORT_DAC1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_dac_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_DAC);
}

static void kinetis_dac_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_dac_reset_callback;
    dc->realize = kinetis_dac_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_dac_is_enabled;
}

static const TypeInfo kinetis_dac_type_info = {
    .name = TYPE_KINETIS_DAC,
    .parent = TYPE_KINETIS_DAC_PARENT,
    .instance_init = kinetis_dac_instance_init_callback,
    .instance_size = sizeof(KinetisDACState),
    .class_init = kinetis_dac_class_init_callback,
    .class_size = sizeof(KinetisDACClass) };

static void kinetis_dac_register_types(void)
{
    type_register_static(&kinetis_dac_type_info);
}

type_init(kinetis_dac_register_types);

// ----------------------------------------------------------------------------
