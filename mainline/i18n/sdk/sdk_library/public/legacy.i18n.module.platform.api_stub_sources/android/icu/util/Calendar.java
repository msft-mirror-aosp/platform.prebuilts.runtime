/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *   Copyright (C) 1996-2016, International Business Machines
 *   Corporation and others.  All Rights Reserved.
 */


package android.icu.util;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public abstract class Calendar implements java.io.Serializable, java.lang.Cloneable, java.lang.Comparable<android.icu.util.Calendar> {

protected Calendar() { throw new RuntimeException("Stub!"); }

protected Calendar(android.icu.util.TimeZone zone, java.util.Locale aLocale) { throw new RuntimeException("Stub!"); }

protected Calendar(android.icu.util.TimeZone zone, android.icu.util.ULocale locale) { throw new RuntimeException("Stub!"); }

public static android.icu.util.Calendar getInstance() { throw new RuntimeException("Stub!"); }

public static android.icu.util.Calendar getInstance(android.icu.util.TimeZone zone) { throw new RuntimeException("Stub!"); }

public static android.icu.util.Calendar getInstance(java.util.Locale aLocale) { throw new RuntimeException("Stub!"); }

public static android.icu.util.Calendar getInstance(android.icu.util.ULocale locale) { throw new RuntimeException("Stub!"); }

public static android.icu.util.Calendar getInstance(android.icu.util.TimeZone zone, java.util.Locale aLocale) { throw new RuntimeException("Stub!"); }

public static android.icu.util.Calendar getInstance(android.icu.util.TimeZone zone, android.icu.util.ULocale locale) { throw new RuntimeException("Stub!"); }

public static java.util.Locale[] getAvailableLocales() { throw new RuntimeException("Stub!"); }

public static final java.lang.String[] getKeywordValuesForLocale(java.lang.String key, android.icu.util.ULocale locale, boolean commonlyUsed) { throw new RuntimeException("Stub!"); }

public final java.util.Date getTime() { throw new RuntimeException("Stub!"); }

public final void setTime(java.util.Date date) { throw new RuntimeException("Stub!"); }

public long getTimeInMillis() { throw new RuntimeException("Stub!"); }

public void setTimeInMillis(long millis) { throw new RuntimeException("Stub!"); }

public final int get(int field) { throw new RuntimeException("Stub!"); }

protected final int internalGet(int field) { throw new RuntimeException("Stub!"); }

protected final int internalGet(int field, int defaultValue) { throw new RuntimeException("Stub!"); }

public final void set(int field, int value) { throw new RuntimeException("Stub!"); }

public final void set(int year, int month, int date) { throw new RuntimeException("Stub!"); }

public final void set(int year, int month, int date, int hour, int minute) { throw new RuntimeException("Stub!"); }

public final void set(int year, int month, int date, int hour, int minute, int second) { throw new RuntimeException("Stub!"); }

public final void clear() { throw new RuntimeException("Stub!"); }

public final void clear(int field) { throw new RuntimeException("Stub!"); }

public final boolean isSet(int field) { throw new RuntimeException("Stub!"); }

protected void complete() { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object obj) { throw new RuntimeException("Stub!"); }

public boolean isEquivalentTo(android.icu.util.Calendar other) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

public boolean before(java.lang.Object when) { throw new RuntimeException("Stub!"); }

public boolean after(java.lang.Object when) { throw new RuntimeException("Stub!"); }

public int getActualMaximum(int field) { throw new RuntimeException("Stub!"); }

public int getActualMinimum(int field) { throw new RuntimeException("Stub!"); }

protected void prepareGetActual(int field, boolean isMinimum) { throw new RuntimeException("Stub!"); }

public final void roll(int field, boolean up) { throw new RuntimeException("Stub!"); }

public void roll(int field, int amount) { throw new RuntimeException("Stub!"); }

public void add(int field, int amount) { throw new RuntimeException("Stub!"); }

public java.lang.String getDisplayName(java.util.Locale loc) { throw new RuntimeException("Stub!"); }

public java.lang.String getDisplayName(android.icu.util.ULocale loc) { throw new RuntimeException("Stub!"); }

public int compareTo(android.icu.util.Calendar that) { throw new RuntimeException("Stub!"); }

public android.icu.text.DateFormat getDateTimeFormat(int dateStyle, int timeStyle, java.util.Locale loc) { throw new RuntimeException("Stub!"); }

public android.icu.text.DateFormat getDateTimeFormat(int dateStyle, int timeStyle, android.icu.util.ULocale loc) { throw new RuntimeException("Stub!"); }

protected android.icu.text.DateFormat handleGetDateFormat(java.lang.String pattern, java.util.Locale locale) { throw new RuntimeException("Stub!"); }

protected android.icu.text.DateFormat handleGetDateFormat(java.lang.String pattern, java.lang.String override, java.util.Locale locale) { throw new RuntimeException("Stub!"); }

protected android.icu.text.DateFormat handleGetDateFormat(java.lang.String pattern, android.icu.util.ULocale locale) { throw new RuntimeException("Stub!"); }

protected void pinField(int field) { throw new RuntimeException("Stub!"); }

protected int weekNumber(int desiredDay, int dayOfPeriod, int dayOfWeek) { throw new RuntimeException("Stub!"); }

protected final int weekNumber(int dayOfPeriod, int dayOfWeek) { throw new RuntimeException("Stub!"); }

public int fieldDifference(java.util.Date when, int field) { throw new RuntimeException("Stub!"); }

public void setTimeZone(android.icu.util.TimeZone value) { throw new RuntimeException("Stub!"); }

public android.icu.util.TimeZone getTimeZone() { throw new RuntimeException("Stub!"); }

public void setLenient(boolean lenient) { throw new RuntimeException("Stub!"); }

public boolean isLenient() { throw new RuntimeException("Stub!"); }

public void setRepeatedWallTimeOption(int option) { throw new RuntimeException("Stub!"); }

public int getRepeatedWallTimeOption() { throw new RuntimeException("Stub!"); }

public void setSkippedWallTimeOption(int option) { throw new RuntimeException("Stub!"); }

public int getSkippedWallTimeOption() { throw new RuntimeException("Stub!"); }

public void setFirstDayOfWeek(int value) { throw new RuntimeException("Stub!"); }

public int getFirstDayOfWeek() { throw new RuntimeException("Stub!"); }

public void setMinimalDaysInFirstWeek(int value) { throw new RuntimeException("Stub!"); }

public int getMinimalDaysInFirstWeek() { throw new RuntimeException("Stub!"); }

protected abstract int handleGetLimit(int field, int limitType);

protected int getLimit(int field, int limitType) { throw new RuntimeException("Stub!"); }

public final int getMinimum(int field) { throw new RuntimeException("Stub!"); }

public final int getMaximum(int field) { throw new RuntimeException("Stub!"); }

public final int getGreatestMinimum(int field) { throw new RuntimeException("Stub!"); }

public final int getLeastMaximum(int field) { throw new RuntimeException("Stub!"); }

public boolean isWeekend(java.util.Date date) { throw new RuntimeException("Stub!"); }

public boolean isWeekend() { throw new RuntimeException("Stub!"); }

public java.lang.Object clone() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }

