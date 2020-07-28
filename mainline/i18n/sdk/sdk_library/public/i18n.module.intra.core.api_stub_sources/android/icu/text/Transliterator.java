/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *******************************************************************************
 * Copyright (C) 1996-2016, International Business Machines Corporation and
 * others. All Rights Reserved.
 *******************************************************************************
 */

package android.icu.text;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public abstract class Transliterator {

Transliterator() { throw new RuntimeException("Stub!"); }

public final int transliterate(android.icu.text.Replaceable text, int start, int limit) { throw new RuntimeException("Stub!"); }

public final void transliterate(android.icu.text.Replaceable text) { throw new RuntimeException("Stub!"); }

public final java.lang.String transliterate(java.lang.String text) { throw new RuntimeException("Stub!"); }

public final void transliterate(android.icu.text.Replaceable text, android.icu.text.Transliterator.Position index, java.lang.String insertion) { throw new RuntimeException("Stub!"); }

public final void transliterate(android.icu.text.Replaceable text, android.icu.text.Transliterator.Position index, int insertion) { throw new RuntimeException("Stub!"); }

public final void transliterate(android.icu.text.Replaceable text, android.icu.text.Transliterator.Position index) { throw new RuntimeException("Stub!"); }

public final void finishTransliteration(android.icu.text.Replaceable text, android.icu.text.Transliterator.Position index) { throw new RuntimeException("Stub!"); }

public void filteredTransliterate(android.icu.text.Replaceable text, android.icu.text.Transliterator.Position index, boolean incremental) { throw new RuntimeException("Stub!"); }

public final int getMaximumContextLength() { throw new RuntimeException("Stub!"); }

public final java.lang.String getID() { throw new RuntimeException("Stub!"); }

public static final java.lang.String getDisplayName(java.lang.String ID) { throw new RuntimeException("Stub!"); }

public static java.lang.String getDisplayName(java.lang.String id, java.util.Locale inLocale) { throw new RuntimeException("Stub!"); }

public static java.lang.String getDisplayName(java.lang.String id, android.icu.util.ULocale inLocale) { throw new RuntimeException("Stub!"); }

public final android.icu.text.UnicodeFilter getFilter() { throw new RuntimeException("Stub!"); }

public void setFilter(android.icu.text.UnicodeFilter filter) { throw new RuntimeException("Stub!"); }

public static final android.icu.text.Transliterator getInstance(java.lang.String ID) { throw new RuntimeException("Stub!"); }

public static android.icu.text.Transliterator getInstance(java.lang.String ID, int dir) { throw new RuntimeException("Stub!"); }

public static final android.icu.text.Transliterator createFromRules(java.lang.String ID, java.lang.String rules, int dir) { throw new RuntimeException("Stub!"); }

public java.lang.String toRules(boolean escapeUnprintable) { throw new RuntimeException("Stub!"); }

public android.icu.text.Transliterator[] getElements() { throw new RuntimeException("Stub!"); }

public final android.icu.text.UnicodeSet getSourceSet() { throw new RuntimeException("Stub!"); }

public android.icu.text.UnicodeSet getTargetSet() { throw new RuntimeException("Stub!"); }

public final android.icu.text.Transliterator getInverse() { throw new RuntimeException("Stub!"); }

public static final java.util.Enumeration<java.lang.String> getAvailableIDs() { throw new RuntimeException("Stub!"); }

public static final java.util.Enumeration<java.lang.String> getAvailableSources() { throw new RuntimeException("Stub!"); }

public static final java.util.Enumeration<java.lang.String> getAvailableTargets(java.lang.String source) { throw new RuntimeException("Stub!"); }

public static final java.util.Enumeration<java.lang.String> getAvailableVariants(java.lang.String source, java.lang.String target) { throw new RuntimeException("Stub!"); }

public static final int FORWARD = 0; // 0x0

public static final int REVERSE = 1; // 0x1
@SuppressWarnings({"unchecked", "deprecation", "all"})
public static class Position {

public Position() { throw new RuntimeException("Stub!"); }

public Position(int contextStart, int contextLimit, int start) { throw new RuntimeException("Stub!"); }

public Position(int contextStart, int contextLimit, int start, int limit) { throw new RuntimeException("Stub!"); }

public Position(android.icu.text.Transliterator.Position pos) { throw new RuntimeException("Stub!"); }

public void set(android.icu.text.Transliterator.Position pos) { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object obj) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }

public final void validate(int length) { throw new RuntimeException("Stub!"); }

public int contextLimit;

public int contextStart;

public int limit;

public int start;
}

}

