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
public final class CountryTimeZones {

private CountryTimeZones() { throw new RuntimeException("Stub!"); }

public java.lang.String getCountryIso() { throw new RuntimeException("Stub!"); }

public boolean matchesCountryCode(java.lang.String countryIso) { throw new RuntimeException("Stub!"); }

public java.lang.String getDefaultTimeZoneId() { throw new RuntimeException("Stub!"); }

public synchronized android.icu.util.TimeZone getDefaultTimeZone() { throw new RuntimeException("Stub!"); }

public boolean isDefaultTimeZoneBoosted() { throw new RuntimeException("Stub!"); }

public java.util.List<com.android.i18n.timezone.CountryTimeZones.TimeZoneMapping> getTimeZoneMappings() { throw new RuntimeException("Stub!"); }

public boolean hasUtcZone(long whenMillis) { throw new RuntimeException("Stub!"); }

public com.android.i18n.timezone.CountryTimeZones.OffsetResult lookupByOffsetWithBias(long whenMillis, android.icu.util.TimeZone bias, int totalOffsetMillis, boolean isDst) { throw new RuntimeException("Stub!"); }

public com.android.i18n.timezone.CountryTimeZones.OffsetResult lookupByOffsetWithBias(long whenMillis, android.icu.util.TimeZone bias, int totalOffsetMillis) { throw new RuntimeException("Stub!"); }

public java.util.List<com.android.i18n.timezone.CountryTimeZones.TimeZoneMapping> getEffectiveTimeZoneMappingsAt(long whenMillis) { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object o) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }
@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class OffsetResult {

OffsetResult() { throw new RuntimeException("Stub!"); }

public android.icu.util.TimeZone getTimeZone() { throw new RuntimeException("Stub!"); }

public boolean isOnlyMatch() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }
}

@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class TimeZoneMapping {

TimeZoneMapping() { throw new RuntimeException("Stub!"); }

public java.lang.String getTimeZoneId() { throw new RuntimeException("Stub!"); }

public boolean isShownInPicker() { throw new RuntimeException("Stub!"); }

public java.lang.Long getNotUsedAfter() { throw new RuntimeException("Stub!"); }

public java.util.List<java.lang.String> getAlternativeIds() { throw new RuntimeException("Stub!"); }

public android.icu.util.TimeZone getTimeZone() { throw new RuntimeException("Stub!"); }

public static com.android.i18n.timezone.CountryTimeZones.TimeZoneMapping createForTests(java.lang.String timeZoneId, boolean showInPicker, java.lang.Long notUsedAfter, java.util.List<java.lang.String> alternativeIds) { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object o) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }
}

}

