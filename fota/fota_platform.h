// ----------------------------------------------------------------------------
// Copyright 2018-2019 ARM Ltd.
//
// SPDX-License-Identifier: Apache-2.0
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ----------------------------------------------------------------------------

#ifndef __FOTA_PLATFORM_H_
#define __FOTA_PLATFORM_H_

#include "fota/fota_base.h"

#ifdef __cplusplus
extern "C" {
#endif

int fota_platform_init_hook(bool after_upgrade);

int fota_platform_start_update_hook(const char *comp_name);

int fota_platform_finish_update_hook(const char *comp_name);

int fota_platform_abort_update_hook(const char *comp_name);

#ifdef __cplusplus
}
#endif

#endif // __FOTA_PLATFORM_H_
