/*
 * Kinetis - FTFE_FlashConfig (Flash configuration field) emulation.
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

#include <hw/cortexm/kinetis/ftfe_flashconfig.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_ftfe_flashconfig_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisFTFE_FlashConfigState *state = KINETIS_FTFE_FlashConfig_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.backkey3 = cm_object_get_child_by_name(obj, "BACKKEY3");
    state->u.k6.reg.backkey2 = cm_object_get_child_by_name(obj, "BACKKEY2");
    state->u.k6.reg.backkey1 = cm_object_get_child_by_name(obj, "BACKKEY1");
    state->u.k6.reg.backkey0 = cm_object_get_child_by_name(obj, "BACKKEY0");
    state->u.k6.reg.backkey7 = cm_object_get_child_by_name(obj, "BACKKEY7");
    state->u.k6.reg.backkey6 = cm_object_get_child_by_name(obj, "BACKKEY6");
    state->u.k6.reg.backkey5 = cm_object_get_child_by_name(obj, "BACKKEY5");
    state->u.k6.reg.backkey4 = cm_object_get_child_by_name(obj, "BACKKEY4");
    state->u.k6.reg.fprot3 = cm_object_get_child_by_name(obj, "FPROT3");
    state->u.k6.reg.fprot2 = cm_object_get_child_by_name(obj, "FPROT2");
    state->u.k6.reg.fprot1 = cm_object_get_child_by_name(obj, "FPROT1");
    state->u.k6.reg.fprot0 = cm_object_get_child_by_name(obj, "FPROT0");
    state->u.k6.reg.fsec = cm_object_get_child_by_name(obj, "FSEC");
    state->u.k6.reg.fopt = cm_object_get_child_by_name(obj, "FOPT");
    state->u.k6.reg.feprot = cm_object_get_child_by_name(obj, "FEPROT");
    state->u.k6.reg.fdprot = cm_object_get_child_by_name(obj, "FDPROT");

    // BACKKEY3 bitfields.
    state->u.k6.fld.backkey3.key = cm_object_get_child_by_name(state->u.k6.reg.backkey3, "KEY");

    // BACKKEY2 bitfields.
    state->u.k6.fld.backkey2.key = cm_object_get_child_by_name(state->u.k6.reg.backkey2, "KEY");

    // BACKKEY1 bitfields.
    state->u.k6.fld.backkey1.key = cm_object_get_child_by_name(state->u.k6.reg.backkey1, "KEY");

    // BACKKEY0 bitfields.
    state->u.k6.fld.backkey0.key = cm_object_get_child_by_name(state->u.k6.reg.backkey0, "KEY");

    // BACKKEY7 bitfields.
    state->u.k6.fld.backkey7.key = cm_object_get_child_by_name(state->u.k6.reg.backkey7, "KEY");

    // BACKKEY6 bitfields.
    state->u.k6.fld.backkey6.key = cm_object_get_child_by_name(state->u.k6.reg.backkey6, "KEY");

    // BACKKEY5 bitfields.
    state->u.k6.fld.backkey5.key = cm_object_get_child_by_name(state->u.k6.reg.backkey5, "KEY");

    // BACKKEY4 bitfields.
    state->u.k6.fld.backkey4.key = cm_object_get_child_by_name(state->u.k6.reg.backkey4, "KEY");

    // FPROT3 bitfields.
    state->u.k6.fld.fprot3.prot = cm_object_get_child_by_name(state->u.k6.reg.fprot3, "PROT");

    // FPROT2 bitfields.
    state->u.k6.fld.fprot2.prot = cm_object_get_child_by_name(state->u.k6.reg.fprot2, "PROT");

    // FPROT1 bitfields.
    state->u.k6.fld.fprot1.prot = cm_object_get_child_by_name(state->u.k6.reg.fprot1, "PROT");

    // FPROT0 bitfields.
    state->u.k6.fld.fprot0.prot = cm_object_get_child_by_name(state->u.k6.reg.fprot0, "PROT");

    // FSEC bitfields.
    state->u.k6.fld.fsec.sec = cm_object_get_child_by_name(state->u.k6.reg.fsec, "SEC");
    state->u.k6.fld.fsec.fslacc = cm_object_get_child_by_name(state->u.k6.reg.fsec, "FSLACC");
    state->u.k6.fld.fsec.meen = cm_object_get_child_by_name(state->u.k6.reg.fsec, "MEEN");
    state->u.k6.fld.fsec.keyen = cm_object_get_child_by_name(state->u.k6.reg.fsec, "KEYEN");

    // FOPT bitfields.
    state->u.k6.fld.fopt.lpboot = cm_object_get_child_by_name(state->u.k6.reg.fopt, "LPBOOT");
    state->u.k6.fld.fopt.ezport_dis = cm_object_get_child_by_name(state->u.k6.reg.fopt, "EZPORT_DIS");

    // FEPROT bitfields.
    state->u.k6.fld.feprot.eprot = cm_object_get_child_by_name(state->u.k6.reg.feprot, "EPROT");

    // FDPROT bitfields.
    state->u.k6.fld.fdprot.dprot = cm_object_get_child_by_name(state->u.k6.reg.fdprot, "DPROT");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_ftfe_flashconfig_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisFTFE_FlashConfigState *state = KINETIS_FTFE_FlashConfig_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_ftfe_flashconfig_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisFTFE_FlashConfigState *state = KINETIS_FTFE_FlashConfig_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_ftfe_flashconfig_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisFTFE_FlashConfigState *state = KINETIS_FTFE_FlashConfig_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_ftfe_flashconfig_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisFTFE_FlashConfigState *state = KINETIS_FTFE_FlashConfig_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_ftfe_flashconfig_is_enabled(Object *obj)
{
    KinetisFTFE_FlashConfigState *state = KINETIS_FTFE_FlashConfig_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_ftfe_flashconfig_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisFTFE_FlashConfigState *state = KINETIS_FTFE_FlashConfig_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_ftfe_flashconfig_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_FTFE_FlashConfig)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisFTFE_FlashConfigState *state = KINETIS_FTFE_FlashConfig_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "FTFE_FlashConfig";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_ftfe_flashconfig_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_ftfe_flashconfig_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_ftfe_flashconfig_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_ftfe_flashconfig_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_ftfe_flashconfig_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/FTFE_FlashConfigEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_ftfe_flashconfig_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_FTFE_FlashConfig);
}

static void kinetis_ftfe_flashconfig_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_ftfe_flashconfig_reset_callback;
    dc->realize = kinetis_ftfe_flashconfig_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_ftfe_flashconfig_is_enabled;
}

static const TypeInfo kinetis_ftfe_flashconfig_type_info = {
    .name = TYPE_KINETIS_FTFE_FlashConfig,
    .parent = TYPE_KINETIS_FTFE_FlashConfig_PARENT,
    .instance_init = kinetis_ftfe_flashconfig_instance_init_callback,
    .instance_size = sizeof(KinetisFTFE_FlashConfigState),
    .class_init = kinetis_ftfe_flashconfig_class_init_callback,
    .class_size = sizeof(KinetisFTFE_FlashConfigClass) };

static void kinetis_ftfe_flashconfig_register_types(void)
{
    type_register_static(&kinetis_ftfe_flashconfig_type_info);
}

type_init(kinetis_ftfe_flashconfig_register_types);

// ----------------------------------------------------------------------------
