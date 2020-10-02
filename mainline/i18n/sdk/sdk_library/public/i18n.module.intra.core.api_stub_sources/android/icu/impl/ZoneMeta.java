/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
**********************************************************************
* Copyright (c) 2003-2016 International Business Machines
* Corporation and others.  All Rights Reserved.
**********************************************************************
* Author: Alan Liu
* Created: September 4 2003
* Since: ICU 2.8
**********************************************************************
*/

package android.icu.impl;


/**
 * This class, not to be instantiated, implements the meta-data
 * missing from the underlying core JDK implementation of time zones.
 * There are two missing features: Obtaining a list of available zones
 * for a given country (as defined by the Olson database), and
 * obtaining a list of equivalent zones for a given zone (as defined
 * by Olson links).
 *
 * This class uses a data class, ZoneMetaData, which is created by the
 * tool tz2icu.
 *
 * @author Alan Liu
 * @hide Only a subset of ICU is exposed in Android
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class ZoneMeta {

ZoneMeta() { throw new RuntimeException("Stub!"); }

/**
 * Return the canonical id for this tzid defined by CLDR, which might be
 * the id itself. If the given tzid is not known, return null.
 *
 * Note: This internal API supports all known system IDs and "Etc/Unknown" (which is
 * NOT a system ID).
 */

public static java.lang.String getCanonicalCLDRID(java.lang.String tzid) { throw new RuntimeException("Stub!"); }
}

