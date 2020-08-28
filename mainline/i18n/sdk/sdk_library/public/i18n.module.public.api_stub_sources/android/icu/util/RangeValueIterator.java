/* GENERATED SOURCE. DO NOT MODIFY. */
// ? 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
******************************************************************************
* Copyright (C) 1996-2016, International Business Machines Corporation and   *
* others. All Rights Reserved.                                               *
******************************************************************************
*/


package android.icu.util;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public interface RangeValueIterator {

public boolean next(android.icu.util.RangeValueIterator.Element element);

public void reset();
@SuppressWarnings({"unchecked", "deprecation", "all"})
public static class Element {

public Element() { throw new RuntimeException("Stub!"); }

public int limit;

public int start;

public int value;
}

}

