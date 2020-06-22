/* GENERATED SOURCE. DO NOT MODIFY. */
// ? 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 ******************************************************************************
 * Copyright (C) 2005-2016, International Business Machines Corporation and    *
 * others. All Rights Reserved.                                               *
 ******************************************************************************
*/

package android.icu.util;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public interface Freezable<T> extends java.lang.Cloneable {

public boolean isFrozen();

public T freeze();

public T cloneAsThawed();
}

