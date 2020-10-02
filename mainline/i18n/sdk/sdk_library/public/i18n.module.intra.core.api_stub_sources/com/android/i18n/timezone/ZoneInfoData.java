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
/*
 * Elements of the WallTime class are a port of Bionic's localtime.c to Java. That code had the
 * following header:
 *
 * This file is in the public domain, so clarified as of
 * 1996-06-05 by Arthur David Olson.
 */

package com.android.i18n.timezone;

import java.util.TimeZone;
import libcore.api.IntraCoreApi;

/**
 * Our concrete TimeZone implementation, backed by zoneinfo data.
 *
 * <p>This reads time zone information from a binary file stored on the platform. The binary file
 * is essentially a single file containing compacted versions of all the tzfiles produced by the
 * zone info compiler (zic) tool (see {@code man 5 tzfile} for details of the format and
 * {@code man 8 zic}) and an index by long name, e.g. Europe/London.
 *
 * <p>The compacted form is created by {@code external/icu/tools/ZoneCompactor.java} and is used
 * by both this and Bionic. {@link ZoneInfoDb} is responsible for mapping the binary file, and
 * reading the index and creating a {@link BufferIterator} that provides access to an entry for a
 * specific file. This class is responsible for reading the data from that {@link BufferIterator}
 * and storing it a representation to support the {@link TimeZone} and {@link GregorianCalendar}
 * implementations. See {@link ZoneInfoData#readTimeZone(String, BufferIterator, long)}.
 *
 * <p>This class does not use all the information from the {@code tzfile}; it uses:
 * {@code tzh_timecnt} and the associated transition times and type information. For each type
 * (described by {@code struct ttinfo}) it uses {@code tt_gmtoff} and {@code tt_isdst}.
 *
 * @hide
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class ZoneInfoData implements java.lang.Cloneable {

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

public int getOffset(int era, int year, int month, int day, int dayOfWeek, int millis) { throw new RuntimeException("Stub!"); }

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

public int getOffset(long when) { throw new RuntimeException("Stub!"); }

public boolean inDaylightTime(java.util.Date time) { throw new RuntimeException("Stub!"); }

public int getRawOffset() { throw new RuntimeException("Stub!"); }

public void setRawOffset(int off) { throw new RuntimeException("Stub!"); }

public int getDSTSavings() { throw new RuntimeException("Stub!"); }

public boolean useDaylightTime() { throw new RuntimeException("Stub!"); }

public boolean hasSameRules(com.android.i18n.timezone.ZoneInfoData other) { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object obj) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }

public java.lang.String getID() { throw new RuntimeException("Stub!"); }

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

