/*
 * Kinetis - GPIO (General Purpose Input/Output) emulation.
 *
 * Copyright (c) 2017 Ian Thompson.
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

#include <hw/cortexm/kinetis/gpio.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_gpio_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisGPIOState *state = KINETIS_GPIO_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.pdor = cm_object_get_child_by_name(obj, "PDOR");
    state->u.k6.reg.psor = cm_object_get_child_by_name(obj, "PSOR");
    state->u.k6.reg.pcor = cm_object_get_child_by_name(obj, "PCOR");
    state->u.k6.reg.ptor = cm_object_get_child_by_name(obj, "PTOR");
    state->u.k6.reg.pdir = cm_object_get_child_by_name(obj, "PDIR");
    state->u.k6.reg.pddr = cm_object_get_child_by_name(obj, "PDDR");

    // PDOR bitfields.
    state->u.k6.fld.pdor.pdo = cm_object_get_child_by_name(state->u.k6.reg.pdor, "PDO");

    // PSOR bitfields.
    state->u.k6.fld.psor.ptso = cm_object_get_child_by_name(state->u.k6.reg.psor, "PTSO");

    // PCOR bitfields.
    state->u.k6.fld.pcor.ptco = cm_object_get_child_by_name(state->u.k6.reg.pcor, "PTCO");

    // PTOR bitfields.
    state->u.k6.fld.ptor.ptto = cm_object_get_child_by_name(state->u.k6.reg.ptor, "PTTO");

    // PDIR bitfields.
    state->u.k6.fld.pdir.pdi = cm_object_get_child_by_name(state->u.k6.reg.pdir, "PDI");

    // PDDR bitfields.
    state->u.k6.fld.pddr.pdd = cm_object_get_child_by_name(state->u.k6.reg.pddr, "PDD");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Public ---------------------------------------------------------------

// Create GPIO%c and return it.

Object* kinetis_gpio_create(Object *parent, kinetis_gpio_index_t index)
{
    if ((int) index >= KINETIS_PORT_GPIO_UNDEFINED) {
        hw_error("Cannot assign GPIO%c: QEMU supports only %d ports\n",
                'A' + index, KINETIS_PORT_GPIO_UNDEFINED);
    }

    char child_name[10];
    snprintf(child_name, sizeof(child_name) - 1, "GPIO%c",
            'A' + index - KINETIS_PORT_GPIOA);
    // Passing a local string is ok.
    Object *gpio = cm_object_new(parent, child_name, TYPE_KINETIS_GPIO);

    object_property_set_int(gpio, index, "port-index", NULL);

    cm_object_realize(gpio);

    return gpio;
}

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_gpio_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisGPIOState *state = KINETIS_GPIO_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_gpio_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisGPIOState *state = KINETIS_GPIO_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_gpio_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisGPIOState *state = KINETIS_GPIO_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_gpio_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisGPIOState *state = KINETIS_GPIO_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_gpio_is_enabled(Object *obj)
{
    KinetisGPIOState *state = KINETIS_GPIO_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_gpio_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisGPIOState *state = KINETIS_GPIO_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_GPIO_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_gpio_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_GPIO)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisGPIOState *state = KINETIS_GPIO_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    char periph_name[10];
    snprintf(periph_name, sizeof(periph_name) - 1, "PT%c",
            'A' + state->port_index);

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_SIM_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_gpio_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_gpio_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_gpio_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_gpio_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_gpio_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_SIM "/SCGC5/PORT%c",
                'A' + state->port_index - KINETIS_PORT_GPIOA);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_gpio_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_GPIO);
}

static void kinetis_gpio_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_gpio_reset_callback;
    dc->realize = kinetis_gpio_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_gpio_is_enabled;
}

static const TypeInfo kinetis_gpio_type_info = {
    .name = TYPE_KINETIS_GPIO,
    .parent = TYPE_KINETIS_GPIO_PARENT,
    .instance_init = kinetis_gpio_instance_init_callback,
    .instance_size = sizeof(KinetisGPIOState),
    .class_init = kinetis_gpio_class_init_callback,
    .class_size = sizeof(KinetisGPIOClass) };

static void kinetis_gpio_register_types(void)
{
    type_register_static(&kinetis_gpio_type_info);
}

type_init(kinetis_gpio_register_types);

// ----------------------------------------------------------------------------
