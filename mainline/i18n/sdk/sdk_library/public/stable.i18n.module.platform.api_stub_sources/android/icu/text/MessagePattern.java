/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
*******************************************************************************
*   Copyright (C) 2010-2016, International Business Machines
*   Corporation and others.  All Rights Reserved.
*******************************************************************************
*   created on: 2010aug21
*   created by: Markus W. Scherer
*/


package android.icu.text;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class MessagePattern implements java.lang.Cloneable, android.icu.util.Freezable<android.icu.text.MessagePattern> {

public MessagePattern() { throw new RuntimeException("Stub!"); }

public MessagePattern(android.icu.text.MessagePattern.ApostropheMode mode) { throw new RuntimeException("Stub!"); }

public MessagePattern(java.lang.String pattern) { throw new RuntimeException("Stub!"); }

public android.icu.text.MessagePattern parse(java.lang.String pattern) { throw new RuntimeException("Stub!"); }

public android.icu.text.MessagePattern parseChoiceStyle(java.lang.String pattern) { throw new RuntimeException("Stub!"); }

public android.icu.text.MessagePattern parsePluralStyle(java.lang.String pattern) { throw new RuntimeException("Stub!"); }

public android.icu.text.MessagePattern parseSelectStyle(java.lang.String pattern) { throw new RuntimeException("Stub!"); }

public void clear() { throw new RuntimeException("Stub!"); }

public void clearPatternAndSetApostropheMode(android.icu.text.MessagePattern.ApostropheMode mode) { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object other) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

public android.icu.text.MessagePattern.ApostropheMode getApostropheMode() { throw new RuntimeException("Stub!"); }

public java.lang.String getPatternString() { throw new RuntimeException("Stub!"); }

public boolean hasNamedArguments() { throw new RuntimeException("Stub!"); }

public boolean hasNumberedArguments() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }

public static int validateArgumentName(java.lang.String name) { throw new RuntimeException("Stub!"); }

public java.lang.String autoQuoteApostropheDeep() { throw new RuntimeException("Stub!"); }

public int countParts() { throw new RuntimeException("Stub!"); }

public android.icu.text.MessagePattern.Part getPart(int i) { throw new RuntimeException("Stub!"); }

public android.icu.text.MessagePattern.Part.Type getPartType(int i) { throw new RuntimeException("Stub!"); }

public int getPatternIndex(int partIndex) { throw new RuntimeException("Stub!"); }

public java.lang.String getSubstring(android.icu.text.MessagePattern.Part part) { throw new RuntimeException("Stub!"); }

public boolean partSubstringMatches(android.icu.text.MessagePattern.Part part, java.lang.String s) { throw new RuntimeException("Stub!"); }

public double getNumericValue(android.icu.text.MessagePattern.Part part) { throw new RuntimeException("Stub!"); }

public double getPluralOffset(int pluralStart) { throw new RuntimeException("Stub!"); }

public int getLimitPartIndex(int start) { throw new RuntimeException("Stub!"); }

public java.lang.Object clone() { throw new RuntimeException("Stub!"); }

public android.icu.text.MessagePattern cloneAsThawed() { throw new RuntimeException("Stub!"); }

public android.icu.text.MessagePattern freeze() { throw new RuntimeException("Stub!"); }

public boolean isFrozen() { throw new RuntimeException("Stub!"); }

public static final int ARG_NAME_NOT_NUMBER = -1; // 0xffffffff

public static final int ARG_NAME_NOT_VALID = -2; // 0xfffffffe

public static final double NO_NUMERIC_VALUE = -1.23456789E8;
@SuppressWarnings({"unchecked", "deprecation", "all"})
public enum ApostropheMode {
DOUBLE_OPTIONAL,
DOUBLE_REQUIRED;
}

@SuppressWarnings({"unchecked", "deprecation", "all"})
public enum ArgType {
NONE,
SIMPLE,
CHOICE,
PLURAL,
SELECT,
SELECTORDINAL;

public boolean hasPluralStyle() { throw new RuntimeException("Stub!"); }
}

@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class Part {

private Part() { throw new RuntimeException("Stub!"); }

public android.icu.text.MessagePattern.Part.Type getType() { throw new RuntimeException("Stub!"); }

public int getIndex() { throw new RuntimeException("Stub!"); }

public int getLength() { throw new RuntimeException("Stub!"); }

public int getLimit() { throw new RuntimeException("Stub!"); }

public int getValue() { throw new RuntimeException("Stub!"); }

public android.icu.text.MessagePattern.ArgType getArgType() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object other) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }
@SuppressWarnings({"unchecked", "deprecation", "all"})
public enum Type {
MSG_START,
MSG_LIMIT,
SKIP_SYNTAX,
INSERT_CHAR,
REPLACE_NUMBER,
ARG_START,
ARG_LIMIT,
ARG_NUMBER,
ARG_NAME,
ARG_TYPE,
ARG_STYLE,
ARG_SELECTOR,
ARG_INT,
ARG_DOUBLE;

public boolean hasNumericValue() { throw new RuntimeException("Stub!"); }
}

}

}

