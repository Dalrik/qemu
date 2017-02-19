/*
 * Kinetis Cortex-M devices emulation.
 *
 * Copyright (c) 2017 Ian Thompson.
 * Copyright (c) 2014 Liviu Ionescu.
 * Copyright (c) 2010 Andre Beckus.
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

#include <hw/cortexm/kinetis/mcus.h>
#include <hw/cortexm/mcu.h>
#include <hw/cortexm/helper.h>

#include "exec/address-spaces.h"
#include "qemu/error-report.h"
#include "sysemu/sysemu.h"

#if defined(CONFIG_VERBOSE)
#include "verbosity.h"
#endif

// ----------------------------------------------------------------------------

/*
 * Define all Kinetis MCUs, based on table capabilities.
 *
 * To easily reuse the definitions, each line includes a pointer
 * to the core capabilities and a pointer to the kinetis capabilities.
 * This greatly simplify adding definition that differ only in memory size.
 */

/*
 * References:
 * - Doc ID 018940 Rev 8, "ST RM0091 Reference manual,
 * STM32F0x1/STM32F0x2/STM32F0x8 advanced ARM-based 32-bit MCUs"
 *
 * - ST CD00171190.pdf, Doc ID 13902 Rev 15, "RM0008 Reference Manual,
 * STM32F101xx, STM32F102xx, STM32F103xx, STM32F105xx and STM32F107xx
 * advanced ARM®-based 32-bit MCUs"
 *
 * - Doc ID 018909 Rev 6, "ST RM0090 Reference manual,
 * STM32F405xx/07xx, STM32F415xx/17xx, STM32F42xxx and STM32F43xxx
 * advanced ARM-based 32-bit MCUs"
 *
 * - Doc ID 026448 Rev 1, "ST RM0383 Reference manual,
 * STM32F411xC/E advanced ARM-based 32-bit MCUs"
 *
 * All STM32 reference manuals are available from:
 * http://www.st.com/content/st_com/en/support/resources/resource-selector.html?querycriteria=productId=SC1169$$resourceCategory=technical_literature$$resourceType=reference_manual
 */

/*
 * - Low-density devices are STM32F101xx, STM32F102xx and STM32F103xx
 * microcontrollers where the Flash memory density ranges between 16
 * and 32 Kbytes.
 * - Medium-density devices are STM32F101xx, STM32F102xx and STM32F103xx
 * microcontrollers where the Flash memory density ranges between 64
 * and 128 Kbytes.
 * - High-density devices are STM32F101xx and STM32F103xx microcontrollers
 * where the Flash memory density ranges between 256 and 512 Kbytes.
 * - XL-density devices are STM32F101xx and STM32F103xx microcontrollers
 * where the Flash memory density ranges between 768 Kbytes and 1 Mbyte.
 * - Connectivity line devices are STM32F105xx and STM32F107xx
 * microcontrollers.
 */

/*
 * Interrupts:
 *
 * - F1
 *   - CL: 68
 *   - [LMHX]D: 60
 * - F4
 *   - TBD
 */

/*
 * STM32 pin count and package encoding (first char after number):
 *
 * I = BGA/LQFP 176
 * V = LQFP/UFBGA 100
 * Z = LQFP/UFPGA/UFBGA 144, WLCSP 143
 * B = LQFP 208
 * R = LQFP 64
 * N = TFBGA
 * A = UFBGA 169, WLCSP 168
 * C = UFQFPN 48, WLCSP 49
 * M = WLCSP 81
 * O = WLCSP 90
 */

/*
 * STM32 Flash sizes encoding (second char after number):
 *
 * 4 = 16K
 * 6 = 32K
 * 8 = 64K
 * B = 128K
 * C = 256K
 * E = 512K
 * F = 768K
 * G = 1024K
 * I = 2048K
 */

