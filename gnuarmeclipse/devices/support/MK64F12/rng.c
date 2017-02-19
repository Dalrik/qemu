/*
 * Kinetis - RNG (Random Number Generator Accelerator) emulation.
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

#include <hw/cortexm/kinetis/rng.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_rng_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisRNGState *state = KINETIS_RNG_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.cr = cm_object_get_child_by_name(obj, "CR");
    state->u.k6.reg.sr = cm_object_get_child_by_name(obj, "SR");
    state->u.k6.reg.er = cm_object_get_child_by_name(obj, "ER");
    state->u.k6.reg.or_ = cm_object_get_child_by_name(obj, "OR");

    // CR bitfields.
    state->u.k6.fld.cr.go = cm_object_get_child_by_name(state->u.k6.reg.cr, "GO");
    state->u.k6.fld.cr.ha = cm_object_get_child_by_name(state->u.k6.reg.cr, "HA");
    state->u.k6.fld.cr.intm = cm_object_get_child_by_name(state->u.k6.reg.cr, "INTM");
    state->u.k6.fld.cr.clri = cm_object_get_child_by_name(state->u.k6.reg.cr, "CLRI");
    state->u.k6.fld.cr.slp = cm_object_get_child_by_name(state->u.k6.reg.cr, "SLP");

    // SR bitfields.
    state->u.k6.fld.sr.secv = cm_object_get_child_by_name(state->u.k6.reg.sr, "SECV");
    state->u.k6.fld.sr.lrs = cm_object_get_child_by_name(state->u.k6.reg.sr, "LRS");
    state->u.k6.fld.sr.oru = cm_object_get_child_by_name(state->u.k6.reg.sr, "ORU");
    state->u.k6.fld.sr.erri = cm_object_get_child_by_name(state->u.k6.reg.sr, "ERRI");
    state->u.k6.fld.sr.slp = cm_object_get_child_by_name(state->u.k6.reg.sr, "SLP");
    state->u.k6.fld.sr.oreg_lvl = cm_object_get_child_by_name(state->u.k6.reg.sr, "OREG_LVL");
    state->u.k6.fld.sr.oreg_size = cm_object_get_child_by_name(state->u.k6.reg.sr, "OREG_SIZE");

    // ER bitfields.
    state->u.k6.fld.er.ext_ent = cm_object_get_child_by_name(state->u.k6.reg.er, "EXT_ENT");

    // OR bitfields.
    state->u.k6.fld.or_.randout = cm_object_get_child_by_name(state->u.k6.reg.or_, "RANDOUT");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_rng_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisRNGState *state = KINETIS_RNG_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_rng_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisRNGState *state = KINETIS_RNG_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_rng_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisRNGState *state = KINETIS_RNG_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_rng_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisRNGState *state = KINETIS_RNG_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_rng_is_enabled(Object *obj)
{
    KinetisRNGState *state = KINETIS_RNG_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_rng_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisRNGState *state = KINETIS_RNG_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_rng_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_RNG)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisRNGState *state = KINETIS_RNG_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "RNG";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_rng_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_rng_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_rng_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_rng_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_rng_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/RNGEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_rng_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_RNG);
}

static void kinetis_rng_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_rng_reset_callback;
    dc->realize = kinetis_rng_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_rng_is_enabled;
}

static const TypeInfo kinetis_rng_type_info = {
    .name = TYPE_KINETIS_RNG,
    .parent = TYPE_KINETIS_RNG_PARENT,
    .instance_init = kinetis_rng_instance_init_callback,
    .instance_size = sizeof(KinetisRNGState),
    .class_init = kinetis_rng_class_init_callback,
    .class_size = sizeof(KinetisRNGClass) };

static void kinetis_rng_register_types(void)
{
    type_register_static(&kinetis_rng_type_info);
}

type_init(kinetis_rng_register_types);

// ----------------------------------------------------------------------------
