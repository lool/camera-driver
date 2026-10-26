/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 * Copyright (c) 2022-2023 Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _CAM_IR_LED_CORE_H_
#define _CAM_IR_LED_CORE_H_
#include "cam_ir_led_dev.h"

void cam_ir_led_shutdown(struct cam_ir_led_ctrl *ir_led_ctrl);
int cam_ir_led_stop_dev(struct cam_ir_led_ctrl *ir_led_ctrl);
int cam_ir_led_release_dev(struct cam_ir_led_ctrl *fctrl);
#endif /*_CAM_IR_LED_CORE_H_*/
