/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *******************************************************************************
 * Copyright (C) 2016, International Business Machines Corporation and
 * others. All Rights Reserved.
 *******************************************************************************
 */

package android.icu.impl;

import java.lang.ref.Reference;
import java.lang.ref.SoftReference;

/**
 * Value type for cache items:
 * Holds a value either via a direct reference or via a {@link Reference},
 * depending on the current "strength" when {@code getInstance()} was called.
 *
 * <p>The value is <i>conceptually<i> immutable.
 * If it is held via a direct reference, then it is actually immutable.
 *
 * <p>A {@code Reference} may be cleared (garbage-collected),
 * after which {@code get()} returns null.
 * It can then be reset via {@code resetIfAbsent()}.
 * The new value should be the same as, or equivalent to, the old value.
 *
 * <p>Null values are supported. They can be distinguished from cleared values
 * via {@code isNull()}.
 *
 * @param <V> Cache instance value type
 * @hide Only a subset of ICU is exposed in Android
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public abstract class CacheValue<V> {

CacheValue() { throw new RuntimeException("Stub!"); }

/**
 * Changes the "strength" of value references for subsequent {@code getInstance()} calls.
 */

public static void setStrength(android.icu.impl.CacheValue.Strength strength) { throw new RuntimeException("Stub!"); }
/**
 * "Strength" of holding a value in CacheValue instances.
 * The default strength is {@code SOFT}.
 * @hide Only a subset of ICU is exposed in Android
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public enum Strength {
/**
 * Subsequent {@code getInstance()}-created objects
 * will hold direct references to their values.
 */

STRONG,
/**
 * Subsequent {@code getInstance()}-created objects
 * will hold {@link SoftReference}s to their values.
 */

SOFT;
}

}

