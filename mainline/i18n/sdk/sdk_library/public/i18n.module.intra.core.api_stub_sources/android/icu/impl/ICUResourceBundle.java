/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
 * *****************************************************************************
 * Copyright (C) 2005-2016, International Business Machines Corporation and
 * others. All Rights Reserved.
 * *****************************************************************************
 */


package android.icu.impl;

import android.icu.util.UResourceBundle;
import java.util.MissingResourceException;

/**
 * @hide Only a subset of ICU is exposed in Android
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public class ICUResourceBundle extends android.icu.util.UResourceBundle {

ICUResourceBundle() { throw new RuntimeException("Stub!"); }

/**
 * This method performs multilevel fallback for fetching items from the
 * bundle e.g: If resource is in the form de__PHONEBOOK{ collations{
 * default{ "phonebook"} } } If the value of "default" key needs to be
 * accessed, then do: <code>
 *  UResourceBundle bundle = UResourceBundle.getBundleInstance("de__PHONEBOOK");
 *  ICUResourceBundle result = null;
 *  if(bundle instanceof ICUResourceBundle){
 *      result = ((ICUResourceBundle) bundle).getWithFallback("collations/default");
 *  }
 * </code>
 *
 * @param path The path to the required resource key
 * @return resource represented by the key
 * @exception MissingResourceException If a resource was not found.
 */

public android.icu.impl.ICUResourceBundle getWithFallback(java.lang.String path) throws java.util.MissingResourceException { throw new RuntimeException("Stub!"); }

public java.lang.String getStringWithFallback(java.lang.String path) throws java.util.MissingResourceException { throw new RuntimeException("Stub!"); }

/**
 * Returns the locale of this resource bundle. This method can be used after
 * a call to getBundle() to determine whether the resource bundle returned
 * really corresponds to the requested locale or is a fallback.
 *
 * @return the locale of this resource bundle
 */

public java.util.Locale getLocale() { throw new RuntimeException("Stub!"); }

public boolean equals(java.lang.Object other) { throw new RuntimeException("Stub!"); }

public int hashCode() { throw new RuntimeException("Stub!"); }

protected void setParent(java.util.ResourceBundle parent) { throw new RuntimeException("Stub!"); }
}

