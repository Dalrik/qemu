/*
 * Kinetis - LPTMR (Low Power Timer) emulation.
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

#include <hw/cortexm/kinetis/lptmr.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_lptmr_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisLPTMRState *state = KINETIS_LPTMR_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.csr = cm_object_get_child_by_name(obj, "CSR");
    state->u.k6.reg.psr = cm_object_get_child_by_name(obj, "PSR");
    state->u.k6.reg.cmr = cm_object_get_child_by_name(obj, "CMR");
    state->u.k6.reg.cnr = cm_object_get_child_by_name(obj, "CNR");

    // CSR bitfields.
    state->u.k6.fld.csr.ten = cm_object_get_child_by_name(state->u.k6.reg.csr, "TEN");
    state->u.k6.fld.csr.tms = cm_object_get_child_by_name(state->u.k6.reg.csr, "TMS");
    state->u.k6.fld.csr.tfc = cm_object_get_child_by_name(state->u.k6.reg.csr, "TFC");
    state->u.k6.fld.csr.tpp = cm_object_get_child_by_name(state->u.k6.reg.csr, "TPP");
    state->u.k6.fld.csr.tps = cm_object_get_child_by_name(state->u.k6.reg.csr, "TPS");
    state->u.k6.fld.csr.tie = cm_object_get_child_by_name(state->u.k6.reg.csr, "TIE");
    state->u.k6.fld.csr.tcf = cm_object_get_child_by_name(state->u.k6.reg.csr, "TCF");

    // PSR bitfields.
    state->u.k6.fld.psr.pcs = cm_object_get_child_by_name(state->u.k6.reg.psr, "PCS");
    state->u.k6.fld.psr.pbyp = cm_object_get_child_by_name(state->u.k6.reg.psr, "PBYP");
    state->u.k6.fld.psr.prescale = cm_object_get_child_by_name(state->u.k6.reg.psr, "PRESCALE");

    // CMR bitfields.
    state->u.k6.fld.cmr.compare = cm_object_get_child_by_name(state->u.k6.reg.cmr, "COMPARE");

    // CNR bitfields.
    state->u.k6.fld.cnr.counter = cm_object_get_child_by_name(state->u.k6.reg.cnr, "COUNTER");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_lptmr_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisLPTMRState *state = KINETIS_LPTMR_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_lptmr_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisLPTMRState *state = KINETIS_LPTMR_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_lptmr_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisLPTMRState *state = KINETIS_LPTMR_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_lptmr_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisLPTMRState *state = KINETIS_LPTMR_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_lptmr_is_enabled(Object *obj)
{
    KinetisLPTMRState *state = KINETIS_LPTMR_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_lptmr_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisLPTMRState *state = KINETIS_LPTMR_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_LPTMR_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_lptmr_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_LPTMR)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisLPTMRState *state = KINETIS_LPTMR_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "LPTMR";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_lptmr_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_lptmr_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_lptmr_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_lptmr_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_lptmr_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/LPTMR%dEN",
                1 + state->port_index - KINETIS_PORT_LPTMR1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_lptmr_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_LPTMR);
}

static void kinetis_lptmr_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_lptmr_reset_callback;
    dc->realize = kinetis_lptmr_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_lptmr_is_enabled;
}

static const TypeInfo kinetis_lptmr_type_info = {
    .name = TYPE_KINETIS_LPTMR,
    .parent = TYPE_KINETIS_LPTMR_PARENT,
    .instance_init = kinetis_lptmr_instance_init_callback,
    .instance_size = sizeof(KinetisLPTMRState),
    .class_init = kinetis_lptmr_class_init_callback,
    .class_size = sizeof(KinetisLPTMRClass) };

static void kinetis_lptmr_register_types(void)
{
    type_register_static(&kinetis_lptmr_type_info);
}

type_init(kinetis_lptmr_register_types);

// ----------------------------------------------------------------------------
