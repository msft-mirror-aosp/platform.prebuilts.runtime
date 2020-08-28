/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *******************************************************************************
 * Copyright (C) 1996-2016, International Business Machines Corporation and    *
 * others. All Rights Reserved.                                                *
 *******************************************************************************
 */

package android.icu.text;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public interface Replaceable {

public int length();

public char charAt(int offset);

public int char32At(int offset);

public void getChars(int srcStart, int srcLimit, char[] dst, int dstStart);

public void replace(int start, int limit, java.lang.String text);

public void replace(int start, int limit, char[] chars, int charsStart, int charsLen);

public void copy(int start, int limit, int dest);

public boolean hasMetaData();
}

