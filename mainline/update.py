#!/usr/bin/env -S python -B
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

PREBUILT_DESCRIPTION = 'mainline'
TARGET = 'mainline_modules'

mainline_install_list = []
mainline_extracted_list = []

def InstallApexEntries(apex_name, install_dir):
  res = []
  for arch in ['arm', 'arm64', 'x86', 'x86_64']:
    res.append(update.InstallEntry(
        TARGET,
        arch + '/' + apex_name + '.apex',
        install_dir + '/' + apex_name + '-' + arch + '.apex',
        install_unzipped=False))
  return res

def InstallSdkEntries(mainline_sdk_name, install_dir):
  return [update.InstallEntry(
      TARGET,
      'mainline-sdks/' + mainline_sdk_name + '-current.zip',
      install_dir,
      install_unzipped=True)]

# Conscrypt
mainline_install_list.extend(
    InstallApexEntries('com.android.conscrypt', 'conscrypt/apex') +
    InstallSdkEntries('conscrypt-module-sdk', 'conscrypt/sdk') +
    InstallSdkEntries('conscrypt-module-test-exports', 'conscrypt/test-exports') +
    InstallSdkEntries('conscrypt-module-host-exports', 'conscrypt/host-exports'))

# Runtime (Bionic)
mainline_install_list.extend(
    InstallApexEntries('com.android.runtime', 'runtime/apex') +
    InstallSdkEntries('runtime-module-sdk', 'runtime/sdk') +
    InstallSdkEntries('runtime-module-host-exports', 'runtime/host-exports'))

# I18N
mainline_install_list.extend(
    InstallApexEntries('com.android.i18n', 'i18n/apex') +
    InstallSdkEntries('i18n-module-sdk', 'i18n/sdk') +
    InstallSdkEntries('i18n-module-test-exports', 'i18n/test-exports'))

# Platform
mainline_install_list.extend(
    InstallSdkEntries('platform-mainline-sdk', 'platform/sdk'))

if __name__ == '__main__':
    update.main(THIS_DIR, PREBUILT_DESCRIPTION,
                mainline_install_list, mainline_extracted_list)