public static android.icu.util.Calendar.WeekData getWeekDataForRegion(java.lang.String region) { throw new RuntimeException("Stub!"); }

public android.icu.util.Calendar.WeekData getWeekData() { throw new RuntimeException("Stub!"); }

public android.icu.util.Calendar setWeekData(android.icu.util.Calendar.WeekData wdata) { throw new RuntimeException("Stub!"); }

protected void computeFields() { throw new RuntimeException("Stub!"); }

protected final void computeGregorianFields(int julianDay) { throw new RuntimeException("Stub!"); }

protected int resolveFields(int[][][] precedenceTable) { throw new RuntimeException("Stub!"); }

protected int newestStamp(int first, int last, int bestStampSoFar) { throw new RuntimeException("Stub!"); }

protected final int getStamp(int field) { throw new RuntimeException("Stub!"); }

protected int newerField(int defaultField, int alternateField) { throw new RuntimeException("Stub!"); }

protected void validateFields() { throw new RuntimeException("Stub!"); }

protected void validateField(int field) { throw new RuntimeException("Stub!"); }

protected final void validateField(int field, int min, int max) { throw new RuntimeException("Stub!"); }

protected void computeTime() { throw new RuntimeException("Stub!"); }

@Deprecated
protected int computeMillisInDay() { throw new RuntimeException("Stub!"); }

