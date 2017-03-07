/*
 * Kinetis Cortex-M devices emulation.
 *
 * Copyright (c) 2017 Ian Thompson.
 * Copyright (c) 2014 Liviu Ionescu.
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

#ifndef KINETIS_MCU_H_
#define KINETIS_MCU_H_

#include "qemu/osdep.h"

#include "hw/boards.h"
#include <hw/cortexm/mcu.h>
#include <hw/cortexm/kinetis/mcg.h>
#include <hw/cortexm/kinetis/sim.h>
#include <hw/cortexm/kinetis/port.h>
#include <hw/cortexm/kinetis/gpio.h>
#include <hw/cortexm/kinetis/pit.h>
#include <hw/cortexm/parson.h>

#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_MCU "kinetis-mcu"

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_MCU_PARENT TYPE_CORTEXM_MCU
typedef CortexMClass KinetisMCUParentClass;
typedef CortexMState KinetisMCUParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_MCU_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisMCUClass, (obj), TYPE_KINETIS_MCU)
#define KINETIS_MCU_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisMCUClass, (klass), TYPE_KINETIS_MCU)

typedef struct KinetisMCUClass {
    // private:
    KinetisMCUParentClass parent_class;
    // public:

} KinetisMCUClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_MCU_STATE(obj) \
    OBJECT_CHECK(KinetisMCUState, (obj), TYPE_KINETIS_MCU)

typedef struct KinetisMCUState {
    // private:
    KinetisMCUParentState parent_obj;
    // public:

    // Constructor parameters.
    const KinetisCapabilities *param_capabilities;

    // Specific Kinetis capabilities; Cortex-M capabilities are separate.
    const KinetisCapabilities *capabilities;

    Object *container;

    //DeviceState *rcc;

    // These two properties are duplicated from MCG, to allow
    // setting them before the object exist.
    uint32_t xtal_freq_hz;
    uint32_t xtal32_freq_hz;

    DeviceState *sim;
    DeviceState *mcg;

    DeviceState *port[KINETIS_MAX_PORT];
    DeviceState *gpio[KINETIS_MAX_PORT];
    int num_port;

    DeviceState *pit;
    //DeviceState *pwr;
    //DeviceState *exti;

    //DeviceState *syscfg;
    //DeviceState *afio; // For STM32F1 only.

    //DeviceState *usart[STM32_MAX_USART];

} KinetisMCUState;

// ------ Public --------------------------------------------------------------

/*
 * Might be deprecated in the future; peripherals are named and can be
 * obtained by name.
 */

G_INLINE_FUNC DeviceState *kinetis_mcu_get_sim_dev(DeviceState *dev)
{
    return DEVICE((KINETIS_MCU_STATE(dev)->sim));
}

#if 0

G_INLINE_FUNC DeviceState *kinetis_mcu_get_gpio_dev(DeviceState *dev,
        int port_index)
{
    assert(port_index < STM32_MAX_GPIO);
    return DEVICE((KINETIS_MCU_STATE(dev)->gpio[port_index]));
}

#endif

G_INLINE_FUNC KinetisMCUState *kinetis_mcu_get(void)
{
    return KINETIS_MCU_STATE(object_resolve_path("/machine/mcu", NULL));
}

// ----------------------------------------------------------------------------

#endif /* STM32_MCU_H_ */
