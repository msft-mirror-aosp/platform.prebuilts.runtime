/*
 * Copyright (C) 2020 The Android Open Source Project
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


package com.android.icu.util;

import android.icu.util.TimeZone;

/**
 * Provide extra functionalities on top of {@link android.icu.util.TimeZone TimeZone} public APIs.
 *
 * @hide
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public class ExtendedTimeZone {

private ExtendedTimeZone() { throw new RuntimeException("Stub!"); }

/**
 * Returns an instance from the time zone ID. Note that the returned instance could be shared.
 *
 * @see android.icu.util.TimeZone#getTimeZone(String) for the more information.
 * @hide
 */

public static com.android.icu.util.ExtendedTimeZone getInstance(java.lang.String id) { throw new RuntimeException("Stub!"); }

/**
 * Clears the default time zone in ICU4J. When next {@link android.icu.util.TimeZone#getDefault() TimeZone#getDefault()} is called,
 * ICU4J will re-initialize the default time zone from the value obtained from the libcore's
 * {@link java.util.TimeZone#getDefault()}.
 *
 * This API is useful for libcore's {@link java.util.TimeZone#setDefault(java.util.TimeZone)} to
 * break the cycle of synchronizing the default time zone between libcore and ICU4J.
 *
 * @hide
 */

public static void clearDefaultTimeZone() { throw new RuntimeException("Stub!"); }

/**
 * Returns the underlying {@link android.icu.util.TimeZone TimeZone} instance.
 *
 * @hide
 */

public android.icu.util.TimeZone getTimeZone() { throw new RuntimeException("Stub!"); }
}
