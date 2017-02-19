/*
 * Kinetis - CRC (Cyclic Redundancy Check) emulation.
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

#include <hw/cortexm/kinetis/crc.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_crc_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisCRCState *state = KINETIS_CRC_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.data = cm_object_get_child_by_name(obj, "DATA");
    state->u.k6.reg.datal = cm_object_get_child_by_name(obj, "DATAL");
    state->u.k6.reg.datall = cm_object_get_child_by_name(obj, "DATALL");
    state->u.k6.reg.datalu = cm_object_get_child_by_name(obj, "DATALU");
    state->u.k6.reg.datah = cm_object_get_child_by_name(obj, "DATAH");
    state->u.k6.reg.datahl = cm_object_get_child_by_name(obj, "DATAHL");
    state->u.k6.reg.datahu = cm_object_get_child_by_name(obj, "DATAHU");
    state->u.k6.reg.gpoly = cm_object_get_child_by_name(obj, "GPOLY");
    state->u.k6.reg.gpolyl = cm_object_get_child_by_name(obj, "GPOLYL");
    state->u.k6.reg.gpolyll = cm_object_get_child_by_name(obj, "GPOLYLL");
    state->u.k6.reg.gpolylu = cm_object_get_child_by_name(obj, "GPOLYLU");
    state->u.k6.reg.gpolyh = cm_object_get_child_by_name(obj, "GPOLYH");
    state->u.k6.reg.gpolyhl = cm_object_get_child_by_name(obj, "GPOLYHL");
    state->u.k6.reg.gpolyhu = cm_object_get_child_by_name(obj, "GPOLYHU");
    state->u.k6.reg.ctrl = cm_object_get_child_by_name(obj, "CTRL");
    state->u.k6.reg.ctrlhu = cm_object_get_child_by_name(obj, "CTRLHU");

    // DATA bitfields.
    state->u.k6.fld.data.ll = cm_object_get_child_by_name(state->u.k6.reg.data, "LL");
    state->u.k6.fld.data.lu = cm_object_get_child_by_name(state->u.k6.reg.data, "LU");
    state->u.k6.fld.data.hl = cm_object_get_child_by_name(state->u.k6.reg.data, "HL");
    state->u.k6.fld.data.hu = cm_object_get_child_by_name(state->u.k6.reg.data, "HU");

    // DATAL bitfields.
    state->u.k6.fld.datal.datal = cm_object_get_child_by_name(state->u.k6.reg.datal, "DATAL");

    // DATALL bitfields.
    state->u.k6.fld.datall.datall = cm_object_get_child_by_name(state->u.k6.reg.datall, "DATALL");

    // DATALU bitfields.
    state->u.k6.fld.datalu.datalu = cm_object_get_child_by_name(state->u.k6.reg.datalu, "DATALU");

    // DATAH bitfields.
    state->u.k6.fld.datah.datah = cm_object_get_child_by_name(state->u.k6.reg.datah, "DATAH");

    // DATAHL bitfields.
    state->u.k6.fld.datahl.datahl = cm_object_get_child_by_name(state->u.k6.reg.datahl, "DATAHL");

    // DATAHU bitfields.
    state->u.k6.fld.datahu.datahu = cm_object_get_child_by_name(state->u.k6.reg.datahu, "DATAHU");

    // GPOLY bitfields.
    state->u.k6.fld.gpoly.low = cm_object_get_child_by_name(state->u.k6.reg.gpoly, "LOW");
    state->u.k6.fld.gpoly.high = cm_object_get_child_by_name(state->u.k6.reg.gpoly, "HIGH");

    // GPOLYL bitfields.
    state->u.k6.fld.gpolyl.gpolyl = cm_object_get_child_by_name(state->u.k6.reg.gpolyl, "GPOLYL");

    // GPOLYLL bitfields.
    state->u.k6.fld.gpolyll.gpolyll = cm_object_get_child_by_name(state->u.k6.reg.gpolyll, "GPOLYLL");

    // GPOLYLU bitfields.
    state->u.k6.fld.gpolylu.gpolylu = cm_object_get_child_by_name(state->u.k6.reg.gpolylu, "GPOLYLU");

    // GPOLYH bitfields.
    state->u.k6.fld.gpolyh.gpolyh = cm_object_get_child_by_name(state->u.k6.reg.gpolyh, "GPOLYH");

    // GPOLYHL bitfields.
    state->u.k6.fld.gpolyhl.gpolyhl = cm_object_get_child_by_name(state->u.k6.reg.gpolyhl, "GPOLYHL");

    // GPOLYHU bitfields.
    state->u.k6.fld.gpolyhu.gpolyhu = cm_object_get_child_by_name(state->u.k6.reg.gpolyhu, "GPOLYHU");

    // CTRL bitfields.
    state->u.k6.fld.ctrl.tcrc = cm_object_get_child_by_name(state->u.k6.reg.ctrl, "TCRC");
    state->u.k6.fld.ctrl.was = cm_object_get_child_by_name(state->u.k6.reg.ctrl, "WAS");
    state->u.k6.fld.ctrl.fxor = cm_object_get_child_by_name(state->u.k6.reg.ctrl, "FXOR");
    state->u.k6.fld.ctrl.totr = cm_object_get_child_by_name(state->u.k6.reg.ctrl, "TOTR");
    state->u.k6.fld.ctrl.tot = cm_object_get_child_by_name(state->u.k6.reg.ctrl, "TOT");

    // CTRLHU bitfields.
    state->u.k6.fld.ctrlhu.tcrc = cm_object_get_child_by_name(state->u.k6.reg.ctrlhu, "TCRC");
    state->u.k6.fld.ctrlhu.was = cm_object_get_child_by_name(state->u.k6.reg.ctrlhu, "WAS");
    state->u.k6.fld.ctrlhu.fxor = cm_object_get_child_by_name(state->u.k6.reg.ctrlhu, "FXOR");
    state->u.k6.fld.ctrlhu.totr = cm_object_get_child_by_name(state->u.k6.reg.ctrlhu, "TOTR");
    state->u.k6.fld.ctrlhu.tot = cm_object_get_child_by_name(state->u.k6.reg.ctrlhu, "TOT");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_crc_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisCRCState *state = KINETIS_CRC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_crc_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisCRCState *state = KINETIS_CRC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_crc_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisCRCState *state = KINETIS_CRC_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_crc_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisCRCState *state = KINETIS_CRC_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_crc_is_enabled(Object *obj)
{
    KinetisCRCState *state = KINETIS_CRC_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_crc_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisCRCState *state = KINETIS_CRC_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_crc_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_CRC)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisCRCState *state = KINETIS_CRC_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "CRC";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_crc_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_crc_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_crc_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_crc_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_crc_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/CRCEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_crc_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_CRC);
}

static void kinetis_crc_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_crc_reset_callback;
    dc->realize = kinetis_crc_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_crc_is_enabled;
}

static const TypeInfo kinetis_crc_type_info = {
    .name = TYPE_KINETIS_CRC,
    .parent = TYPE_KINETIS_CRC_PARENT,
    .instance_init = kinetis_crc_instance_init_callback,
    .instance_size = sizeof(KinetisCRCState),
    .class_init = kinetis_crc_class_init_callback,
    .class_size = sizeof(KinetisCRCClass) };

static void kinetis_crc_register_types(void)
{
    type_register_static(&kinetis_crc_type_info);
}

type_init(kinetis_crc_register_types);

// ----------------------------------------------------------------------------
