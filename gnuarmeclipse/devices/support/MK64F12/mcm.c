/*
 * Kinetis - MCM (Core Platform Miscellaneous Control Module) emulation.
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

#include <hw/cortexm/kinetis/mcm.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_mcm_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisMCMState *state = KINETIS_MCM_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.plasc = cm_object_get_child_by_name(obj, "PLASC");
    state->u.k6.reg.plamc = cm_object_get_child_by_name(obj, "PLAMC");
    state->u.k6.reg.cr = cm_object_get_child_by_name(obj, "CR");
    state->u.k6.reg.iscr = cm_object_get_child_by_name(obj, "ISCR");
    state->u.k6.reg.etbcc = cm_object_get_child_by_name(obj, "ETBCC");
    state->u.k6.reg.etbrl = cm_object_get_child_by_name(obj, "ETBRL");
    state->u.k6.reg.etbcnt = cm_object_get_child_by_name(obj, "ETBCNT");
    state->u.k6.reg.pid = cm_object_get_child_by_name(obj, "PID");

    // PLASC bitfields.
    state->u.k6.fld.plasc.asc = cm_object_get_child_by_name(state->u.k6.reg.plasc, "ASC");

    // PLAMC bitfields.
    state->u.k6.fld.plamc.amc = cm_object_get_child_by_name(state->u.k6.reg.plamc, "AMC");

    // CR bitfields.
    state->u.k6.fld.cr.sramuap = cm_object_get_child_by_name(state->u.k6.reg.cr, "SRAMUAP");
    state->u.k6.fld.cr.sramuwp = cm_object_get_child_by_name(state->u.k6.reg.cr, "SRAMUWP");
    state->u.k6.fld.cr.sramlap = cm_object_get_child_by_name(state->u.k6.reg.cr, "SRAMLAP");
    state->u.k6.fld.cr.sramlwp = cm_object_get_child_by_name(state->u.k6.reg.cr, "SRAMLWP");

    // ISCR bitfields.
    state->u.k6.fld.iscr.irq = cm_object_get_child_by_name(state->u.k6.reg.iscr, "IRQ");
    state->u.k6.fld.iscr.nmi = cm_object_get_child_by_name(state->u.k6.reg.iscr, "NMI");
    state->u.k6.fld.iscr.dhreq = cm_object_get_child_by_name(state->u.k6.reg.iscr, "DHREQ");
    state->u.k6.fld.iscr.fioc = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FIOC");
    state->u.k6.fld.iscr.fdzc = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FDZC");
    state->u.k6.fld.iscr.fofc = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FOFC");
    state->u.k6.fld.iscr.fufc = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FUFC");
    state->u.k6.fld.iscr.fixc = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FIXC");
    state->u.k6.fld.iscr.fidc = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FIDC");
    state->u.k6.fld.iscr.fioce = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FIOCE");
    state->u.k6.fld.iscr.fdzce = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FDZCE");
    state->u.k6.fld.iscr.fofce = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FOFCE");
    state->u.k6.fld.iscr.fufce = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FUFCE");
    state->u.k6.fld.iscr.fixce = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FIXCE");
    state->u.k6.fld.iscr.fidce = cm_object_get_child_by_name(state->u.k6.reg.iscr, "FIDCE");

    // ETBCC bitfields.
    state->u.k6.fld.etbcc.cnten = cm_object_get_child_by_name(state->u.k6.reg.etbcc, "CNTEN");
    state->u.k6.fld.etbcc.rspt = cm_object_get_child_by_name(state->u.k6.reg.etbcc, "RSPT");
    state->u.k6.fld.etbcc.rlrq = cm_object_get_child_by_name(state->u.k6.reg.etbcc, "RLRQ");
    state->u.k6.fld.etbcc.etdis = cm_object_get_child_by_name(state->u.k6.reg.etbcc, "ETDIS");
    state->u.k6.fld.etbcc.itdis = cm_object_get_child_by_name(state->u.k6.reg.etbcc, "ITDIS");

    // ETBRL bitfields.
    state->u.k6.fld.etbrl.reload = cm_object_get_child_by_name(state->u.k6.reg.etbrl, "RELOAD");

    // ETBCNT bitfields.
    state->u.k6.fld.etbcnt.counter = cm_object_get_child_by_name(state->u.k6.reg.etbcnt, "COUNTER");

    // PID bitfields.
    state->u.k6.fld.pid.pid = cm_object_get_child_by_name(state->u.k6.reg.pid, "PID");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_mcm_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisMCMState *state = KINETIS_MCM_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_mcm_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisMCMState *state = KINETIS_MCM_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_mcm_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisMCMState *state = KINETIS_MCM_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_mcm_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisMCMState *state = KINETIS_MCM_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_mcm_is_enabled(Object *obj)
{
    KinetisMCMState *state = KINETIS_MCM_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_mcm_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisMCMState *state = KINETIS_MCM_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_mcm_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_MCM)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisMCMState *state = KINETIS_MCM_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "MCM";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_mcm_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_mcm_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_mcm_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_mcm_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_mcm_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/MCMEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_mcm_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_MCM);
}

static void kinetis_mcm_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_mcm_reset_callback;
    dc->realize = kinetis_mcm_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_mcm_is_enabled;
}

static const TypeInfo kinetis_mcm_type_info = {
    .name = TYPE_KINETIS_MCM,
    .parent = TYPE_KINETIS_MCM_PARENT,
    .instance_init = kinetis_mcm_instance_init_callback,
    .instance_size = sizeof(KinetisMCMState),
    .class_init = kinetis_mcm_class_init_callback,
    .class_size = sizeof(KinetisMCMClass) };

static void kinetis_mcm_register_types(void)
{
    type_register_static(&kinetis_mcm_type_info);
}

type_init(kinetis_mcm_register_types);

// ----------------------------------------------------------------------------
