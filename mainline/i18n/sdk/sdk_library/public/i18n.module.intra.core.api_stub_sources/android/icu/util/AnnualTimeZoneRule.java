/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html
/*
 *******************************************************************************
 * Copyright (C) 2007-2010, International Business Machines Corporation and    *
 * others. All Rights Reserved.                                                *
 *******************************************************************************
 */

package android.icu.util;


/**
 * <code>AnnualTimeZoneRule</code> is a class used for representing a time zone
 * rule which takes effect annually.  Years used in this class are
 * all Gregorian calendar years.
 *
 * @hide Only a subset of ICU is exposed in Android
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public class AnnualTimeZoneRule extends android.icu.util.TimeZoneRule {

AnnualTimeZoneRule() { throw new RuntimeException("Stub!"); }

/**
 * Gets the start date/time rule associated used by this rule.
 *
 * @return  An <code>AnnualDateTimeRule</code> which represents the start date/time
 *          rule used by this time zone rule.
 */

public android.icu.util.DateTimeRule getRule() { throw new RuntimeException("Stub!"); }

/**
 * Gets the end year when this rule takes effect.
 *
 * @return  The end year of this rule (inclusive). The year is in Gregorian calendar
 *          with 0 == 1 BCE, -1 == 2 BCE, etc.
 */

public int getEndYear() { throw new RuntimeException("Stub!"); }

/**
 * Returns a <code>String</code> representation of this <code>AnnualTimeZoneRule</code> object.
 * This method is used for debugging purpose only.  The string representation can be changed
 * in future version of ICU without any notice.
 */

public java.lang.String toString() { throw new RuntimeException("Stub!"); }

/**
 * The constant representing the maximum year used for designating a rule is permanent.
 */

public static final int MAX_YEAR = 2147483647; // 0x7fffffff
}

