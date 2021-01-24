/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html
/*
 *******************************************************************************
 * Copyright (C) 2007-2014, International Business Machines Corporation and    *
 * others. All Rights Reserved.                                                *
 *******************************************************************************
 */

package android.icu.util;

import java.util.Date;

/**
 * <strong>[icu]</strong> BasicTimeZone extends <code>TimeZone</code> with additional methods to access
 * time zone transitions and rules.  All ICU <code>TimeZone</code> concrete subclasses
 * extend this class. APIs added to <code>java.util.TimeZone</code> by
 * <code>BasicTimeZone</code> are annotated with <strong>'<font
 * style="color:red">[icu]</font>'</strong>.
 *
 * @see android.icu.util.TimeZoneRule
 * @see android.icu.util.TimeZoneTransition
 *
 * @hide Only a subset of ICU is exposed in Android
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public abstract class BasicTimeZone extends android.icu.util.TimeZone {

BasicTimeZone() { throw new RuntimeException("Stub!"); }

/**
 * <strong>[icu]</strong> Returns the first time zone transition after the base time.
 * <p>Example code:{{@literal @}.jcite  android.icu.samples.util.timezone.BasicTimeZoneExample:---getNextTransitionExample}
 *
 * @param base      The base time.
 * @param inclusive Whether the base time is inclusive or not.
 *
 * @return  A <code>Date</code> holding the first time zone transition time
 *          after the given base time, or null if no time zone transitions
 *          are available after the base time.
 */

public abstract android.icu.util.TimeZoneTransition getNextTransition(long base, boolean inclusive);

/**
 * <strong>[icu]</strong> Returns the last time zone transition before the base time.
 * <p>Example code:{{@literal @}.jcite  android.icu.samples.util.timezone.BasicTimeZoneExample:---getPreviousTransitionExample}
 *
 * @param base      The base time.
 * @param inclusive Whether the base time is inclusive or not.
 *
 * @return  A <code>Date</code> holding the last time zone transition time
 *          before the given base time, or null if no time zone transitions
 *          are available before the base time.
 */

public abstract android.icu.util.TimeZoneTransition getPreviousTransition(long base, boolean inclusive);

/**
 * <strong>[icu]</strong> Returns the array of <code>TimeZoneRule</code> which represents the rule
 * of this time zone object.  The first element in the result array will
 * be the <code>InitialTimeZoneRule</code> instance for the initial rule.
 * The rest will be either <code>AnnualTimeZoneRule</code> or
 * <code>TimeArrayTimeZoneRule</code> instances representing transitions.
 *
 * @return  The array of <code>TimeZoneRule</code> which represents this
 *          time zone.
 */

public abstract android.icu.util.TimeZoneRule[] getTimeZoneRules();
}

