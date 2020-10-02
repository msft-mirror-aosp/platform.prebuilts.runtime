/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 *******************************************************************************
 * Copyright (C) 2004-2016, International Business Machines Corporation and
 * others. All Rights Reserved.
 *******************************************************************************
 */


package android.icu.util;

import java.util.ResourceBundle;
import java.util.MissingResourceException;

/**
 * <strong>[icu enhancement]</strong> ICU's replacement for {@link java.util.ResourceBundle}.&nbsp;Methods, fields, and other functionality specific to ICU are labeled '<strong>[icu]</strong>'.
 *
 * <p>A class representing a collection of resource information pertaining to a given
 * locale. A resource bundle provides a way of accessing locale- specific information in a
 * data file. You create a resource bundle that manages the resources for a given locale
 * and then ask it for individual resources.
 *
 * <p>In ResourceBundle, an object is created and the sub-items are fetched using the
 * getString and getObject methods.  In UResourceBundle, each individual element of a
 * resource is a resource by itself.
 *
 * <p>Resource bundles in ICU are currently defined using text files that conform to the
 * following <a
 * href="http://source.icu-project.org/repos/icu/icuhtml/trunk/design/bnf_rb.txt">BNF
 * definition</a>.  More on resource bundle concepts and syntax can be found in the <a
 * href="http://www.icu-project.org/userguide/ResourceManagement.html">Users Guide</a>.
 *
 * <p>The packaging of ICU *.res files can be of two types
 * ICU4C:
 * <pre>
 *       root.res
 *         |
 *      --------
 *     |        |
 *   fr.res  en.res
 *     |
 *   --------
 *  |        |
 * fr_CA.res fr_FR.res
 * </pre>
 * JAVA/JDK:
 * <pre>
 *    LocaleElements.res
 *         |
 *      -------------------
 *     |                   |
 * LocaleElements_fr.res  LocaleElements_en.res
 *     |
 *   ---------------------------
 *  |                            |
 * LocaleElements_fr_CA.res   LocaleElements_fr_FR.res
 * </pre>
 *
 * Depending on the organization of your resources, the syntax to getBundleInstance will
 * change.  To open ICU style organization use:
 *
 * <pre>
 *      UResourceBundle bundle =
 *          UResourceBundle.getBundleInstance("com/mycompany/resources",
 *                                            "en_US", myClassLoader);
 * </pre>
 * To open Java/JDK style organization use:
 * <pre>
 *      UResourceBundle bundle =
 *          UResourceBundle.getBundleInstance("com.mycompany.resources.LocaleElements",
 *                                            "en_US", myClassLoader);
 * </pre>
 *
 * <p>Note: Please use pass a class loader for loading non-ICU resources. Java security does not
 * allow loading of resources across jar files. You must provide your class loader
 * to load the resources
 
 * @author ram
 * @hide Only a subset of ICU is exposed in Android
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public abstract class UResourceBundle extends java.util.ResourceBundle {

/**
 * <strong>[icu]</strong> Sole constructor.  (For invocation by subclass constructors, typically
 * implicit.)  This is public for compatibility with Java, whose compiler
 * will generate public default constructors for an abstract class.
 */

public UResourceBundle() { throw new RuntimeException("Stub!"); }

/**
 * <strong>[icu]</strong> Creates a UResourceBundle for the specified locale and specified base name,
 * from which users can extract resources by using their corresponding keys.
 * @param baseName string containing the name of the data package.
 *                    If null the default ICU package name is used.
 * @param locale  specifies the locale for which we want to open the resource.
 *                If null the bundle for default locale is opened.
 * @return a resource bundle for the given base name and locale
 */

public static android.icu.util.UResourceBundle getBundleInstance(java.lang.String baseName, java.util.Locale locale) { throw new RuntimeException("Stub!"); }

/**
 * <strong>[icu]</strong> Creates a UResourceBundle, from which users can extract resources by using
 * their corresponding keys.
 * @param baseName string containing the name of the data package.
 *                    If null the default ICU package name is used.
 * @param locale  specifies the locale for which we want to open the resource.
 *                If null the bundle for default locale is opened.
 * @return a resource bundle for the given base name and locale
 */

