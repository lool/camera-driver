/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 * Copyright (c) 2022-2023 Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _CAM_IR_LED_SOC_H_
#define _CAM_IR_LED_SOC_H_

#include "cam_ir_led_dev.h"

int cam_ir_led_get_dt_data(struct cam_ir_led_ctrl *fctrl,
	struct cam_hw_soc_info *soc_info);

#endif /*_CAM_IR_LED_SOC_H_*/
