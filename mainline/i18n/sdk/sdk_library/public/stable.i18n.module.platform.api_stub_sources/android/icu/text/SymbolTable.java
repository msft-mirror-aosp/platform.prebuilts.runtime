/* GENERATED SOURCE. DO NOT MODIFY. */
// ? 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *******************************************************************************
 * Copyright (C) 1996-2005, International Business Machines Corporation and    *
 * others. All Rights Reserved.                                                *
 *******************************************************************************
 */

package android.icu.text;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public interface SymbolTable {

public char[] lookup(java.lang.String s);

public android.icu.text.UnicodeMatcher lookupMatcher(int ch);

public java.lang.String parseReference(java.lang.String text, java.text.ParsePosition pos, int limit);

public static final char SYMBOL_REF = 36; // 0x0024 '$'
}

