/* GENERATED SOURCE. DO NOT MODIFY. */
// ? 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/**
*******************************************************************************
* Copyright (C) 1996-2016, International Business Machines Corporation and
* others. All Rights Reserved.
*******************************************************************************
*/

package android.icu.text;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public abstract class Collator implements java.util.Comparator<java.lang.Object>, android.icu.util.Freezable<android.icu.text.Collator>, java.lang.Cloneable {

protected Collator() { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object obj) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

public void setStrength(int newStrength) { throw new RuntimeException("Stub!"); }

public void setDecomposition(int decomposition) { throw new RuntimeException("Stub!"); }

public void setReorderCodes(int... order) { throw new RuntimeException("Stub!"); }

public static final android.icu.text.Collator getInstance() { throw new RuntimeException("Stub!"); }

public java.lang.Object clone() throws java.lang.CloneNotSupportedException { throw new RuntimeException("Stub!"); }

public static final android.icu.text.Collator getInstance(android.icu.util.ULocale locale) { throw new RuntimeException("Stub!"); }

public static final android.icu.text.Collator getInstance(java.util.Locale locale) { throw new RuntimeException("Stub!"); }

public static java.util.Locale[] getAvailableLocales() { throw new RuntimeException("Stub!"); }

public static final android.icu.util.ULocale[] getAvailableULocales() { throw new RuntimeException("Stub!"); }

public static final java.lang.String[] getKeywords() { throw new RuntimeException("Stub!"); }

public static final java.lang.String[] getKeywordValues(java.lang.String keyword) { throw new RuntimeException("Stub!"); }

public static final java.lang.String[] getKeywordValuesForLocale(java.lang.String key, android.icu.util.ULocale locale, boolean commonlyUsed) { throw new RuntimeException("Stub!"); }

public static final android.icu.util.ULocale getFunctionalEquivalent(java.lang.String keyword, android.icu.util.ULocale locID, boolean[] isAvailable) { throw new RuntimeException("Stub!"); }

public static final android.icu.util.ULocale getFunctionalEquivalent(java.lang.String keyword, android.icu.util.ULocale locID) { throw new RuntimeException("Stub!"); }

public static java.lang.String getDisplayName(java.util.Locale objectLocale, java.util.Locale displayLocale) { throw new RuntimeException("Stub!"); }

public static java.lang.String getDisplayName(android.icu.util.ULocale objectLocale, android.icu.util.ULocale displayLocale) { throw new RuntimeException("Stub!"); }

public static java.lang.String getDisplayName(java.util.Locale objectLocale) { throw new RuntimeException("Stub!"); }

public static java.lang.String getDisplayName(android.icu.util.ULocale objectLocale) { throw new RuntimeException("Stub!"); }

public int getStrength() { throw new RuntimeException("Stub!"); }

public int getDecomposition() { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.String source, java.lang.String target) { throw new RuntimeException("Stub!"); }

public android.icu.text.UnicodeSet getTailoredSet() { throw new RuntimeException("Stub!"); }

public abstract int compare(java.lang.String source, java.lang.String target);

public int compare(java.lang.Object source, java.lang.Object target) { throw new RuntimeException("Stub!"); }

public abstract android.icu.text.CollationKey getCollationKey(java.lang.String source);

public android.icu.text.Collator setMaxVariable(int group) { throw new RuntimeException("Stub!"); }

public int getMaxVariable() { throw new RuntimeException("Stub!"); }

public abstract int getVariableTop();

public abstract android.icu.util.VersionInfo getVersion();

public abstract android.icu.util.VersionInfo getUCAVersion();

public int[] getReorderCodes() { throw new RuntimeException("Stub!"); }

public static int[] getEquivalentReorderCodes(int reorderCode) { throw new RuntimeException("Stub!"); }

public boolean isFrozen() { throw new RuntimeException("Stub!"); }

public android.icu.text.Collator freeze() { throw new RuntimeException("Stub!"); }

public android.icu.text.Collator cloneAsThawed() { throw new RuntimeException("Stub!"); }

public static final int CANONICAL_DECOMPOSITION = 17; // 0x11

public static final int FULL_DECOMPOSITION = 15; // 0xf

public static final int IDENTICAL = 15; // 0xf

public static final int NO_DECOMPOSITION = 16; // 0x10

public static final int PRIMARY = 0; // 0x0

public static final int QUATERNARY = 3; // 0x3

public static final int SECONDARY = 1; // 0x1

public static final int TERTIARY = 2; // 0x2
@SuppressWarnings({"unchecked", "deprecation", "all"})
public static interface ReorderCodes {

public static final int CURRENCY = 4099; // 0x1003

public static final int DEFAULT = -1; // 0xffffffff

public static final int DIGIT = 4100; // 0x1004

public static final int FIRST = 4096; // 0x1000

public static final int NONE = 103; // 0x67

public static final int OTHERS = 103; // 0x67

public static final int PUNCTUATION = 4097; // 0x1001

public static final int SPACE = 4096; // 0x1000

public static final int SYMBOL = 4098; // 0x1002
}

}

