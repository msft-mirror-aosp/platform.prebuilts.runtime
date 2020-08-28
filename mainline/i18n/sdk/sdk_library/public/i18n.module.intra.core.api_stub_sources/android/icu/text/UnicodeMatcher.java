/* GENERATED SOURCE. DO NOT MODIFY. */
// ? 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *******************************************************************************
 * Copyright (C) 2001-2016, International Business Machines Corporation and    *
 * others. All Rights Reserved.                                                *
 *******************************************************************************
 */

package android.icu.text;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public interface UnicodeMatcher {

public int matches(android.icu.text.Replaceable text, int[] offset, int limit, boolean incremental);

public java.lang.String toPattern(boolean escapeUnprintable);

public boolean matchesIndexValue(int v);

public void addMatchSetTo(android.icu.text.UnicodeSet toUnionTo);

public static final char ETHER = 65535; // 0xffff '\uffff'

public static final int U_MATCH = 2; // 0x2

public static final int U_MISMATCH = 0; // 0x0

public static final int U_PARTIAL_MATCH = 1; // 0x1
}

