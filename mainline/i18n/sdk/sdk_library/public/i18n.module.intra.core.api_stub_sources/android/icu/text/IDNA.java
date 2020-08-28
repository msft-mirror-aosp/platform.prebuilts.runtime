/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *******************************************************************************
 * Copyright (C) 2003-2016, International Business Machines Corporation and    *
 * others. All Rights Reserved.                                                *
 *******************************************************************************
 */


package android.icu.text;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public abstract class IDNA {

IDNA() { throw new RuntimeException("Stub!"); }

public static android.icu.text.IDNA getUTS46Instance(int options) { throw new RuntimeException("Stub!"); }

public abstract java.lang.StringBuilder labelToASCII(java.lang.CharSequence label, java.lang.StringBuilder dest, android.icu.text.IDNA.Info info);

public abstract java.lang.StringBuilder labelToUnicode(java.lang.CharSequence label, java.lang.StringBuilder dest, android.icu.text.IDNA.Info info);

public abstract java.lang.StringBuilder nameToASCII(java.lang.CharSequence name, java.lang.StringBuilder dest, android.icu.text.IDNA.Info info);

public abstract java.lang.StringBuilder nameToUnicode(java.lang.CharSequence name, java.lang.StringBuilder dest, android.icu.text.IDNA.Info info);

@Deprecated
public static java.lang.StringBuffer convertIDNToASCII(java.lang.String src, int options) throws android.icu.text.StringPrepParseException { throw new RuntimeException("Stub!"); }

@Deprecated
public static java.lang.StringBuffer convertIDNToUnicode(java.lang.String src, int options) throws android.icu.text.StringPrepParseException { throw new RuntimeException("Stub!"); }

public static final int CHECK_BIDI = 4; // 0x4

public static final int CHECK_CONTEXTJ = 8; // 0x8

public static final int CHECK_CONTEXTO = 64; // 0x40

public static final int DEFAULT = 0; // 0x0

public static final int NONTRANSITIONAL_TO_ASCII = 16; // 0x10

public static final int NONTRANSITIONAL_TO_UNICODE = 32; // 0x20

public static final int USE_STD3_RULES = 2; // 0x2
@SuppressWarnings({"unchecked", "deprecation", "all"})
public enum Error {
EMPTY_LABEL,
LABEL_TOO_LONG,
DOMAIN_NAME_TOO_LONG,
LEADING_HYPHEN,
TRAILING_HYPHEN,
HYPHEN_3_4,
LEADING_COMBINING_MARK,
DISALLOWED,
PUNYCODE,
LABEL_HAS_DOT,
INVALID_ACE_LABEL,
BIDI,
CONTEXTJ,
CONTEXTO_PUNCTUATION,
CONTEXTO_DIGITS;
}

@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class Info {

public Info() { throw new RuntimeException("Stub!"); }

public boolean hasErrors() { throw new RuntimeException("Stub!"); }

public java.util.Set<android.icu.text.IDNA.Error> getErrors() { throw new RuntimeException("Stub!"); }

public boolean isTransitionalDifferent() { throw new RuntimeException("Stub!"); }
}

}

