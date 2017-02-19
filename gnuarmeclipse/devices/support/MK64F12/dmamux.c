/*
 * Kinetis - DMAMUX (DMA channel multiplexor) emulation.
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

#include <hw/cortexm/kinetis/dmamux.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_dmamux_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisDMAMUXState *state = KINETIS_DMAMUX_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.chcfg[0] = cm_object_get_child_by_name(obj, "CHCFG0");
    state->u.k6.reg.chcfg[1] = cm_object_get_child_by_name(obj, "CHCFG1");
    state->u.k6.reg.chcfg[2] = cm_object_get_child_by_name(obj, "CHCFG2");
    state->u.k6.reg.chcfg[3] = cm_object_get_child_by_name(obj, "CHCFG3");
    state->u.k6.reg.chcfg[4] = cm_object_get_child_by_name(obj, "CHCFG4");
    state->u.k6.reg.chcfg[5] = cm_object_get_child_by_name(obj, "CHCFG5");
    state->u.k6.reg.chcfg[6] = cm_object_get_child_by_name(obj, "CHCFG6");
    state->u.k6.reg.chcfg[7] = cm_object_get_child_by_name(obj, "CHCFG7");
    state->u.k6.reg.chcfg[8] = cm_object_get_child_by_name(obj, "CHCFG8");
    state->u.k6.reg.chcfg[9] = cm_object_get_child_by_name(obj, "CHCFG9");
    state->u.k6.reg.chcfg[10] = cm_object_get_child_by_name(obj, "CHCFG10");
    state->u.k6.reg.chcfg[11] = cm_object_get_child_by_name(obj, "CHCFG11");
    state->u.k6.reg.chcfg[12] = cm_object_get_child_by_name(obj, "CHCFG12");
    state->u.k6.reg.chcfg[13] = cm_object_get_child_by_name(obj, "CHCFG13");
    state->u.k6.reg.chcfg[14] = cm_object_get_child_by_name(obj, "CHCFG14");
    state->u.k6.reg.chcfg[15] = cm_object_get_child_by_name(obj, "CHCFG15");
    // CHCFG0 bitfields.
    state->u.k6.fld.chcfg[0].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[0], "SOURCE");
    state->u.k6.fld.chcfg[0].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[0], "TRIG");
    state->u.k6.fld.chcfg[0].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[0], "ENBL");
    // CHCFG1 bitfields.
    state->u.k6.fld.chcfg[1].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[1], "SOURCE");
    state->u.k6.fld.chcfg[1].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[1], "TRIG");
    state->u.k6.fld.chcfg[1].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[1], "ENBL");
    // CHCFG2 bitfields.
    state->u.k6.fld.chcfg[2].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[2], "SOURCE");
    state->u.k6.fld.chcfg[2].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[2], "TRIG");
    state->u.k6.fld.chcfg[2].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[2], "ENBL");
    // CHCFG3 bitfields.
    state->u.k6.fld.chcfg[3].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[3], "SOURCE");
    state->u.k6.fld.chcfg[3].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[3], "TRIG");
    state->u.k6.fld.chcfg[3].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[3], "ENBL");
    // CHCFG4 bitfields.
    state->u.k6.fld.chcfg[4].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[4], "SOURCE");
    state->u.k6.fld.chcfg[4].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[4], "TRIG");
    state->u.k6.fld.chcfg[4].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[4], "ENBL");
    // CHCFG5 bitfields.
    state->u.k6.fld.chcfg[5].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[5], "SOURCE");
    state->u.k6.fld.chcfg[5].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[5], "TRIG");
    state->u.k6.fld.chcfg[5].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[5], "ENBL");
    // CHCFG6 bitfields.
    state->u.k6.fld.chcfg[6].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[6], "SOURCE");
    state->u.k6.fld.chcfg[6].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[6], "TRIG");
    state->u.k6.fld.chcfg[6].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[6], "ENBL");
    // CHCFG7 bitfields.
    state->u.k6.fld.chcfg[7].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[7], "SOURCE");
    state->u.k6.fld.chcfg[7].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[7], "TRIG");
    state->u.k6.fld.chcfg[7].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[7], "ENBL");
    // CHCFG8 bitfields.
    state->u.k6.fld.chcfg[8].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[8], "SOURCE");
    state->u.k6.fld.chcfg[8].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[8], "TRIG");
    state->u.k6.fld.chcfg[8].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[8], "ENBL");
    // CHCFG9 bitfields.
    state->u.k6.fld.chcfg[9].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[9], "SOURCE");
    state->u.k6.fld.chcfg[9].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[9], "TRIG");
    state->u.k6.fld.chcfg[9].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[9], "ENBL");
    // CHCFG10 bitfields.
    state->u.k6.fld.chcfg[10].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[10], "SOURCE");
    state->u.k6.fld.chcfg[10].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[10], "TRIG");
    state->u.k6.fld.chcfg[10].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[10], "ENBL");
    // CHCFG11 bitfields.
    state->u.k6.fld.chcfg[11].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[11], "SOURCE");
    state->u.k6.fld.chcfg[11].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[11], "TRIG");
    state->u.k6.fld.chcfg[11].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[11], "ENBL");
    // CHCFG12 bitfields.
    state->u.k6.fld.chcfg[12].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[12], "SOURCE");
    state->u.k6.fld.chcfg[12].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[12], "TRIG");
    state->u.k6.fld.chcfg[12].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[12], "ENBL");
    // CHCFG13 bitfields.
    state->u.k6.fld.chcfg[13].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[13], "SOURCE");
    state->u.k6.fld.chcfg[13].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[13], "TRIG");
    state->u.k6.fld.chcfg[13].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[13], "ENBL");
    // CHCFG14 bitfields.
    state->u.k6.fld.chcfg[14].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[14], "SOURCE");
    state->u.k6.fld.chcfg[14].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[14], "TRIG");
    state->u.k6.fld.chcfg[14].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[14], "ENBL");
    // CHCFG15 bitfields.
    state->u.k6.fld.chcfg[15].source = cm_object_get_child_by_name(state->u.k6.reg.chcfg[15], "SOURCE");
    state->u.k6.fld.chcfg[15].trig = cm_object_get_child_by_name(state->u.k6.reg.chcfg[15], "TRIG");
    state->u.k6.fld.chcfg[15].enbl = cm_object_get_child_by_name(state->u.k6.reg.chcfg[15], "ENBL");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_dmamux_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisDMAMUXState *state = KINETIS_DMAMUX_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_dmamux_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisDMAMUXState *state = KINETIS_DMAMUX_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_dmamux_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisDMAMUXState *state = KINETIS_DMAMUX_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_dmamux_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisDMAMUXState *state = KINETIS_DMAMUX_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_dmamux_is_enabled(Object *obj)
{
    KinetisDMAMUXState *state = KINETIS_DMAMUX_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_dmamux_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisDMAMUXState *state = KINETIS_DMAMUX_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_dmamux_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_DMAMUX)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisDMAMUXState *state = KINETIS_DMAMUX_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "DMAMUX";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_dmamux_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_dmamux_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_dmamux_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_dmamux_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_dmamux_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/DMAMUXEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_dmamux_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_DMAMUX);
}

static void kinetis_dmamux_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_dmamux_reset_callback;
    dc->realize = kinetis_dmamux_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_dmamux_is_enabled;
}

static const TypeInfo kinetis_dmamux_type_info = {
    .name = TYPE_KINETIS_DMAMUX,
    .parent = TYPE_KINETIS_DMAMUX_PARENT,
    .instance_init = kinetis_dmamux_instance_init_callback,
    .instance_size = sizeof(KinetisDMAMUXState),
    .class_init = kinetis_dmamux_class_init_callback,
    .class_size = sizeof(KinetisDMAMUXClass) };

static void kinetis_dmamux_register_types(void)
{
    type_register_static(&kinetis_dmamux_type_info);
}

type_init(kinetis_dmamux_register_types);

// ----------------------------------------------------------------------------
