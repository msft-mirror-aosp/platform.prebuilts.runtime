/*
 * Copyright (C) 2017 The Android Open Source Project
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


package com.android.i18n.timezone;


/**
 * Utility methods associated with finding updateable time zone data files.
 *
 * @hide
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class TimeZoneDataFiles {

private TimeZoneDataFiles() { throw new RuntimeException("Stub!"); }

/**
 * Returns time zone file paths for the specified file name in an array in the order they
 * should be tried. See {@link #generateIcuDataPath()} for ICU files instead.
 * <ul>
 * <li>[0] - the location of the file in the /data partition (may not exist).</li>
 * <li>[1] - the location of the file from the time zone module under /apex (must exist).</li>
 * </ul>
 */

public static java.lang.String[] getTimeZoneFilePaths(java.lang.String fileName) { throw new RuntimeException("Stub!"); }

public static java.lang.String getTimeZoneModuleTzFile(java.lang.String fileName) { throw new RuntimeException("Stub!"); }

public static java.lang.String getSystemTzFile(java.lang.String fileName) { throw new RuntimeException("Stub!"); }

public static java.lang.String generateIcuDataPath() { throw new RuntimeException("Stub!"); }
}

