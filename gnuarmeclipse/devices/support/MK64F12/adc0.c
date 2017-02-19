/*
 * Kinetis - ADC (Analog-to-Digital Converter) emulation.
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

#include <hw/cortexm/kinetis/adc.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_adc_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisADCState *state = KINETIS_ADC_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.sc1[0] = cm_object_get_child_by_name(obj, "SC1A");
    state->u.k6.reg.sc1[1] = cm_object_get_child_by_name(obj, "SC1B");
    state->u.k6.reg.cfg1 = cm_object_get_child_by_name(obj, "CFG1");
    state->u.k6.reg.cfg2 = cm_object_get_child_by_name(obj, "CFG2");
    state->u.k6.reg.r[0] = cm_object_get_child_by_name(obj, "RA");
    state->u.k6.reg.r[1] = cm_object_get_child_by_name(obj, "RB");
    state->u.k6.reg.cv[0] = cm_object_get_child_by_name(obj, "CV1");
    state->u.k6.reg.cv[1] = cm_object_get_child_by_name(obj, "CV2");
    state->u.k6.reg.sc2 = cm_object_get_child_by_name(obj, "SC2");
    state->u.k6.reg.sc3 = cm_object_get_child_by_name(obj, "SC3");
    state->u.k6.reg.ofs = cm_object_get_child_by_name(obj, "OFS");
    state->u.k6.reg.pg = cm_object_get_child_by_name(obj, "PG");
    state->u.k6.reg.mg = cm_object_get_child_by_name(obj, "MG");
    state->u.k6.reg.clpd = cm_object_get_child_by_name(obj, "CLPD");
    state->u.k6.reg.clps = cm_object_get_child_by_name(obj, "CLPS");
    state->u.k6.reg.clp4 = cm_object_get_child_by_name(obj, "CLP4");
    state->u.k6.reg.clp3 = cm_object_get_child_by_name(obj, "CLP3");
    state->u.k6.reg.clp2 = cm_object_get_child_by_name(obj, "CLP2");
    state->u.k6.reg.clp1 = cm_object_get_child_by_name(obj, "CLP1");
    state->u.k6.reg.clp0 = cm_object_get_child_by_name(obj, "CLP0");
    state->u.k6.reg.clmd = cm_object_get_child_by_name(obj, "CLMD");
    state->u.k6.reg.clms = cm_object_get_child_by_name(obj, "CLMS");
    state->u.k6.reg.clm4 = cm_object_get_child_by_name(obj, "CLM4");
    state->u.k6.reg.clm3 = cm_object_get_child_by_name(obj, "CLM3");
    state->u.k6.reg.clm2 = cm_object_get_child_by_name(obj, "CLM2");
    state->u.k6.reg.clm1 = cm_object_get_child_by_name(obj, "CLM1");
    state->u.k6.reg.clm0 = cm_object_get_child_by_name(obj, "CLM0");
    // SC1A bitfields.
    state->u.k6.fld.sc1[0].adch = cm_object_get_child_by_name(state->u.k6.reg.sc1[0], "ADCH");
    state->u.k6.fld.sc1[0].diff = cm_object_get_child_by_name(state->u.k6.reg.sc1[0], "DIFF");
    state->u.k6.fld.sc1[0].aien = cm_object_get_child_by_name(state->u.k6.reg.sc1[0], "AIEN");
    state->u.k6.fld.sc1[0].coco = cm_object_get_child_by_name(state->u.k6.reg.sc1[0], "COCO");
    // SC1B bitfields.
    state->u.k6.fld.sc1[1].adch = cm_object_get_child_by_name(state->u.k6.reg.sc1[1], "ADCH");
    state->u.k6.fld.sc1[1].diff = cm_object_get_child_by_name(state->u.k6.reg.sc1[1], "DIFF");
    state->u.k6.fld.sc1[1].aien = cm_object_get_child_by_name(state->u.k6.reg.sc1[1], "AIEN");
    state->u.k6.fld.sc1[1].coco = cm_object_get_child_by_name(state->u.k6.reg.sc1[1], "COCO");

    // CFG1 bitfields.
    state->u.k6.fld.cfg1.adiclk = cm_object_get_child_by_name(state->u.k6.reg.cfg1, "ADICLK");
    state->u.k6.fld.cfg1.mode = cm_object_get_child_by_name(state->u.k6.reg.cfg1, "MODE");
    state->u.k6.fld.cfg1.adlsmp = cm_object_get_child_by_name(state->u.k6.reg.cfg1, "ADLSMP");
    state->u.k6.fld.cfg1.adiv = cm_object_get_child_by_name(state->u.k6.reg.cfg1, "ADIV");
    state->u.k6.fld.cfg1.adlpc = cm_object_get_child_by_name(state->u.k6.reg.cfg1, "ADLPC");

    // CFG2 bitfields.
    state->u.k6.fld.cfg2.adlsts = cm_object_get_child_by_name(state->u.k6.reg.cfg2, "ADLSTS");
    state->u.k6.fld.cfg2.adhsc = cm_object_get_child_by_name(state->u.k6.reg.cfg2, "ADHSC");
    state->u.k6.fld.cfg2.adacken = cm_object_get_child_by_name(state->u.k6.reg.cfg2, "ADACKEN");
    state->u.k6.fld.cfg2.muxsel = cm_object_get_child_by_name(state->u.k6.reg.cfg2, "MUXSEL");
    // RA bitfields.
    state->u.k6.fld.r[0].d = cm_object_get_child_by_name(state->u.k6.reg.r[0], "D");
    // RB bitfields.
    state->u.k6.fld.r[1].d = cm_object_get_child_by_name(state->u.k6.reg.r[1], "D");
    // CV1 bitfields.
    state->u.k6.fld.cv[0].cv = cm_object_get_child_by_name(state->u.k6.reg.cv[0], "CV");
    // CV2 bitfields.
    state->u.k6.fld.cv[1].cv = cm_object_get_child_by_name(state->u.k6.reg.cv[1], "CV");

    // SC2 bitfields.
    state->u.k6.fld.sc2.refsel = cm_object_get_child_by_name(state->u.k6.reg.sc2, "REFSEL");
    state->u.k6.fld.sc2.dmaen = cm_object_get_child_by_name(state->u.k6.reg.sc2, "DMAEN");
    state->u.k6.fld.sc2.acren = cm_object_get_child_by_name(state->u.k6.reg.sc2, "ACREN");
    state->u.k6.fld.sc2.acfgt = cm_object_get_child_by_name(state->u.k6.reg.sc2, "ACFGT");
    state->u.k6.fld.sc2.acfe = cm_object_get_child_by_name(state->u.k6.reg.sc2, "ACFE");
    state->u.k6.fld.sc2.adtrg = cm_object_get_child_by_name(state->u.k6.reg.sc2, "ADTRG");
    state->u.k6.fld.sc2.adact = cm_object_get_child_by_name(state->u.k6.reg.sc2, "ADACT");

    // SC3 bitfields.
    state->u.k6.fld.sc3.avgs = cm_object_get_child_by_name(state->u.k6.reg.sc3, "AVGS");
    state->u.k6.fld.sc3.avge = cm_object_get_child_by_name(state->u.k6.reg.sc3, "AVGE");
    state->u.k6.fld.sc3.adco = cm_object_get_child_by_name(state->u.k6.reg.sc3, "ADCO");
    state->u.k6.fld.sc3.calf = cm_object_get_child_by_name(state->u.k6.reg.sc3, "CALF");
    state->u.k6.fld.sc3.cal = cm_object_get_child_by_name(state->u.k6.reg.sc3, "CAL");

    // OFS bitfields.
    state->u.k6.fld.ofs.ofs = cm_object_get_child_by_name(state->u.k6.reg.ofs, "OFS");

    // PG bitfields.
    state->u.k6.fld.pg.pg = cm_object_get_child_by_name(state->u.k6.reg.pg, "PG");

    // MG bitfields.
    state->u.k6.fld.mg.mg = cm_object_get_child_by_name(state->u.k6.reg.mg, "MG");

    // CLPD bitfields.
    state->u.k6.fld.clpd.clpd = cm_object_get_child_by_name(state->u.k6.reg.clpd, "CLPD");

    // CLPS bitfields.
    state->u.k6.fld.clps.clps = cm_object_get_child_by_name(state->u.k6.reg.clps, "CLPS");

    // CLP4 bitfields.
    state->u.k6.fld.clp4.clp4 = cm_object_get_child_by_name(state->u.k6.reg.clp4, "CLP4");

    // CLP3 bitfields.
    state->u.k6.fld.clp3.clp3 = cm_object_get_child_by_name(state->u.k6.reg.clp3, "CLP3");

    // CLP2 bitfields.
    state->u.k6.fld.clp2.clp2 = cm_object_get_child_by_name(state->u.k6.reg.clp2, "CLP2");

    // CLP1 bitfields.
    state->u.k6.fld.clp1.clp1 = cm_object_get_child_by_name(state->u.k6.reg.clp1, "CLP1");

    // CLP0 bitfields.
    state->u.k6.fld.clp0.clp0 = cm_object_get_child_by_name(state->u.k6.reg.clp0, "CLP0");

    // CLMD bitfields.
    state->u.k6.fld.clmd.clmd = cm_object_get_child_by_name(state->u.k6.reg.clmd, "CLMD");

    // CLMS bitfields.
    state->u.k6.fld.clms.clms = cm_object_get_child_by_name(state->u.k6.reg.clms, "CLMS");

    // CLM4 bitfields.
    state->u.k6.fld.clm4.clm4 = cm_object_get_child_by_name(state->u.k6.reg.clm4, "CLM4");

    // CLM3 bitfields.
    state->u.k6.fld.clm3.clm3 = cm_object_get_child_by_name(state->u.k6.reg.clm3, "CLM3");

    // CLM2 bitfields.
    state->u.k6.fld.clm2.clm2 = cm_object_get_child_by_name(state->u.k6.reg.clm2, "CLM2");

    // CLM1 bitfields.
    state->u.k6.fld.clm1.clm1 = cm_object_get_child_by_name(state->u.k6.reg.clm1, "CLM1");

    // CLM0 bitfields.
    state->u.k6.fld.clm0.clm0 = cm_object_get_child_by_name(state->u.k6.reg.clm0, "CLM0");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_adc_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisADCState *state = KINETIS_ADC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_adc_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisADCState *state = KINETIS_ADC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_adc_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisADCState *state = KINETIS_ADC_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_adc_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisADCState *state = KINETIS_ADC_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_adc_is_enabled(Object *obj)
{
    KinetisADCState *state = KINETIS_ADC_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_adc_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisADCState *state = KINETIS_ADC_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_ADC_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_adc_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_ADC)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisADCState *state = KINETIS_ADC_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "ADC";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_adc_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_adc_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_adc_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_adc_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_adc_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/ADC%dEN",
                1 + state->port_index - KINETIS_PORT_ADC1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_adc_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_ADC);
}

static void kinetis_adc_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_adc_reset_callback;
    dc->realize = kinetis_adc_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_adc_is_enabled;
}

static const TypeInfo kinetis_adc_type_info = {
    .name = TYPE_KINETIS_ADC,
    .parent = TYPE_KINETIS_ADC_PARENT,
    .instance_init = kinetis_adc_instance_init_callback,
    .instance_size = sizeof(KinetisADCState),
    .class_init = kinetis_adc_class_init_callback,
    .class_size = sizeof(KinetisADCClass) };

static void kinetis_adc_register_types(void)
{
    type_register_static(&kinetis_adc_type_info);
}

type_init(kinetis_adc_register_types);

// ----------------------------------------------------------------------------
