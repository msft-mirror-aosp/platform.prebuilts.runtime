/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2017 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License

package android.icu.impl.number;


/**
 * @hide Only a subset of ICU is exposed in Android
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public class DecimalFormatProperties implements java.lang.Cloneable, java.io.Serializable {

DecimalFormatProperties() { throw new RuntimeException("Stub!"); }

/** Creates and returns a shallow copy of the property bag. */

public android.icu.impl.number.DecimalFormatProperties clone() { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object other) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }
/** Controls the set of rules for parsing a string from the old DecimalFormat API. 
 * @hide Only a subset of ICU is exposed in Android*/

@SuppressWarnings({"unchecked", "deprecation", "all"})
public enum ParseMode {
/**
 * Internal parse mode for increased compatibility with java.text.DecimalFormat.
 * Used by Android libcore. To enable this feature, java.text.DecimalFormat holds an instance of
 * ICU4J's DecimalFormat and enable it by calling setParseStrictMode(ParseMode.COMPATIBILITY).
 */

JAVA_COMPATIBILITY;
}

}