@Deprecated
protected int computeZoneOffset(long millis, int millisInDay) { throw new RuntimeException("Stub!"); }

protected int computeJulianDay() { throw new RuntimeException("Stub!"); }

protected int[][][] getFieldResolutionTable() { throw new RuntimeException("Stub!"); }

protected abstract int handleComputeMonthStart(int eyear, int month, boolean useMonth);

protected abstract int handleGetExtendedYear();

protected int handleGetMonthLength(int extendedYear, int month) { throw new RuntimeException("Stub!"); }

protected int handleGetYearLength(int eyear) { throw new RuntimeException("Stub!"); }

protected int[] handleCreateFields() { throw new RuntimeException("Stub!"); }

protected int handleComputeJulianDay(int bestField) { throw new RuntimeException("Stub!"); }

protected int computeGregorianMonthStart(int year, int month) { throw new RuntimeException("Stub!"); }

protected void handleComputeFields(int julianDay) { throw new RuntimeException("Stub!"); }

protected final int getGregorianYear() { throw new RuntimeException("Stub!"); }

protected final int getGregorianMonth() { throw new RuntimeException("Stub!"); }

protected final int getGregorianDayOfYear() { throw new RuntimeException("Stub!"); }

protected final int getGregorianDayOfMonth() { throw new RuntimeException("Stub!"); }

public final int getFieldCount() { throw new RuntimeException("Stub!"); }

protected final void internalSet(int field, int value) { throw new RuntimeException("Stub!"); }

protected static final boolean isGregorianLeapYear(int year) { throw new RuntimeException("Stub!"); }

protected static final int gregorianMonthLength(int y, int m) { throw new RuntimeException("Stub!"); }

protected static final int gregorianPreviousMonthLength(int y, int m) { throw new RuntimeException("Stub!"); }

protected static final long floorDivide(long numerator, long denominator) { throw new RuntimeException("Stub!"); }

protected static final int floorDivide(int numerator, int denominator) { throw new RuntimeException("Stub!"); }

protected static final int floorDivide(int numerator, int denominator, int[] remainder) { throw new RuntimeException("Stub!"); }

protected static final int floorDivide(long numerator, int denominator, int[] remainder) { throw new RuntimeException("Stub!"); }

protected java.lang.String fieldName(int field) { throw new RuntimeException("Stub!"); }

protected static final int millisToJulianDay(long millis) { throw new RuntimeException("Stub!"); }

protected static final long julianDayToMillis(int julian) { throw new RuntimeException("Stub!"); }

protected static final int julianDayToDayOfWeek(int julian) { throw new RuntimeException("Stub!"); }

protected final long internalGetTimeInMillis() { throw new RuntimeException("Stub!"); }

public java.lang.String getType() { throw new RuntimeException("Stub!"); }

public static final int AM = 0; // 0x0

public static final int AM_PM = 9; // 0x9

public static final int APRIL = 3; // 0x3

public static final int AUGUST = 7; // 0x7

@Deprecated protected static final int BASE_FIELD_COUNT = 23; // 0x17

public static final int DATE = 5; // 0x5

public static final int DAY_OF_MONTH = 5; // 0x5

public static final int DAY_OF_WEEK = 7; // 0x7

public static final int DAY_OF_WEEK_IN_MONTH = 8; // 0x8

public static final int DAY_OF_YEAR = 6; // 0x6

public static final int DECEMBER = 11; // 0xb

public static final int DOW_LOCAL = 18; // 0x12

public static final int DST_OFFSET = 16; // 0x10

protected static final int EPOCH_JULIAN_DAY = 2440588; // 0x253d8c

public static final int ERA = 0; // 0x0

public static final int EXTENDED_YEAR = 19; // 0x13

