/*
 * Kinetis - PIT (Periodic Interrupt Timer) emulation.
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

#include <hw/cortexm/kinetis/pit.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_pit_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisPITState *state = KINETIS_PIT_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.mcr = cm_object_get_child_by_name(obj, "MCR");
    state->u.k6.reg.ldval[0] = cm_object_get_child_by_name(obj, "LDVAL0");
    state->u.k6.reg.ldval[1] = cm_object_get_child_by_name(obj, "LDVAL1");
    state->u.k6.reg.ldval[2] = cm_object_get_child_by_name(obj, "LDVAL2");
    state->u.k6.reg.ldval[3] = cm_object_get_child_by_name(obj, "LDVAL3");
    state->u.k6.reg.cval[0] = cm_object_get_child_by_name(obj, "CVAL0");
    state->u.k6.reg.cval[1] = cm_object_get_child_by_name(obj, "CVAL1");
    state->u.k6.reg.cval[2] = cm_object_get_child_by_name(obj, "CVAL2");
    state->u.k6.reg.cval[3] = cm_object_get_child_by_name(obj, "CVAL3");
    state->u.k6.reg.tctrl[0] = cm_object_get_child_by_name(obj, "TCTRL0");
    state->u.k6.reg.tctrl[1] = cm_object_get_child_by_name(obj, "TCTRL1");
    state->u.k6.reg.tctrl[2] = cm_object_get_child_by_name(obj, "TCTRL2");
    state->u.k6.reg.tctrl[3] = cm_object_get_child_by_name(obj, "TCTRL3");
    state->u.k6.reg.tflg[0] = cm_object_get_child_by_name(obj, "TFLG0");
    state->u.k6.reg.tflg[1] = cm_object_get_child_by_name(obj, "TFLG1");
    state->u.k6.reg.tflg[2] = cm_object_get_child_by_name(obj, "TFLG2");
    state->u.k6.reg.tflg[3] = cm_object_get_child_by_name(obj, "TFLG3");

    // MCR bitfields.
    state->u.k6.fld.mcr.frz = cm_object_get_child_by_name(state->u.k6.reg.mcr, "FRZ");
    state->u.k6.fld.mcr.mdis = cm_object_get_child_by_name(state->u.k6.reg.mcr, "MDIS");
    // LDVAL0 bitfields.
    state->u.k6.fld.ldval[0].tsv = cm_object_get_child_by_name(state->u.k6.reg.ldval[0], "TSV");
    // LDVAL1 bitfields.
    state->u.k6.fld.ldval[1].tsv = cm_object_get_child_by_name(state->u.k6.reg.ldval[1], "TSV");
    // LDVAL2 bitfields.
    state->u.k6.fld.ldval[2].tsv = cm_object_get_child_by_name(state->u.k6.reg.ldval[2], "TSV");
    // LDVAL3 bitfields.
    state->u.k6.fld.ldval[3].tsv = cm_object_get_child_by_name(state->u.k6.reg.ldval[3], "TSV");
    // CVAL0 bitfields.
    state->u.k6.fld.cval[0].tvl = cm_object_get_child_by_name(state->u.k6.reg.cval[0], "TVL");
    // CVAL1 bitfields.
    state->u.k6.fld.cval[1].tvl = cm_object_get_child_by_name(state->u.k6.reg.cval[1], "TVL");
    // CVAL2 bitfields.
    state->u.k6.fld.cval[2].tvl = cm_object_get_child_by_name(state->u.k6.reg.cval[2], "TVL");
    // CVAL3 bitfields.
    state->u.k6.fld.cval[3].tvl = cm_object_get_child_by_name(state->u.k6.reg.cval[3], "TVL");
    // TCTRL0 bitfields.
    state->u.k6.fld.tctrl[0].ten = cm_object_get_child_by_name(state->u.k6.reg.tctrl[0], "TEN");
    state->u.k6.fld.tctrl[0].tie = cm_object_get_child_by_name(state->u.k6.reg.tctrl[0], "TIE");
    state->u.k6.fld.tctrl[0].chn = cm_object_get_child_by_name(state->u.k6.reg.tctrl[0], "CHN");
    // TCTRL1 bitfields.
    state->u.k6.fld.tctrl[1].ten = cm_object_get_child_by_name(state->u.k6.reg.tctrl[1], "TEN");
    state->u.k6.fld.tctrl[1].tie = cm_object_get_child_by_name(state->u.k6.reg.tctrl[1], "TIE");
    state->u.k6.fld.tctrl[1].chn = cm_object_get_child_by_name(state->u.k6.reg.tctrl[1], "CHN");
    // TCTRL2 bitfields.
    state->u.k6.fld.tctrl[2].ten = cm_object_get_child_by_name(state->u.k6.reg.tctrl[2], "TEN");
    state->u.k6.fld.tctrl[2].tie = cm_object_get_child_by_name(state->u.k6.reg.tctrl[2], "TIE");
    state->u.k6.fld.tctrl[2].chn = cm_object_get_child_by_name(state->u.k6.reg.tctrl[2], "CHN");
    // TCTRL3 bitfields.
    state->u.k6.fld.tctrl[3].ten = cm_object_get_child_by_name(state->u.k6.reg.tctrl[3], "TEN");
    state->u.k6.fld.tctrl[3].tie = cm_object_get_child_by_name(state->u.k6.reg.tctrl[3], "TIE");
    state->u.k6.fld.tctrl[3].chn = cm_object_get_child_by_name(state->u.k6.reg.tctrl[3], "CHN");
    // TFLG0 bitfields.
    state->u.k6.fld.tflg[0].tif = cm_object_get_child_by_name(state->u.k6.reg.tflg[0], "TIF");
    // TFLG1 bitfields.
    state->u.k6.fld.tflg[1].tif = cm_object_get_child_by_name(state->u.k6.reg.tflg[1], "TIF");
    // TFLG2 bitfields.
    state->u.k6.fld.tflg[2].tif = cm_object_get_child_by_name(state->u.k6.reg.tflg[2], "TIF");
    // TFLG3 bitfields.
    state->u.k6.fld.tflg[3].tif = cm_object_get_child_by_name(state->u.k6.reg.tflg[3], "TIF");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_pit_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisPITState *state = KINETIS_PIT_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_pit_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisPITState *state = KINETIS_PIT_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_pit_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisPITState *state = KINETIS_PIT_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_pit_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisPITState *state = KINETIS_PIT_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_pit_is_enabled(Object *obj)
{
    KinetisPITState *state = KINETIS_PIT_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_pit_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisPITState *state = KINETIS_PIT_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_pit_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_PIT)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisPITState *state = KINETIS_PIT_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "PIT";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_pit_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_pit_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_pit_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_pit_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_pit_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/PITEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_pit_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_PIT);
}

static void kinetis_pit_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_pit_reset_callback;
    dc->realize = kinetis_pit_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_pit_is_enabled;
}

static const TypeInfo kinetis_pit_type_info = {
    .name = TYPE_KINETIS_PIT,
    .parent = TYPE_KINETIS_PIT_PARENT,
    .instance_init = kinetis_pit_instance_init_callback,
    .instance_size = sizeof(KinetisPITState),
    .class_init = kinetis_pit_class_init_callback,
    .class_size = sizeof(KinetisPITClass) };

static void kinetis_pit_register_types(void)
{
    type_register_static(&kinetis_pit_type_info);
}

type_init(kinetis_pit_register_types);

// ----------------------------------------------------------------------------
