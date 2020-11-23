/*
 * Copyright (C) 2007 The Android Open Source Project
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
 * Our concrete TimeZone implementation, backed by zoneinfo data.
 *
 * <p>This reads time zone information from a binary file stored on the platform. The binary file
 * is essentially a single file containing compacted versions of all the tzfiles produced by the
 * zone info compiler (zic) tool (see {@code man 5 tzfile} for details of the format and
 * {@code man 8 zic}) and an index by long name, e.g. Europe/London.
 *
 * <p>The compacted form is created by
 * {@code system/timezone/input_tools/android/zone_compactor/main/java/ZoneCompactor.java} and is
 * used by both this and Bionic. {@link ZoneInfoDb} is responsible for mapping the binary file, and
 * reading the index and creating a {@link BufferIterator} that provides access to an entry for a
 * specific file. This class is responsible for reading the data from that {@link BufferIterator}
 * and storing it a representation to support the {@link java.util.TimeZone} and
 * {@link java.util.GregorianCalendar} implementations. See
 * {@link ZoneInfoData#readTimeZone(String, BufferIterator, long)}.
 *
 * <p>This class does not use all the information from the {@code tzfile}; it uses:
 * {@code tzh_timecnt} and the associated transition times and type information. For each type
 * (described by {@code struct ttinfo}) it uses {@code tt_gmtoff} and {@code tt_isdst}.
 *
 * @hide
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class ZoneInfoData {

/**
 * Copy constructor
 */

public ZoneInfoData(com.android.i18n.timezone.ZoneInfoData that) { throw new RuntimeException("Stub!"); }

/**
 * Create an instance from the serialized fields from {@link libcore.util.ZoneInfo}
 * for backward app compatibility.
 */

public static com.android.i18n.timezone.ZoneInfoData createFromSerializationFields(java.lang.String id, java.io.ObjectInputStream.GetField getField) throws java.io.IOException { throw new RuntimeException("Stub!"); }

/**
 * Serialize {@link libcore.util.ZoneInfo} into backward app compatible form.
 */

public void writeToSerializationFields(java.io.ObjectOutputStream.PutField putField) { throw new RuntimeException("Stub!"); }

/**
 * Get the raw and DST offsets for the specified time in milliseconds since
 * 1st Jan 1970 00:00:00.000 UTC.
 *
 * <p>The raw offset, i.e. that part of the total offset which is not due to DST, is stored at
 * index 0 of the {@code offsets} array and the DST offset, i.e. that part of the offset which
 * is due to DST is stored at index 1.
 *
 * @param utcTimeInMillis the UTC time in milliseconds.
 * @param offsets the array whose length must be greater than or equal to 2.
 * @return the total offset which is the sum of the raw and DST offsets.
 */

public int getOffsetsByUtcTime(long utcTimeInMillis, int[] offsets) { throw new RuntimeException("Stub!"); }

/**
 * Returns the offset from UTC in milliseconds at the specified time {@when}.
 *
 * @param when the number of milliseconds since January 1, 1970, 00:00:00 GMT
 */

public int getOffset(long when) { throw new RuntimeException("Stub!"); }

/**
 * Returns whether the given {@code when} is in daylight saving time in this time zone.
 *
 * @param when the number of milliseconds since January 1, 1970, 00:00:00 GMT
 */

public boolean isInDaylightTime(long when) { throw new RuntimeException("Stub!"); }

/**
 * Returns whether the given {@code time} is in daylight saving time in this time zone.
 */

public boolean inDaylightTime(java.util.Date time) { throw new RuntimeException("Stub!"); }

/**
 * Returns the raw offset in milliseconds. The value is not affected by daylight saving.
 */

public int getRawOffset() { throw new RuntimeException("Stub!"); }

/**
 * Sets the raw offset.
 */

public void setRawOffset(int off) { throw new RuntimeException("Stub!"); }

/**
 * Returns the offset of daylight saving in milliseconds.
 */

public int getDSTSavings() { throw new RuntimeException("Stub!"); }

/**
 * Returns {@code true} if this time zone still uses daylight saving time currently.
 */

public boolean useDaylightTime() { throw new RuntimeException("Stub!"); }

/**
 * Returns {@code true} if 2 time zones have the same time zone rule.
 */

public boolean hasSameRules(com.android.i18n.timezone.ZoneInfoData other) { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object obj) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

/**
 * Returns a string containing the internal states for debug purpose.
 */

public java.lang.String toString() { throw new RuntimeException("Stub!"); }

/**
 * Returns the time zone id.
 */

public java.lang.String getID() { throw new RuntimeException("Stub!"); }

/**
 * Create a deep copy of this object.
 */

public com.android.i18n.timezone.ZoneInfoData createCopy() { throw new RuntimeException("Stub!"); }

/**
 * Create a deep copy of this object with a new raw offset.
 */

public com.android.i18n.timezone.ZoneInfoData createCopyWithRawOffset(int newRawOffset) { throw new RuntimeException("Stub!"); }

/**
 * Returns the times (in seconds) at which the offsets changes for any reason, whether that is a
 * change in the offset from UTC or a change in the DST.
 *
 * WARNING: This API is exposed only for app compat usage in {@link libcore.util.ZoneInfo}. The
 * data is read-only. Do not write any data into the returned array, which is an internal
 * data structure.
 */

public long[] getTransitions() { throw new RuntimeException("Stub!"); }

public long[] getTransitionsForAppCompat() { throw new RuntimeException("Stub!"); }

/**
 * IntraCoreApi made visible for testing in libcore
 */

public static com.android.i18n.timezone.ZoneInfoData createZoneInfo(java.lang.String name, long timeInMilli, java.nio.ByteBuffer buf) throws java.io.IOException { throw new RuntimeException("Stub!"); }

/**
 * The serialized fields in {@link libcore.util.ZoneInfo} kept for backward app compatibility.
 */

public static final java.io.ObjectStreamField[] ZONEINFO_SERIALIZED_FIELDS;
static { ZONEINFO_SERIALIZED_FIELDS = new java.io.ObjectStreamField[0]; }
}

