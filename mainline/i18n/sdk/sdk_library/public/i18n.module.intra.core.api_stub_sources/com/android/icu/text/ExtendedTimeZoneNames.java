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


package com.android.icu.text;

import android.icu.text.TimeZoneNames;

/**
 * Provide extra functionalities on top of {@link android.icu.text.TimeZoneNames TimeZoneNames} public APIs.
 *
 * @hide
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public class ExtendedTimeZoneNames {

private ExtendedTimeZoneNames() { throw new RuntimeException("Stub!"); }

/**
 * Returns an instance of {@link com.android.icu.text.ExtendedTimeZoneNames ExtendedTimeZoneNames}.
 *
 * @hide
 */

public static com.android.icu.text.ExtendedTimeZoneNames getInstance(android.icu.util.ULocale locale) { throw new RuntimeException("Stub!"); }

/**
 * Returns the underlying {@link android.icu.text.TimeZoneNames TimeZoneNames} instance.
 *
 * @hide
 */

public android.icu.text.TimeZoneNames getTimeZoneNames() { throw new RuntimeException("Stub!"); }
/**
 * A class representing the return result of {@link #matchName(java.lang.CharSequence,int,java.lang.String)}
 *
 * @hide
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public static class MatchedTimeZone {

private MatchedTimeZone() { throw new RuntimeException("Stub!"); }

/**
 * Returns the number of chars in the matched name.
 *
 * @hide
 */

public int getMatchLength() { throw new RuntimeException("Stub!"); }

/**
 * Returns the time zone id associated with the matched name.
 *
 * @hide
 */

public java.lang.String getTzId() { throw new RuntimeException("Stub!"); }

/**
 * Returns true if the matched name is a display name for daylight saving time.
 *
 * @hide
 */

public boolean isDst() { throw new RuntimeException("Stub!"); }
}

}