public static android.icu.util.UResourceBundle getBundleInstance(java.lang.String baseName, android.icu.util.ULocale locale) { throw new RuntimeException("Stub!"); }

/**
 * Returns the locale of this bundle
 * @return the locale of this resource bundle
 */

public java.util.Locale getLocale() { throw new RuntimeException("Stub!"); }

/**
 * Returns a string from a string resource type
 *
 * @return a string
 * @see #getBinary()
 * @see #getIntVector
 * @see #getInt
 * @throws MissingResourceException If resource bundle is missing.
 * @throws UResourceTypeMismatchException If resource bundle has a type mismatch.
 */

public java.lang.String getString() { throw new RuntimeException("Stub!"); }

/**
 * Returns a string array from a array resource type
 *
 * @return a string
 * @see #getString()
 * @see #getIntVector
 * @throws MissingResourceException If resource bundle is missing.
 * @throws UResourceTypeMismatchException If resource bundle has a type mismatch.
 */

public java.lang.String[] getStringArray() { throw new RuntimeException("Stub!"); }

/**
 * Returns the string in a given resource at the specified index.
 *
 * @param index an index to the wanted string.
 * @return a string which lives in the resource.
 * @throws IndexOutOfBoundsException If the index value is out of bounds of accepted values.
 * @throws UResourceTypeMismatchException If resource bundle type mismatch.
 */

public java.lang.String getString(int index) { throw new RuntimeException("Stub!"); }

/**
 * <strong>[icu]</strong> Returns the resource in a given resource at the specified index.
 *
 * @param index an index to the wanted resource.
 * @return the sub resource UResourceBundle object
 * @throws IndexOutOfBoundsException If the index value is out of bounds of accepted values.
 * @throws MissingResourceException If the resource bundle is missing.
 */

public android.icu.util.UResourceBundle get(int index) { throw new RuntimeException("Stub!"); }

/**
 * Returns the keys in this bundle as an enumeration
 * @return an enumeration containing key strings,
 *         which is empty if this is not a bundle or a table resource
 */

public java.util.Enumeration<java.lang.String> getKeys() { throw new RuntimeException("Stub!"); }

/**
 * Returns a Set of all keys contained in this ResourceBundle and its parent bundles.
 * @return a Set of all keys contained in this ResourceBundle and its parent bundles,
 *         which is empty if this is not a bundle or a table resource
 * @deprecated This API is ICU internal only.
 * @hide draft / provisional / internal are hidden on Android
 */

@Deprecated
public java.util.Set<java.lang.String> keySet() { throw new RuntimeException("Stub!"); }

/**
 * Returns a Set of the keys contained <i>only</i> in this ResourceBundle.
 * This does not include further keys from parent bundles.
 * @return a Set of the keys contained only in this ResourceBundle,
 *         which is empty if this is not a bundle or a table resource
 * @deprecated This API is ICU internal only.
 * @hide draft / provisional / internal are hidden on Android
 */

@Deprecated
protected java.util.Set<java.lang.String> handleKeySet() { throw new RuntimeException("Stub!"); }

/**
 * <strong>[icu]</strong> Returns the type of a resource.
 * Available types are {@link #INT INT}, {@link #ARRAY ARRAY},
 * {@link #BINARY BINARY}, {@link #INT_VECTOR INT_VECTOR},
 * {@link #STRING STRING}, {@link #TABLE TABLE}.
 *
 * @return type of the given resource.
 */

public int getType() { throw new RuntimeException("Stub!"); }

/**
 * {@inheritDoc}
 */

protected java.lang.Object handleGetObject(java.lang.String aKey) { throw new RuntimeException("Stub!"); }

/**
 * <strong>[icu]</strong> Resource type constant for arrays of resources.
 */

public static final int ARRAY = 8; // 0x8

/**
 * <strong>[icu]</strong> Resource type constant for strings.
 */

public static final int STRING = 0; // 0x0
}

