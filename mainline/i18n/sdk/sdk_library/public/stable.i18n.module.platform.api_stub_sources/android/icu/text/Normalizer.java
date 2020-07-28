/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *******************************************************************************
 * Copyright (C) 2000-2016, International Business Machines Corporation and
 * others. All Rights Reserved.
 *******************************************************************************
 */

package android.icu.text;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class Normalizer implements java.lang.Cloneable {

Normalizer() { throw new RuntimeException("Stub!"); }

@Deprecated
public java.lang.Object clone() { throw new RuntimeException("Stub!"); }

public static int compare(char[] s1, int s1Start, int s1Limit, char[] s2, int s2Start, int s2Limit, int options) { throw new RuntimeException("Stub!"); }

public static int compare(java.lang.String s1, java.lang.String s2, int options) { throw new RuntimeException("Stub!"); }

public static int compare(char[] s1, char[] s2, int options) { throw new RuntimeException("Stub!"); }

public static int compare(int char32a, int char32b, int options) { throw new RuntimeException("Stub!"); }

public static int compare(int char32a, java.lang.String str2, int options) { throw new RuntimeException("Stub!"); }

public static final int COMPARE_CODE_POINT_ORDER = 32768; // 0x8000

public static final int COMPARE_IGNORE_CASE = 65536; // 0x10000

public static final int FOLD_CASE_DEFAULT = 0; // 0x0

public static final int FOLD_CASE_EXCLUDE_SPECIAL_I = 1; // 0x1

public static final int INPUT_IS_FCD = 131072; // 0x20000

public static final android.icu.text.Normalizer.QuickCheckResult MAYBE;
static { MAYBE = null; }

public static final android.icu.text.Normalizer.QuickCheckResult NO;
static { NO = null; }

public static final android.icu.text.Normalizer.QuickCheckResult YES;
static { YES = null; }
@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class QuickCheckResult {

private QuickCheckResult() { throw new RuntimeException("Stub!"); }
}

}

