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

ZoneInfoData() { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object obj) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }

public java.lang.String getID() { throw new RuntimeException("Stub!"); }
@SuppressWarnings({"unchecked", "deprecation", "all"})
public static class WallTime {

public WallTime() { throw new RuntimeException("Stub!"); }

public void localtime(int timeSeconds, com.android.i18n.timezone.ZoneInfoData zoneInfo) { throw new RuntimeException("Stub!"); }

public int mktime(com.android.i18n.timezone.ZoneInfoData zoneInfo) { throw new RuntimeException("Stub!"); }

public void setYear(int year) { throw new RuntimeException("Stub!"); }

public void setMonth(int month) { throw new RuntimeException("Stub!"); }

public void setMonthDay(int monthDay) { throw new RuntimeException("Stub!"); }

public void setHour(int hour) { throw new RuntimeException("Stub!"); }

public void setMinute(int minute) { throw new RuntimeException("Stub!"); }

public void setSecond(int second) { throw new RuntimeException("Stub!"); }

public void setWeekDay(int weekDay) { throw new RuntimeException("Stub!"); }

public void setYearDay(int yearDay) { throw new RuntimeException("Stub!"); }

public void setIsDst(int isDst) { throw new RuntimeException("Stub!"); }

public void setGmtOffset(int gmtoff) { throw new RuntimeException("Stub!"); }

public int getYear() { throw new RuntimeException("Stub!"); }

public int getMonth() { throw new RuntimeException("Stub!"); }

public int getMonthDay() { throw new RuntimeException("Stub!"); }

public int getHour() { throw new RuntimeException("Stub!"); }

public int getMinute() { throw new RuntimeException("Stub!"); }

public int getSecond() { throw new RuntimeException("Stub!"); }

public int getWeekDay() { throw new RuntimeException("Stub!"); }

public int getYearDay() { throw new RuntimeException("Stub!"); }

public int getGmtOffset() { throw new RuntimeException("Stub!"); }

public int getIsDst() { throw new RuntimeException("Stub!"); }
}

}

