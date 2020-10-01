/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *******************************************************************************
 * Copyright (C) 2009-2015, International Business Machines Corporation and    *
 * others. All Rights Reserved.                                                *
 *******************************************************************************
 */

package android.icu.text;

import java.util.Date;

/**
 * Provides information about currencies that is not specific to a locale.
 *
 * A note about currency dates.  The CLDR data provides data to the day,
 * inclusive.  The date information used by CurrencyInfo and CurrencyFilter
 * is represented by milliseconds, which is overly precise.  These times are
 * in GMT, so queries involving dates should use GMT times, but more generally
 * you should avoid relying on time of day in queries.
 *
 * This class is not intended for public subclassing.
 *
 * @hide Only a subset of ICU is exposed in Android
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public class CurrencyMetaInfo {

CurrencyMetaInfo() { throw new RuntimeException("Stub!"); }

/**
 * Returns the unique instance of the currency meta info.
 * @return the meta info
 */

public static android.icu.text.CurrencyMetaInfo getInstance() { throw new RuntimeException("Stub!"); }

/**
 * Returns the list of currency codes matching the provided filter.
 * Results are ordered as in {@link #currencyInfo(CurrencyFilter)}.
 * The returned list is unmodifiable.
 * @param filter the filter to control which currencies to return.  If filter is null,
 * returns all currencies for which information is available.
 * @return the matching currency codes
 */

public java.util.List<java.lang.String> currencies(android.icu.text.CurrencyMetaInfo.CurrencyFilter filter) { throw new RuntimeException("Stub!"); }
/**
 * A filter used to select which currency info is returned.
 * @hide Only a subset of ICU is exposed in Android
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class CurrencyFilter {

private CurrencyFilter() { throw new RuntimeException("Stub!"); }

/**
 * Returns a filter that accepts all currencies ever used in the given region.
 * @param region the region code
 * @return a filter
 * @see #withRegion(String)
 */

public static android.icu.text.CurrencyMetaInfo.CurrencyFilter onRegion(java.lang.String region) { throw new RuntimeException("Stub!"); }

/**
 * Returns a copy of this filter, with from and to set to the given date.
 * @param date the date on which the currency must have been in use
 * @return the filter
 * @see #onDate(Date)
 */

public android.icu.text.CurrencyMetaInfo.CurrencyFilter withDate(java.util.Date date) { throw new RuntimeException("Stub!"); }

/**
 * {@inheritDoc}
 */

public boolean equals(java.lang.Object rhs) { throw new RuntimeException("Stub!"); }

/**
 * {@inheritDoc}
 */

public int hashCode() { throw new RuntimeException("Stub!"); }

/**
 * Returns a string representing the filter, for debugging.
 * @return A string representing the filter.
 */

public java.lang.String toString() { throw new RuntimeException("Stub!"); }
}

}