public static final int FEBRUARY = 1; // 0x1

public static final int FRIDAY = 6; // 0x6

protected static final int GREATEST_MINIMUM = 1; // 0x1

public static final int HOUR = 10; // 0xa

public static final int HOUR_OF_DAY = 11; // 0xb

protected static final int INTERNALLY_SET = 1; // 0x1

public static final int IS_LEAP_MONTH = 22; // 0x16

public static final int JANUARY = 0; // 0x0

protected static final int JAN_1_1_JULIAN_DAY = 1721426; // 0x1a4452

public static final int JULIAN_DAY = 20; // 0x14

public static final int JULY = 6; // 0x6

public static final int JUNE = 5; // 0x5

protected static final int LEAST_MAXIMUM = 2; // 0x2

public static final int MARCH = 2; // 0x2

protected static final int MAXIMUM = 3; // 0x3

protected static final java.util.Date MAX_DATE;
static { MAX_DATE = null; }

@Deprecated protected static final int MAX_FIELD_COUNT = 32; // 0x20

protected static final int MAX_JULIAN = 2130706432; // 0x7f000000

protected static final long MAX_MILLIS = 183882168921600000L; // 0x28d47dbbf19b000L

public static final int MAY = 4; // 0x4

public static final int MILLISECOND = 14; // 0xe

public static final int MILLISECONDS_IN_DAY = 21; // 0x15

protected static final int MINIMUM = 0; // 0x0

protected static final int MINIMUM_USER_STAMP = 2; // 0x2

public static final int MINUTE = 12; // 0xc

protected static final java.util.Date MIN_DATE;
static { MIN_DATE = null; }

protected static final int MIN_JULIAN = -2130706432; // 0x81000000

protected static final long MIN_MILLIS = -184303902528000000L; // 0xfd713893bf19b000L

public static final int MONDAY = 2; // 0x2

public static final int MONTH = 2; // 0x2

public static final int NOVEMBER = 10; // 0xa

public static final int OCTOBER = 9; // 0x9

protected static final long ONE_DAY = 86400000L; // 0x5265c00L

protected static final int ONE_HOUR = 3600000; // 0x36ee80

protected static final int ONE_MINUTE = 60000; // 0xea60

protected static final int ONE_SECOND = 1000; // 0x3e8

protected static final long ONE_WEEK = 604800000L; // 0x240c8400L

public static final int PM = 1; // 0x1

protected static final int RESOLVE_REMAP = 32; // 0x20

public static final int SATURDAY = 7; // 0x7

public static final int SECOND = 13; // 0xd

public static final int SEPTEMBER = 8; // 0x8

public static final int SUNDAY = 1; // 0x1

public static final int THURSDAY = 5; // 0x5

public static final int TUESDAY = 3; // 0x3

public static final int UNDECIMBER = 12; // 0xc

protected static final int UNSET = 0; // 0x0

public static final int WALLTIME_FIRST = 1; // 0x1

public static final int WALLTIME_LAST = 0; // 0x0

public static final int WALLTIME_NEXT_VALID = 2; // 0x2

public static final int WEDNESDAY = 4; // 0x4

public static final int WEEK_OF_MONTH = 4; // 0x4

public static final int WEEK_OF_YEAR = 3; // 0x3

public static final int YEAR = 1; // 0x1

public static final int YEAR_WOY = 17; // 0x11

public static final int ZONE_OFFSET = 15; // 0xf
@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class WeekData {

public WeekData(int fdow, int mdifw, int weekendOnset, int weekendOnsetMillis, int weekendCease, int weekendCeaseMillis) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object other) { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }

public final int firstDayOfWeek;
{ firstDayOfWeek = 0; }

public final int minimalDaysInFirstWeek;
{ minimalDaysInFirstWeek = 0; }

public final int weekendCease;
{ weekendCease = 0; }

public final int weekendCeaseMillis;
{ weekendCeaseMillis = 0; }

public final int weekendOnset;
{ weekendOnset = 0; }

public final int weekendOnsetMillis;
{ weekendOnsetMillis = 0; }
}

}

