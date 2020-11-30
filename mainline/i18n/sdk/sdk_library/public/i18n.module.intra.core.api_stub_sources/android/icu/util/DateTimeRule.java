/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *******************************************************************************
 * Copyright (C) 2007-2010, International Business Machines Corporation and    *
 * others. All Rights Reserved.                                                *
 *******************************************************************************
 */

package android.icu.util;


/**
 * <code>DateTimeRule</code> is a class representing a time in a year by
 * a rule specified by month, day of month, day of week and
 * time in the day.
 *
 * @hide Only a subset of ICU is exposed in Android
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public class DateTimeRule implements java.io.Serializable {

DateTimeRule() { throw new RuntimeException("Stub!"); }

/**
 * Gets the date rule type, such as <code>DOM</code>
 *
 * @return The date rule type.
 */

public int getDateRuleType() { throw new RuntimeException("Stub!"); }

/**
 * Gets the rule month.
 *
 * @return The rule month.
 */

public int getRuleMonth() { throw new RuntimeException("Stub!"); }

/**
 * Gets the rule day of month.  When the date rule type
 * is <code>DOW</code>, the value is always 0.
 *
 * @return The rule day of month
 */

public int getRuleDayOfMonth() { throw new RuntimeException("Stub!"); }

/**
 * Gets the rule day of week.  When the date rule type
 * is <code>DOM</code>, the value is always 0.
 *
 * @return The rule day of week.
 */

public int getRuleDayOfWeek() { throw new RuntimeException("Stub!"); }

/**
 * Gets the time rule type
 *
 * @return The time rule type, either <code>WALL_TIME</code> or <code>STANDARD_TIME</code>
 *         or <code>UTC_TIME</code>.
 */

public int getTimeRuleType() { throw new RuntimeException("Stub!"); }

/**
 * Gets the rule time in the rule day.
 *
 * @return The time in the rule day in milliseconds.
 */

public int getRuleMillisInDay() { throw new RuntimeException("Stub!"); }

/**
 * Returns a <code>String</code> representation of this <code>DateTimeRule</code> object.
 * This method is used for debugging purpose only.  The string representation can be changed
 * in future version of ICU without any notice.
 */

public java.lang.String toString() { throw new RuntimeException("Stub!"); }

/**
 * Date rule type defined by exact day of month.
 * For example, March 14.
 */

public static final int DOM = 0; // 0x0

/**
 * Date rule type defined by day of week in month.
 * For example, 2nd Sunday in March.
 */

public static final int DOW = 1; // 0x1

/**
 * Date rule type defined by first day of week on or
 * after exact day of month.
 * For example, 1st Monday on or after March 15.
 */

public static final int DOW_GEQ_DOM = 2; // 0x2

/**
 * Date rule type defined by last day of week on or
 * before exact day of month.
 * For example, last Saturday on or before March 15.
 */

public static final int DOW_LEQ_DOM = 3; // 0x3

/**
 * Time rule type for local standard time.
 */

public static final int STANDARD_TIME = 1; // 0x1

/**
 * Time rule type for coordinated universal time.
 */

public static final int UTC_TIME = 2; // 0x2

/**
 * Time rule type for local wall time.
 */

public static final int WALL_TIME = 0; // 0x0
}

