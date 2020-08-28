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

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class ZoneInfoData implements java.lang.Cloneable {

public ZoneInfoData(com.android.i18n.timezone.ZoneInfoData that) { throw new RuntimeException("Stub!"); }

public static com.android.i18n.timezone.ZoneInfoData createFromSerializationFields(java.lang.String id, java.io.ObjectInputStream.GetField getField) throws java.io.IOException { throw new RuntimeException("Stub!"); }

public void writeToSerializationFields(java.io.ObjectOutputStream.PutField putField) { throw new RuntimeException("Stub!"); }

public int getOffset(int era, int year, int month, int day, int dayOfWeek, int millis) { throw new RuntimeException("Stub!"); }

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

public static com.android.i18n.timezone.ZoneInfoData createZoneInfo(java.lang.String name, long timeInMilli, java.nio.ByteBuffer buf) throws java.io.IOException { throw new RuntimeException("Stub!"); }

public static final java.io.ObjectStreamField[] ZONEINFO_SERIALIZED_FIELDS;
static { ZONEINFO_SERIALIZED_FIELDS = new java.io.ObjectStreamField[0]; }
}

