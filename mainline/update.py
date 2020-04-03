#!/usr/bin/env python
#
# Copyright (C) 2020 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
"""Downloads mainline prebuilts from the build server."""
import os
import sys

THIS_DIR = os.path.realpath(os.path.dirname(__file__))

sys.path.append(THIS_DIR + '/../common/python')

import update_prebuilts as update

mainline_install_list = [
    update.InstallEntry('mainline_modules',
                        'arm64/com.android.conscrypt.apex',
                        'conscrypt/apex/com.android.conscrypt-arm64.apex',
                        need_unzip=False),

    update.InstallEntry('mainline_modules',
                        'arm/com.android.conscrypt.apex',
                        'conscrypt/apex/com.android.conscrypt-arm.apex',
                        need_unzip=False),

    update.InstallEntry('mainline_modules',
                        'x86/com.android.conscrypt.apex',
                        'conscrypt/apex/com.android.conscrypt-x86.apex',
                        need_unzip=False),

    update.InstallEntry('mainline_modules',
                        'x86_64/com.android.conscrypt.apex',
                        'conscrypt/apex/com.android.conscrypt-x86_64.apex',
                        need_unzip=False),

    update.InstallEntry('mainline_modules',
                        'mainline-sdks/conscrypt-module-sdk-current.zip',
                        'conscrypt/sdk/conscrypt-module-sdk-current.zip',
                        need_unzip=True),

    update.InstallEntry('mainline_modules',
                        'mainline-sdks/conscrypt-module-test-exports-current.zip',
                        'conscrypt/test-exports/conscrypt-module-test-exports-current.zip',
                        need_unzip=True),
]

mainline_extracted_list = [
]

if __name__ == '__main__':
    update.main(THIS_DIR, 'mainline', mainline_install_list, mainline_extracted_list)
