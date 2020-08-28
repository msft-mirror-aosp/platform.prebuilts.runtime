/*
 * Copyright (C) 2016 The Android Open Source Project
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

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class TzDataSetVersion {

public TzDataSetVersion(int formatMajorVersion, int formatMinorVersion, java.lang.String rulesVersion, int revision) throws com.android.i18n.timezone.TzDataSetVersion.TzDataSetException { throw new RuntimeException("Stub!"); }

public static int currentFormatMajorVersion() { throw new RuntimeException("Stub!"); }

public static int currentFormatMinorVersion() { throw new RuntimeException("Stub!"); }

public static com.android.i18n.timezone.TzDataSetVersion readFromFile(java.io.File file) throws java.io.IOException, com.android.i18n.timezone.TzDataSetVersion.TzDataSetException { throw new RuntimeException("Stub!"); }

public static com.android.i18n.timezone.TzDataSetVersion readTimeZoneModuleVersion() throws java.io.IOException, com.android.i18n.timezone.TzDataSetVersion.TzDataSetException { throw new RuntimeException("Stub!"); }

public int getFormatMajorVersion() { throw new RuntimeException("Stub!"); }

public int getFormatMinorVersion() { throw new RuntimeException("Stub!"); }

public java.lang.String getRulesVersion() { throw new RuntimeException("Stub!"); }

public int getRevision() { throw new RuntimeException("Stub!"); }

public byte[] toBytes() { throw new RuntimeException("Stub!"); }

public static boolean isCompatibleWithThisDevice(com.android.i18n.timezone.TzDataSetVersion tzDataVersion) { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object o) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }

public static final java.lang.String DEFAULT_FILE_NAME = "tz_version";
@SuppressWarnings({"unchecked", "deprecation", "all"})
public static class TzDataSetException extends java.lang.Exception {

public TzDataSetException(java.lang.String message) { throw new RuntimeException("Stub!"); }

public TzDataSetException(java.lang.String message, java.lang.Throwable cause) { throw new RuntimeException("Stub!"); }
}

}

