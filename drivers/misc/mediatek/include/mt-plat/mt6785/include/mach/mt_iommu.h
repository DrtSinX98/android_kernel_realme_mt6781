/*
 * Copyright (C) 2019 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef __MT_IOMMU_H__
#define __MT_IOMMU_H__

#if IS_ENABLED(CONFIG_MACH_MT6781)
#include <dt-bindings/memory/mt6781-larb-port.h>
#else
#include <dt-bindings/memory/mt6785-larb-port.h>
#endif

#include "mtk_iommu_ext.h"

#endif
