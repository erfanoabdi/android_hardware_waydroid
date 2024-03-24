/*
 * Copyright (C) 2010-2011 Chia-I Wu <olvaffe@gmail.com>
 * Copyright (C) 2010-2011 LunarG Inc.
 * Copyright (C) 2020-2022 Android-RPi Project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#define LOG_TAG "composer@2.1-hwc_context"
//#define LOG_NDEBUG 0
#include <utils/Log.h>

#include "hwc_context.h"

namespace android {

hwc_context::hwc_context() {
    ALOGI("hwc_context::hwc_context");
}

int hwc_context::hwc_post(hwc2_display_t display_id, buffer_handle_t buffer) {
    return 0;
}

bool hwc_context::is_display2_active() {
    return false;
}

} // namespace anroid

