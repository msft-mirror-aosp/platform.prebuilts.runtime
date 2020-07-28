/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *******************************************************************************
 * Copyright (C) 1996-2016, International Business Machines Corporation and    *
 * others. All Rights Reserved.                                                *
 *******************************************************************************
 */

package android.icu.util;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public class IslamicCalendar extends android.icu.util.Calendar {

public IslamicCalendar() { throw new RuntimeException("Stub!"); }

public IslamicCalendar(android.icu.util.TimeZone zone) { throw new RuntimeException("Stub!"); }

public IslamicCalendar(java.util.Locale aLocale) { throw new RuntimeException("Stub!"); }

public IslamicCalendar(android.icu.util.ULocale locale) { throw new RuntimeException("Stub!"); }

public IslamicCalendar(android.icu.util.TimeZone zone, java.util.Locale aLocale) { throw new RuntimeException("Stub!"); }

public IslamicCalendar(android.icu.util.TimeZone zone, android.icu.util.ULocale locale) { throw new RuntimeException("Stub!"); }

public IslamicCalendar(java.util.Date date) { throw new RuntimeException("Stub!"); }

public IslamicCalendar(int year, int month, int date) { throw new RuntimeException("Stub!"); }

public IslamicCalendar(int year, int month, int date, int hour, int minute, int second) { throw new RuntimeException("Stub!"); }

protected int handleGetLimit(int field, int limitType) { throw new RuntimeException("Stub!"); }

protected int handleGetMonthLength(int extendedYear, int month) { throw new RuntimeException("Stub!"); }

protected int handleGetYearLength(int extendedYear) { throw new RuntimeException("Stub!"); }

protected int handleComputeMonthStart(int eyear, int month, boolean useMonth) { throw new RuntimeException("Stub!"); }

protected int handleGetExtendedYear() { throw new RuntimeException("Stub!"); }

protected void handleComputeFields(int julianDay) { throw new RuntimeException("Stub!"); }

public void setCalculationType(android.icu.util.IslamicCalendar.CalculationType type) { throw new RuntimeException("Stub!"); }

public android.icu.util.IslamicCalendar.CalculationType getCalculationType() { throw new RuntimeException("Stub!"); }

public java.lang.String getType() { throw new RuntimeException("Stub!"); }

public static final int DHU_AL_HIJJAH = 11; // 0xb

public static final int DHU_AL_QIDAH = 10; // 0xa

public static final int JUMADA_1 = 4; // 0x4

public static final int JUMADA_2 = 5; // 0x5

public static final int MUHARRAM = 0; // 0x0

public static final int RABI_1 = 2; // 0x2

public static final int RABI_2 = 3; // 0x3

public static final int RAJAB = 6; // 0x6

public static final int RAMADAN = 8; // 0x8

public static final int SAFAR = 1; // 0x1

public static final int SHABAN = 7; // 0x7

public static final int SHAWWAL = 9; // 0x9
@SuppressWarnings({"unchecked", "deprecation", "all"})
public enum CalculationType {
ISLAMIC,
ISLAMIC_CIVIL,
ISLAMIC_UMALQURA,
ISLAMIC_TBLA;
}

}

