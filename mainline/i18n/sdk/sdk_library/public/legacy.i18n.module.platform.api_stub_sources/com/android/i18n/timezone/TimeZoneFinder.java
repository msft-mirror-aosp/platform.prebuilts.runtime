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

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class TimeZoneFinder {

private TimeZoneFinder() { throw new RuntimeException("Stub!"); }

public static com.android.i18n.timezone.TimeZoneFinder getInstance() { throw new RuntimeException("Stub!"); }

public static com.android.i18n.timezone.TimeZoneFinder createInstance(java.lang.String path) throws java.io.IOException { throw new RuntimeException("Stub!"); }

public void validate() throws java.io.IOException { throw new RuntimeException("Stub!"); }

public java.lang.String getIanaVersion() { throw new RuntimeException("Stub!"); }

public com.android.i18n.timezone.CountryZonesFinder getCountryZonesFinder() { throw new RuntimeException("Stub!"); }

public com.android.i18n.timezone.CountryTimeZones lookupCountryTimeZones(java.lang.String countryIso) { throw new RuntimeException("Stub!"); }
}

