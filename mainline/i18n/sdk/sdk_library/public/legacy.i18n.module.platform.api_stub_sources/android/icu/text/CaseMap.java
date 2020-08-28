/* GENERATED SOURCE. DO NOT MODIFY. */
// ? 2017 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License

package android.icu.text;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public abstract class CaseMap {

private CaseMap() { throw new RuntimeException("Stub!"); }

public static android.icu.text.CaseMap.Lower toLower() { throw new RuntimeException("Stub!"); }

public static android.icu.text.CaseMap.Upper toUpper() { throw new RuntimeException("Stub!"); }

public static android.icu.text.CaseMap.Title toTitle() { throw new RuntimeException("Stub!"); }

public static android.icu.text.CaseMap.Fold fold() { throw new RuntimeException("Stub!"); }

public abstract android.icu.text.CaseMap omitUnchangedText();
@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class Fold extends android.icu.text.CaseMap {

private Fold() { throw new RuntimeException("Stub!"); }

public android.icu.text.CaseMap.Fold omitUnchangedText() { throw new RuntimeException("Stub!"); }

public android.icu.text.CaseMap.Fold turkic() { throw new RuntimeException("Stub!"); }

public java.lang.String apply(java.lang.CharSequence src) { throw new RuntimeException("Stub!"); }

public <A extends java.lang.Appendable> A apply(java.lang.CharSequence src, A dest, android.icu.text.Edits edits) { throw new RuntimeException("Stub!"); }
}

@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class Lower extends android.icu.text.CaseMap {

private Lower() { throw new RuntimeException("Stub!"); }

public android.icu.text.CaseMap.Lower omitUnchangedText() { throw new RuntimeException("Stub!"); }

public java.lang.String apply(java.util.Locale locale, java.lang.CharSequence src) { throw new RuntimeException("Stub!"); }

public <A extends java.lang.Appendable> A apply(java.util.Locale locale, java.lang.CharSequence src, A dest, android.icu.text.Edits edits) { throw new RuntimeException("Stub!"); }
}

@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class Title extends android.icu.text.CaseMap {

private Title() { throw new RuntimeException("Stub!"); }

public android.icu.text.CaseMap.Title wholeString() { throw new RuntimeException("Stub!"); }

public android.icu.text.CaseMap.Title sentences() { throw new RuntimeException("Stub!"); }

public android.icu.text.CaseMap.Title omitUnchangedText() { throw new RuntimeException("Stub!"); }

public android.icu.text.CaseMap.Title noLowercase() { throw new RuntimeException("Stub!"); }

public android.icu.text.CaseMap.Title noBreakAdjustment() { throw new RuntimeException("Stub!"); }

public android.icu.text.CaseMap.Title adjustToCased() { throw new RuntimeException("Stub!"); }

public java.lang.String apply(java.util.Locale locale, android.icu.text.BreakIterator iter, java.lang.CharSequence src) { throw new RuntimeException("Stub!"); }

public <A extends java.lang.Appendable> A apply(java.util.Locale locale, android.icu.text.BreakIterator iter, java.lang.CharSequence src, A dest, android.icu.text.Edits edits) { throw new RuntimeException("Stub!"); }
}

@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class Upper extends android.icu.text.CaseMap {

private Upper() { throw new RuntimeException("Stub!"); }

public android.icu.text.CaseMap.Upper omitUnchangedText() { throw new RuntimeException("Stub!"); }

public java.lang.String apply(java.util.Locale locale, java.lang.CharSequence src) { throw new RuntimeException("Stub!"); }

public <A extends java.lang.Appendable> A apply(java.util.Locale locale, java.lang.CharSequence src, A dest, android.icu.text.Edits edits) { throw new RuntimeException("Stub!"); }
}

}

