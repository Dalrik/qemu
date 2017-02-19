/*
 * Kinetis - LLWU (Low leakage wakeup unit) emulation.
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

#include <hw/cortexm/kinetis/llwu.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_llwu_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisLLWUState *state = KINETIS_LLWU_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.pe1 = cm_object_get_child_by_name(obj, "PE1");
    state->u.k6.reg.pe2 = cm_object_get_child_by_name(obj, "PE2");
    state->u.k6.reg.pe3 = cm_object_get_child_by_name(obj, "PE3");
    state->u.k6.reg.pe4 = cm_object_get_child_by_name(obj, "PE4");
    state->u.k6.reg.me = cm_object_get_child_by_name(obj, "ME");
    state->u.k6.reg.f1 = cm_object_get_child_by_name(obj, "F1");
    state->u.k6.reg.f2 = cm_object_get_child_by_name(obj, "F2");
    state->u.k6.reg.f3 = cm_object_get_child_by_name(obj, "F3");
    state->u.k6.reg.filt1 = cm_object_get_child_by_name(obj, "FILT1");
    state->u.k6.reg.filt2 = cm_object_get_child_by_name(obj, "FILT2");
    state->u.k6.reg.rst = cm_object_get_child_by_name(obj, "RST");

    // PE1 bitfields.
    state->u.k6.fld.pe1.wupe0 = cm_object_get_child_by_name(state->u.k6.reg.pe1, "WUPE0");
    state->u.k6.fld.pe1.wupe1 = cm_object_get_child_by_name(state->u.k6.reg.pe1, "WUPE1");
    state->u.k6.fld.pe1.wupe2 = cm_object_get_child_by_name(state->u.k6.reg.pe1, "WUPE2");
    state->u.k6.fld.pe1.wupe3 = cm_object_get_child_by_name(state->u.k6.reg.pe1, "WUPE3");

    // PE2 bitfields.
    state->u.k6.fld.pe2.wupe4 = cm_object_get_child_by_name(state->u.k6.reg.pe2, "WUPE4");
    state->u.k6.fld.pe2.wupe5 = cm_object_get_child_by_name(state->u.k6.reg.pe2, "WUPE5");
    state->u.k6.fld.pe2.wupe6 = cm_object_get_child_by_name(state->u.k6.reg.pe2, "WUPE6");
    state->u.k6.fld.pe2.wupe7 = cm_object_get_child_by_name(state->u.k6.reg.pe2, "WUPE7");

    // PE3 bitfields.
    state->u.k6.fld.pe3.wupe8 = cm_object_get_child_by_name(state->u.k6.reg.pe3, "WUPE8");
    state->u.k6.fld.pe3.wupe9 = cm_object_get_child_by_name(state->u.k6.reg.pe3, "WUPE9");
    state->u.k6.fld.pe3.wupe10 = cm_object_get_child_by_name(state->u.k6.reg.pe3, "WUPE10");
    state->u.k6.fld.pe3.wupe11 = cm_object_get_child_by_name(state->u.k6.reg.pe3, "WUPE11");

    // PE4 bitfields.
    state->u.k6.fld.pe4.wupe12 = cm_object_get_child_by_name(state->u.k6.reg.pe4, "WUPE12");
    state->u.k6.fld.pe4.wupe13 = cm_object_get_child_by_name(state->u.k6.reg.pe4, "WUPE13");
    state->u.k6.fld.pe4.wupe14 = cm_object_get_child_by_name(state->u.k6.reg.pe4, "WUPE14");
    state->u.k6.fld.pe4.wupe15 = cm_object_get_child_by_name(state->u.k6.reg.pe4, "WUPE15");

    // ME bitfields.
    state->u.k6.fld.me.wume0 = cm_object_get_child_by_name(state->u.k6.reg.me, "WUME0");
    state->u.k6.fld.me.wume1 = cm_object_get_child_by_name(state->u.k6.reg.me, "WUME1");
    state->u.k6.fld.me.wume2 = cm_object_get_child_by_name(state->u.k6.reg.me, "WUME2");
    state->u.k6.fld.me.wume3 = cm_object_get_child_by_name(state->u.k6.reg.me, "WUME3");
    state->u.k6.fld.me.wume4 = cm_object_get_child_by_name(state->u.k6.reg.me, "WUME4");
    state->u.k6.fld.me.wume5 = cm_object_get_child_by_name(state->u.k6.reg.me, "WUME5");
    state->u.k6.fld.me.wume6 = cm_object_get_child_by_name(state->u.k6.reg.me, "WUME6");
    state->u.k6.fld.me.wume7 = cm_object_get_child_by_name(state->u.k6.reg.me, "WUME7");

    // F1 bitfields.
    state->u.k6.fld.f1.wuf0 = cm_object_get_child_by_name(state->u.k6.reg.f1, "WUF0");
    state->u.k6.fld.f1.wuf1 = cm_object_get_child_by_name(state->u.k6.reg.f1, "WUF1");
    state->u.k6.fld.f1.wuf2 = cm_object_get_child_by_name(state->u.k6.reg.f1, "WUF2");
    state->u.k6.fld.f1.wuf3 = cm_object_get_child_by_name(state->u.k6.reg.f1, "WUF3");
    state->u.k6.fld.f1.wuf4 = cm_object_get_child_by_name(state->u.k6.reg.f1, "WUF4");
    state->u.k6.fld.f1.wuf5 = cm_object_get_child_by_name(state->u.k6.reg.f1, "WUF5");
    state->u.k6.fld.f1.wuf6 = cm_object_get_child_by_name(state->u.k6.reg.f1, "WUF6");
    state->u.k6.fld.f1.wuf7 = cm_object_get_child_by_name(state->u.k6.reg.f1, "WUF7");

    // F2 bitfields.
    state->u.k6.fld.f2.wuf8 = cm_object_get_child_by_name(state->u.k6.reg.f2, "WUF8");
    state->u.k6.fld.f2.wuf9 = cm_object_get_child_by_name(state->u.k6.reg.f2, "WUF9");
    state->u.k6.fld.f2.wuf10 = cm_object_get_child_by_name(state->u.k6.reg.f2, "WUF10");
    state->u.k6.fld.f2.wuf11 = cm_object_get_child_by_name(state->u.k6.reg.f2, "WUF11");
    state->u.k6.fld.f2.wuf12 = cm_object_get_child_by_name(state->u.k6.reg.f2, "WUF12");
    state->u.k6.fld.f2.wuf13 = cm_object_get_child_by_name(state->u.k6.reg.f2, "WUF13");
    state->u.k6.fld.f2.wuf14 = cm_object_get_child_by_name(state->u.k6.reg.f2, "WUF14");
    state->u.k6.fld.f2.wuf15 = cm_object_get_child_by_name(state->u.k6.reg.f2, "WUF15");

    // F3 bitfields.
    state->u.k6.fld.f3.mwuf0 = cm_object_get_child_by_name(state->u.k6.reg.f3, "MWUF0");
    state->u.k6.fld.f3.mwuf1 = cm_object_get_child_by_name(state->u.k6.reg.f3, "MWUF1");
    state->u.k6.fld.f3.mwuf2 = cm_object_get_child_by_name(state->u.k6.reg.f3, "MWUF2");
    state->u.k6.fld.f3.mwuf3 = cm_object_get_child_by_name(state->u.k6.reg.f3, "MWUF3");
    state->u.k6.fld.f3.mwuf4 = cm_object_get_child_by_name(state->u.k6.reg.f3, "MWUF4");
    state->u.k6.fld.f3.mwuf5 = cm_object_get_child_by_name(state->u.k6.reg.f3, "MWUF5");
    state->u.k6.fld.f3.mwuf6 = cm_object_get_child_by_name(state->u.k6.reg.f3, "MWUF6");
    state->u.k6.fld.f3.mwuf7 = cm_object_get_child_by_name(state->u.k6.reg.f3, "MWUF7");

    // FILT1 bitfields.
    state->u.k6.fld.filt1.filtsel = cm_object_get_child_by_name(state->u.k6.reg.filt1, "FILTSEL");
    state->u.k6.fld.filt1.filte = cm_object_get_child_by_name(state->u.k6.reg.filt1, "FILTE");
    state->u.k6.fld.filt1.filtf = cm_object_get_child_by_name(state->u.k6.reg.filt1, "FILTF");

    // FILT2 bitfields.
    state->u.k6.fld.filt2.filtsel = cm_object_get_child_by_name(state->u.k6.reg.filt2, "FILTSEL");
    state->u.k6.fld.filt2.filte = cm_object_get_child_by_name(state->u.k6.reg.filt2, "FILTE");
    state->u.k6.fld.filt2.filtf = cm_object_get_child_by_name(state->u.k6.reg.filt2, "FILTF");

    // RST bitfields.
    state->u.k6.fld.rst.rstfilt = cm_object_get_child_by_name(state->u.k6.reg.rst, "RSTFILT");
    state->u.k6.fld.rst.llrste = cm_object_get_child_by_name(state->u.k6.reg.rst, "LLRSTE");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_llwu_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisLLWUState *state = KINETIS_LLWU_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_llwu_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisLLWUState *state = KINETIS_LLWU_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_llwu_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisLLWUState *state = KINETIS_LLWU_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_llwu_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisLLWUState *state = KINETIS_LLWU_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_llwu_is_enabled(Object *obj)
{
    KinetisLLWUState *state = KINETIS_LLWU_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_llwu_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisLLWUState *state = KINETIS_LLWU_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_llwu_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_LLWU)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisLLWUState *state = KINETIS_LLWU_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "LLWU";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_llwu_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_llwu_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_llwu_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_llwu_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_llwu_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/LLWUEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_llwu_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_LLWU);
}

static void kinetis_llwu_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_llwu_reset_callback;
    dc->realize = kinetis_llwu_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_llwu_is_enabled;
}

static const TypeInfo kinetis_llwu_type_info = {
    .name = TYPE_KINETIS_LLWU,
    .parent = TYPE_KINETIS_LLWU_PARENT,
    .instance_init = kinetis_llwu_instance_init_callback,
    .instance_size = sizeof(KinetisLLWUState),
    .class_init = kinetis_llwu_class_init_callback,
    .class_size = sizeof(KinetisLLWUClass) };

static void kinetis_llwu_register_types(void)
{
    type_register_static(&kinetis_llwu_type_info);
}

type_init(kinetis_llwu_register_types);

// ----------------------------------------------------------------------------
