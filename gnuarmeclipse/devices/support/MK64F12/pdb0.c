/*
 * Kinetis - PDB (Programmable Delay Block) emulation.
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

#include <hw/cortexm/kinetis/pdb.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_pdb_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisPDBState *state = KINETIS_PDB_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.sc = cm_object_get_child_by_name(obj, "SC");
    state->u.k6.reg.mod = cm_object_get_child_by_name(obj, "MOD");
    state->u.k6.reg.cnt = cm_object_get_child_by_name(obj, "CNT");
    state->u.k6.reg.idly = cm_object_get_child_by_name(obj, "IDLY");
    state->u.k6.reg.chc1[0] = cm_object_get_child_by_name(obj, "CH0C1");
    state->u.k6.reg.chc1[1] = cm_object_get_child_by_name(obj, "CH1C1");
    state->u.k6.reg.chs[0] = cm_object_get_child_by_name(obj, "CH0S");
    state->u.k6.reg.chs[1] = cm_object_get_child_by_name(obj, "CH1S");
    state->u.k6.reg.chdly0[0] = cm_object_get_child_by_name(obj, "CH0DLY0");
    state->u.k6.reg.chdly0[1] = cm_object_get_child_by_name(obj, "CH1DLY0");
    state->u.k6.reg.chdly1[0] = cm_object_get_child_by_name(obj, "CH0DLY1");
    state->u.k6.reg.chdly1[1] = cm_object_get_child_by_name(obj, "CH1DLY1");
    state->u.k6.reg.dacintc[0] = cm_object_get_child_by_name(obj, "DACINTC0");
    state->u.k6.reg.dacintc[1] = cm_object_get_child_by_name(obj, "DACINTC1");
    state->u.k6.reg.dacint[0] = cm_object_get_child_by_name(obj, "DACINT0");
    state->u.k6.reg.dacint[1] = cm_object_get_child_by_name(obj, "DACINT1");
    state->u.k6.reg.poen = cm_object_get_child_by_name(obj, "POEN");
    state->u.k6.reg.podly[0] = cm_object_get_child_by_name(obj, "PO0DLY");
    state->u.k6.reg.podly[1] = cm_object_get_child_by_name(obj, "PO1DLY");
    state->u.k6.reg.podly[2] = cm_object_get_child_by_name(obj, "PO2DLY");

    // SC bitfields.
    state->u.k6.fld.sc.ldok = cm_object_get_child_by_name(state->u.k6.reg.sc, "LDOK");
    state->u.k6.fld.sc.cont = cm_object_get_child_by_name(state->u.k6.reg.sc, "CONT");
    state->u.k6.fld.sc.mult = cm_object_get_child_by_name(state->u.k6.reg.sc, "MULT");
    state->u.k6.fld.sc.pdbie = cm_object_get_child_by_name(state->u.k6.reg.sc, "PDBIE");
    state->u.k6.fld.sc.pdbif = cm_object_get_child_by_name(state->u.k6.reg.sc, "PDBIF");
    state->u.k6.fld.sc.pdben = cm_object_get_child_by_name(state->u.k6.reg.sc, "PDBEN");
    state->u.k6.fld.sc.trgsel = cm_object_get_child_by_name(state->u.k6.reg.sc, "TRGSEL");
    state->u.k6.fld.sc.prescaler = cm_object_get_child_by_name(state->u.k6.reg.sc, "PRESCALER");
    state->u.k6.fld.sc.dmaen = cm_object_get_child_by_name(state->u.k6.reg.sc, "DMAEN");
    state->u.k6.fld.sc.swtrig = cm_object_get_child_by_name(state->u.k6.reg.sc, "SWTRIG");
    state->u.k6.fld.sc.pdbeie = cm_object_get_child_by_name(state->u.k6.reg.sc, "PDBEIE");
    state->u.k6.fld.sc.ldmod = cm_object_get_child_by_name(state->u.k6.reg.sc, "LDMOD");

    // MOD bitfields.
    state->u.k6.fld.mod.mod = cm_object_get_child_by_name(state->u.k6.reg.mod, "MOD");

    // CNT bitfields.
    state->u.k6.fld.cnt.cnt = cm_object_get_child_by_name(state->u.k6.reg.cnt, "CNT");

    // IDLY bitfields.
    state->u.k6.fld.idly.idly = cm_object_get_child_by_name(state->u.k6.reg.idly, "IDLY");
    // CH0C1 bitfields.
    state->u.k6.fld.chc1[0].en = cm_object_get_child_by_name(state->u.k6.reg.chc1[0], "EN");
    state->u.k6.fld.chc1[0].tos = cm_object_get_child_by_name(state->u.k6.reg.chc1[0], "TOS");
    state->u.k6.fld.chc1[0].bb = cm_object_get_child_by_name(state->u.k6.reg.chc1[0], "BB");
    // CH1C1 bitfields.
    state->u.k6.fld.chc1[1].en = cm_object_get_child_by_name(state->u.k6.reg.chc1[1], "EN");
    state->u.k6.fld.chc1[1].tos = cm_object_get_child_by_name(state->u.k6.reg.chc1[1], "TOS");
    state->u.k6.fld.chc1[1].bb = cm_object_get_child_by_name(state->u.k6.reg.chc1[1], "BB");
    // CH0S bitfields.
    state->u.k6.fld.chs[0].err = cm_object_get_child_by_name(state->u.k6.reg.chs[0], "ERR");
    state->u.k6.fld.chs[0].cf = cm_object_get_child_by_name(state->u.k6.reg.chs[0], "CF");
    // CH1S bitfields.
    state->u.k6.fld.chs[1].err = cm_object_get_child_by_name(state->u.k6.reg.chs[1], "ERR");
    state->u.k6.fld.chs[1].cf = cm_object_get_child_by_name(state->u.k6.reg.chs[1], "CF");
    // CH0DLY0 bitfields.
    state->u.k6.fld.chdly0[0].dly = cm_object_get_child_by_name(state->u.k6.reg.chdly0[0], "DLY");
    // CH1DLY0 bitfields.
    state->u.k6.fld.chdly0[1].dly = cm_object_get_child_by_name(state->u.k6.reg.chdly0[1], "DLY");
    // CH0DLY1 bitfields.
    state->u.k6.fld.chdly1[0].dly = cm_object_get_child_by_name(state->u.k6.reg.chdly1[0], "DLY");
    // CH1DLY1 bitfields.
    state->u.k6.fld.chdly1[1].dly = cm_object_get_child_by_name(state->u.k6.reg.chdly1[1], "DLY");
    // DACINTC0 bitfields.
    state->u.k6.fld.dacintc[0].toe = cm_object_get_child_by_name(state->u.k6.reg.dacintc[0], "TOE");
    state->u.k6.fld.dacintc[0].ext = cm_object_get_child_by_name(state->u.k6.reg.dacintc[0], "EXT");
    // DACINTC1 bitfields.
    state->u.k6.fld.dacintc[1].toe = cm_object_get_child_by_name(state->u.k6.reg.dacintc[1], "TOE");
    state->u.k6.fld.dacintc[1].ext = cm_object_get_child_by_name(state->u.k6.reg.dacintc[1], "EXT");
    // DACINT0 bitfields.
    state->u.k6.fld.dacint[0].int_ = cm_object_get_child_by_name(state->u.k6.reg.dacint[0], "INT");
    // DACINT1 bitfields.
    state->u.k6.fld.dacint[1].int_ = cm_object_get_child_by_name(state->u.k6.reg.dacint[1], "INT");

    // POEN bitfields.
    state->u.k6.fld.poen.poen = cm_object_get_child_by_name(state->u.k6.reg.poen, "POEN");
    // PO0DLY bitfields.
    state->u.k6.fld.podly[0].dly2 = cm_object_get_child_by_name(state->u.k6.reg.podly[0], "DLY2");
    state->u.k6.fld.podly[0].dly1 = cm_object_get_child_by_name(state->u.k6.reg.podly[0], "DLY1");
    // PO1DLY bitfields.
    state->u.k6.fld.podly[1].dly2 = cm_object_get_child_by_name(state->u.k6.reg.podly[1], "DLY2");
    state->u.k6.fld.podly[1].dly1 = cm_object_get_child_by_name(state->u.k6.reg.podly[1], "DLY1");
    // PO2DLY bitfields.
    state->u.k6.fld.podly[2].dly2 = cm_object_get_child_by_name(state->u.k6.reg.podly[2], "DLY2");
    state->u.k6.fld.podly[2].dly1 = cm_object_get_child_by_name(state->u.k6.reg.podly[2], "DLY1");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_pdb_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisPDBState *state = KINETIS_PDB_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_pdb_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisPDBState *state = KINETIS_PDB_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_pdb_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisPDBState *state = KINETIS_PDB_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_pdb_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisPDBState *state = KINETIS_PDB_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_pdb_is_enabled(Object *obj)
{
    KinetisPDBState *state = KINETIS_PDB_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_pdb_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisPDBState *state = KINETIS_PDB_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_PDB_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_pdb_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_PDB)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisPDBState *state = KINETIS_PDB_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "PDB";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_pdb_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_pdb_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_pdb_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_pdb_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_pdb_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/PDB%dEN",
                1 + state->port_index - KINETIS_PORT_PDB1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_pdb_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_PDB);
}

static void kinetis_pdb_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_pdb_reset_callback;
    dc->realize = kinetis_pdb_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_pdb_is_enabled;
}

static const TypeInfo kinetis_pdb_type_info = {
    .name = TYPE_KINETIS_PDB,
    .parent = TYPE_KINETIS_PDB_PARENT,
    .instance_init = kinetis_pdb_instance_init_callback,
    .instance_size = sizeof(KinetisPDBState),
    .class_init = kinetis_pdb_class_init_callback,
    .class_size = sizeof(KinetisPDBClass) };

static void kinetis_pdb_register_types(void)
{
    type_register_static(&kinetis_pdb_type_info);
}

type_init(kinetis_pdb_register_types);

// ----------------------------------------------------------------------------