static const KinetisCapabilities mk64f12 = {
    .family = KINETIS_FAMILY_K6,
    .k6 = {
        .is_k64 = true
    },

    .int_irc_freq_hz = 48000000,
    .int_fast_freq_hz = 4000000,
    .int_slow_freq_hz = 32000,

    .has_periph_bitband = true,

    .has_adc0 = true,
    .has_adc1 = true,

    .has_aips0 = true,
    .has_aips1 = true,

    .has_can0 = true,

    .has_cmp0 = true,
    .has_cmp1 = true,
    .has_cmp2 = true,

    .has_crc = true,

    .has_dac0 = true,
    .has_dac1 = true,

    .has_dma = true,

    .has_dmamux = true,

    .has_enet = true,

    .has_ewm = true,

    .has_fb = true,

    .has_fmc = true,

    .has_ftm0 = true,
    .has_ftm1 = true,
    .has_ftm2 = true,
    .has_ftm3 = true,

    .has_i2c0 = true,
    .has_i2c1 = true,
    .has_i2c2 = true,

    .has_i2s0 = true,

    .has_llwu = true,

    .has_lptmr0 = true,

    .has_mcg = true,

    .has_mcm = true,

    .has_mpu = true,

    .has_osc = true,

    .has_pdb0 = true,

    .has_pit = true,

    .has_pmc = true,

    .has_porta = true,
    .has_portb = true,
    .has_portc = true,
    .has_portd = true,
    .has_porte = true,

    .has_rng = true,
    
    .has_rtc = true,

    .has_sdhc = true,

    .has_sim = true,

    .has_smc = true,

    .has_spi0 = true,
    .has_spi1 = true,
    .has_spi2 = true,

    .has_uart0 = true,
    .has_uart1 = true,
    .has_uart2 = true,
    .has_uart3 = true,
    .has_uart4 = true,
    .has_uart5 = true,

    .has_usb0 = true,

    .has_usbdcd = true,

    .has_vref = true,

    .has_wdog = true
};

// ----------------------------------------------------------------------------

static const KinetisPartInfo kinetis_mcus[] = {
    {
        .name = TYPE_MK64FN1M0VLL12,
        .cortexm = {
            .flash_size_kb = 1024,
            .sram_size_kb = 256,

            .svd_file_name = "MK64F12-qemu.json",
            .svd_device_name = "MK64F12",
        /**/
        },

        .kinetis = &mk64f12,
    /**/
    },
    { }
/**/
};

// ----------------------------------------------------------------------------

static void kinetis_mcus_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    // Add properties here.
}

static void kinetis_mcus_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    KinetisDeviceClass *kin_class = KINETIS_DEVICE_GET_CLASS(dev);
    KinetisPartInfo *part_info = kin_class->part_info;

    // Set additional constructor parameters, that were passed via
    // the .class_data and copied to custom class member.
    qdev_prop_set_ptr(dev, "cortexm-capabilities",
            (void *) &part_info->cortexm);
    qdev_prop_set_ptr(dev, "kinetis-capabilities", (void *) part_info->kinetis);

    // Call parent realize().
    // We do not know the current typename, since it was generated
    // with a table, so we use the parent typename.

    if (!cm_device_by_name_realize(dev, errp, TYPE_KINETIS_DEVICE_PARENT)) {
        return;
    }
}

static void kinetis_mcus_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset().
    cm_device_by_name_reset(dev, TYPE_KINETIS_MCU);
}

static void kinetis_mcus_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    dc->realize = kinetis_mcus_realize_callback;
    dc->reset = kinetis_mcus_reset_callback;

    KinetisDeviceClass *kin_class = (KinetisDeviceClass *) (klass);
    // Copy the 'data' param, pointing to a ParamInfo, to the class
    // structure, to be retrieved by the constructor.
    kin_class->part_info = data;
}

// Register all devices described in the table.
// Pass the pointer to the table element as .class_data
// to the .class_init.

static void kinetis_mcus_types_init(void)
{
    int i;
    for (i = 0; kinetis_mcus[i].name; ++i) {

        TypeInfo ti = {
            .name = kinetis_mcus[i].name,
            .parent = TYPE_KINETIS_DEVICE_PARENT,
            .instance_init = kinetis_mcus_instance_init_callback,
            .instance_size = sizeof(KinetisDeviceState),
            .class_init = kinetis_mcus_class_init_callback,
            .class_size = sizeof(KinetisDeviceClass),
            .class_data = (void *) &kinetis_mcus[i] };
        type_register(&ti);
    }
}

type_init(kinetis_mcus_types_init);

// ----------------------------------------------------------------------------
