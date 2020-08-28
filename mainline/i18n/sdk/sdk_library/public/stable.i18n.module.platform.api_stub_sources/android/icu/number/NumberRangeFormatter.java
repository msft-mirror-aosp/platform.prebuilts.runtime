/* GENERATED SOURCE. DO NOT MODIFY. */
// ? 2018 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License

package android.icu.number;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public abstract class NumberRangeFormatter {

private NumberRangeFormatter() { throw new RuntimeException("Stub!"); }

public static android.icu.number.UnlocalizedNumberRangeFormatter with() { throw new RuntimeException("Stub!"); }

public static android.icu.number.LocalizedNumberRangeFormatter withLocale(java.util.Locale locale) { throw new RuntimeException("Stub!"); }

public static android.icu.number.LocalizedNumberRangeFormatter withLocale(android.icu.util.ULocale locale) { throw new RuntimeException("Stub!"); }
@SuppressWarnings({"unchecked", "deprecation", "all"})
public enum RangeCollapse {
AUTO,
NONE,
UNIT,
ALL;
}

@SuppressWarnings({"unchecked", "deprecation", "all"})
public enum RangeIdentityFallback {
SINGLE_VALUE,
APPROXIMATELY_OR_SINGLE_VALUE,
APPROXIMATELY,
RANGE;
}

@SuppressWarnings({"unchecked", "deprecation", "all"})
public enum RangeIdentityResult {
EQUAL_BEFORE_ROUNDING,
EQUAL_AFTER_ROUNDING,
NOT_EQUAL;
}

}

