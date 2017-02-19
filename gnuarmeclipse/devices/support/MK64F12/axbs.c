/*
 * Kinetis - AXBS (Crossbar switch) emulation.
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

#include <hw/cortexm/kinetis/axbs.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_axbs_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisAXBSState *state = KINETIS_AXBS_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.prs[0] = cm_object_get_child_by_name(obj, "PRS0");
    state->u.k6.reg.prs[1] = cm_object_get_child_by_name(obj, "PRS1");
    state->u.k6.reg.prs[2] = cm_object_get_child_by_name(obj, "PRS2");
    state->u.k6.reg.prs[3] = cm_object_get_child_by_name(obj, "PRS3");
    state->u.k6.reg.prs[4] = cm_object_get_child_by_name(obj, "PRS4");
    state->u.k6.reg.crs[0] = cm_object_get_child_by_name(obj, "CRS0");
    state->u.k6.reg.crs[1] = cm_object_get_child_by_name(obj, "CRS1");
    state->u.k6.reg.crs[2] = cm_object_get_child_by_name(obj, "CRS2");
    state->u.k6.reg.crs[3] = cm_object_get_child_by_name(obj, "CRS3");
    state->u.k6.reg.crs[4] = cm_object_get_child_by_name(obj, "CRS4");
    state->u.k6.reg.mgpcr[0] = cm_object_get_child_by_name(obj, "MGPCR0");
    state->u.k6.reg.mgpcr[1] = cm_object_get_child_by_name(obj, "MGPCR1");
    state->u.k6.reg.mgpcr[2] = cm_object_get_child_by_name(obj, "MGPCR2");
    state->u.k6.reg.mgpcr[3] = cm_object_get_child_by_name(obj, "MGPCR3");
    state->u.k6.reg.mgpcr[4] = cm_object_get_child_by_name(obj, "MGPCR4");
    state->u.k6.reg.mgpcr[5] = cm_object_get_child_by_name(obj, "MGPCR5");
    // PRS0 bitfields.
    state->u.k6.fld.prs[0].m0 = cm_object_get_child_by_name(state->u.k6.reg.prs[0], "M0");
    state->u.k6.fld.prs[0].m1 = cm_object_get_child_by_name(state->u.k6.reg.prs[0], "M1");
    state->u.k6.fld.prs[0].m2 = cm_object_get_child_by_name(state->u.k6.reg.prs[0], "M2");
    state->u.k6.fld.prs[0].m3 = cm_object_get_child_by_name(state->u.k6.reg.prs[0], "M3");
    state->u.k6.fld.prs[0].m4 = cm_object_get_child_by_name(state->u.k6.reg.prs[0], "M4");
    state->u.k6.fld.prs[0].m5 = cm_object_get_child_by_name(state->u.k6.reg.prs[0], "M5");
    // PRS1 bitfields.
    state->u.k6.fld.prs[1].m0 = cm_object_get_child_by_name(state->u.k6.reg.prs[1], "M0");
    state->u.k6.fld.prs[1].m1 = cm_object_get_child_by_name(state->u.k6.reg.prs[1], "M1");
    state->u.k6.fld.prs[1].m2 = cm_object_get_child_by_name(state->u.k6.reg.prs[1], "M2");
    state->u.k6.fld.prs[1].m3 = cm_object_get_child_by_name(state->u.k6.reg.prs[1], "M3");
    state->u.k6.fld.prs[1].m4 = cm_object_get_child_by_name(state->u.k6.reg.prs[1], "M4");
    state->u.k6.fld.prs[1].m5 = cm_object_get_child_by_name(state->u.k6.reg.prs[1], "M5");
    // PRS2 bitfields.
    state->u.k6.fld.prs[2].m0 = cm_object_get_child_by_name(state->u.k6.reg.prs[2], "M0");
    state->u.k6.fld.prs[2].m1 = cm_object_get_child_by_name(state->u.k6.reg.prs[2], "M1");
    state->u.k6.fld.prs[2].m2 = cm_object_get_child_by_name(state->u.k6.reg.prs[2], "M2");
    state->u.k6.fld.prs[2].m3 = cm_object_get_child_by_name(state->u.k6.reg.prs[2], "M3");
    state->u.k6.fld.prs[2].m4 = cm_object_get_child_by_name(state->u.k6.reg.prs[2], "M4");
    state->u.k6.fld.prs[2].m5 = cm_object_get_child_by_name(state->u.k6.reg.prs[2], "M5");
    // PRS3 bitfields.
    state->u.k6.fld.prs[3].m0 = cm_object_get_child_by_name(state->u.k6.reg.prs[3], "M0");
    state->u.k6.fld.prs[3].m1 = cm_object_get_child_by_name(state->u.k6.reg.prs[3], "M1");
    state->u.k6.fld.prs[3].m2 = cm_object_get_child_by_name(state->u.k6.reg.prs[3], "M2");
    state->u.k6.fld.prs[3].m3 = cm_object_get_child_by_name(state->u.k6.reg.prs[3], "M3");
    state->u.k6.fld.prs[3].m4 = cm_object_get_child_by_name(state->u.k6.reg.prs[3], "M4");
    state->u.k6.fld.prs[3].m5 = cm_object_get_child_by_name(state->u.k6.reg.prs[3], "M5");
    // PRS4 bitfields.
    state->u.k6.fld.prs[4].m0 = cm_object_get_child_by_name(state->u.k6.reg.prs[4], "M0");
    state->u.k6.fld.prs[4].m1 = cm_object_get_child_by_name(state->u.k6.reg.prs[4], "M1");
    state->u.k6.fld.prs[4].m2 = cm_object_get_child_by_name(state->u.k6.reg.prs[4], "M2");
    state->u.k6.fld.prs[4].m3 = cm_object_get_child_by_name(state->u.k6.reg.prs[4], "M3");
    state->u.k6.fld.prs[4].m4 = cm_object_get_child_by_name(state->u.k6.reg.prs[4], "M4");
    state->u.k6.fld.prs[4].m5 = cm_object_get_child_by_name(state->u.k6.reg.prs[4], "M5");
    // CRS0 bitfields.
    state->u.k6.fld.crs[0].park = cm_object_get_child_by_name(state->u.k6.reg.crs[0], "PARK");
    state->u.k6.fld.crs[0].pctl = cm_object_get_child_by_name(state->u.k6.reg.crs[0], "PCTL");
    state->u.k6.fld.crs[0].arb = cm_object_get_child_by_name(state->u.k6.reg.crs[0], "ARB");
    state->u.k6.fld.crs[0].hlp = cm_object_get_child_by_name(state->u.k6.reg.crs[0], "HLP");
    state->u.k6.fld.crs[0].ro = cm_object_get_child_by_name(state->u.k6.reg.crs[0], "RO");
    // CRS1 bitfields.
    state->u.k6.fld.crs[1].park = cm_object_get_child_by_name(state->u.k6.reg.crs[1], "PARK");
    state->u.k6.fld.crs[1].pctl = cm_object_get_child_by_name(state->u.k6.reg.crs[1], "PCTL");
    state->u.k6.fld.crs[1].arb = cm_object_get_child_by_name(state->u.k6.reg.crs[1], "ARB");
    state->u.k6.fld.crs[1].hlp = cm_object_get_child_by_name(state->u.k6.reg.crs[1], "HLP");
    state->u.k6.fld.crs[1].ro = cm_object_get_child_by_name(state->u.k6.reg.crs[1], "RO");
    // CRS2 bitfields.
    state->u.k6.fld.crs[2].park = cm_object_get_child_by_name(state->u.k6.reg.crs[2], "PARK");
    state->u.k6.fld.crs[2].pctl = cm_object_get_child_by_name(state->u.k6.reg.crs[2], "PCTL");
    state->u.k6.fld.crs[2].arb = cm_object_get_child_by_name(state->u.k6.reg.crs[2], "ARB");
    state->u.k6.fld.crs[2].hlp = cm_object_get_child_by_name(state->u.k6.reg.crs[2], "HLP");
    state->u.k6.fld.crs[2].ro = cm_object_get_child_by_name(state->u.k6.reg.crs[2], "RO");
    // CRS3 bitfields.
    state->u.k6.fld.crs[3].park = cm_object_get_child_by_name(state->u.k6.reg.crs[3], "PARK");
    state->u.k6.fld.crs[3].pctl = cm_object_get_child_by_name(state->u.k6.reg.crs[3], "PCTL");
    state->u.k6.fld.crs[3].arb = cm_object_get_child_by_name(state->u.k6.reg.crs[3], "ARB");
    state->u.k6.fld.crs[3].hlp = cm_object_get_child_by_name(state->u.k6.reg.crs[3], "HLP");
    state->u.k6.fld.crs[3].ro = cm_object_get_child_by_name(state->u.k6.reg.crs[3], "RO");
    // CRS4 bitfields.
    state->u.k6.fld.crs[4].park = cm_object_get_child_by_name(state->u.k6.reg.crs[4], "PARK");
    state->u.k6.fld.crs[4].pctl = cm_object_get_child_by_name(state->u.k6.reg.crs[4], "PCTL");
    state->u.k6.fld.crs[4].arb = cm_object_get_child_by_name(state->u.k6.reg.crs[4], "ARB");
    state->u.k6.fld.crs[4].hlp = cm_object_get_child_by_name(state->u.k6.reg.crs[4], "HLP");
    state->u.k6.fld.crs[4].ro = cm_object_get_child_by_name(state->u.k6.reg.crs[4], "RO");
    // MGPCR0 bitfields.
    state->u.k6.fld.mgpcr[0].aulb = cm_object_get_child_by_name(state->u.k6.reg.mgpcr[0], "AULB");
    // MGPCR1 bitfields.
    state->u.k6.fld.mgpcr[1].aulb = cm_object_get_child_by_name(state->u.k6.reg.mgpcr[1], "AULB");
    // MGPCR2 bitfields.
    state->u.k6.fld.mgpcr[2].aulb = cm_object_get_child_by_name(state->u.k6.reg.mgpcr[2], "AULB");
    // MGPCR3 bitfields.
    state->u.k6.fld.mgpcr[3].aulb = cm_object_get_child_by_name(state->u.k6.reg.mgpcr[3], "AULB");
    // MGPCR4 bitfields.
    state->u.k6.fld.mgpcr[4].aulb = cm_object_get_child_by_name(state->u.k6.reg.mgpcr[4], "AULB");
    // MGPCR5 bitfields.
    state->u.k6.fld.mgpcr[5].aulb = cm_object_get_child_by_name(state->u.k6.reg.mgpcr[5], "AULB");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_axbs_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisAXBSState *state = KINETIS_AXBS_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_axbs_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisAXBSState *state = KINETIS_AXBS_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_axbs_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisAXBSState *state = KINETIS_AXBS_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_axbs_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisAXBSState *state = KINETIS_AXBS_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_axbs_is_enabled(Object *obj)
{
    KinetisAXBSState *state = KINETIS_AXBS_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_axbs_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisAXBSState *state = KINETIS_AXBS_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_axbs_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_AXBS)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisAXBSState *state = KINETIS_AXBS_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "AXBS";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_axbs_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_axbs_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_axbs_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_axbs_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_axbs_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/AXBSEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_axbs_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_AXBS);
}

static void kinetis_axbs_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_axbs_reset_callback;
    dc->realize = kinetis_axbs_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_axbs_is_enabled;
}

static const TypeInfo kinetis_axbs_type_info = {
    .name = TYPE_KINETIS_AXBS,
    .parent = TYPE_KINETIS_AXBS_PARENT,
    .instance_init = kinetis_axbs_instance_init_callback,
    .instance_size = sizeof(KinetisAXBSState),
    .class_init = kinetis_axbs_class_init_callback,
    .class_size = sizeof(KinetisAXBSClass) };

static void kinetis_axbs_register_types(void)
{
    type_register_static(&kinetis_axbs_type_info);
}

type_init(kinetis_axbs_register_types);

// ----------------------------------------------------------------------------
