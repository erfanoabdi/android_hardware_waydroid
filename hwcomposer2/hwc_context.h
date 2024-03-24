/*
 * Copyright 2020-2022 Android-RPi Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#define HWC2_INCLUDE_STRINGIFICATION
#define HWC2_USE_CPP11
#include <hardware/hwcomposer2.h>
#undef HWC2_USE_CPP11
#undef HWC2_INCLUDE_STRINGIFICATION

namespace android {

#ifndef ANDROID_HARDWARE_HWCOMPOSER2_H
typedef uint64_t hwc2_display_t;
#endif

class hwc_context {
  public :
    hwc_context();
    int hwc_post(hwc2_display_t display_id, buffer_handle_t handle);
    bool is_display2_active();
};

} // namespace android
