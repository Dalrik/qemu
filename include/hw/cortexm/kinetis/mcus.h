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

#ifndef KINETIS_MCUS_H_
#define KINETIS_MCUS_H_

#include "qemu/osdep.h"

#include <hw/cortexm/kinetis/mcu.h>

/* ------------------------------------------------------------------------- */

// For compatibility with some development tools, it is
// strongly recommended to use the CMSIS names.
#define TYPE_MK64FN1M0VLL12 "MK64FN1M0VLL12"

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_DEVICE_PARENT TYPE_KINETIS_MCU
typedef KinetisMCUClass KinetisDeviceParentClass;
typedef KinetisMCUState KinetisDeviceParentState;

// ----------------------------------------------------------------------------

// Class definitions.
// Warning, this cast must not check the type!
#define KINETIS_DEVICE_GET_CLASS(obj) \
    ((KinetisDeviceClass *)object_get_class(OBJECT(obj)))

// Structure to define the specifics of each MCU. Capabilities are
// split between core & stm32; they care processed by parent class
// constructors.
typedef struct {

    const char *name; // CMSIS device name

    const CortexMCapabilities cortexm;
    const KinetisCapabilities *kinetis;

} KinetisPartInfo;

typedef struct {
    // private:
    KinetisDeviceParentClass parent_class;
    // public:

    KinetisPartInfo *part_info;
} KinetisDeviceClass;

// ----------------------------------------------------------------------------

// Instance definitions.
typedef struct {
    // private:
    KinetisDeviceParentState parent_class;
// public:

} KinetisDeviceState;

// ----------------------------------------------------------------------------

#endif /* Kinetis_MCUS_H_ */
