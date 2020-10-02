/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


package com.android.icu.util;

import java.util.Locale;
import libcore.api.IntraCoreApi;

/**
 * Used by java.util.Locale to access locale data in ICU4C.
 * java.util.Locale avoids using android.icu.util.ULocale to prevent circular runtime dependency.
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class LocaleNative {

public LocaleNative() { throw new RuntimeException("Stub!"); }

/**
 * Libcore's default locale is synchronized with the ICU4C's default locale. But libicu.so
 * does not expose uloc_setDefault via NDK because app can otherwise break this synchronization.
 * Instead, expose this uloc_setDefault as @IntraCoreApi called by libcore.
 */

public static void setDefault(java.lang.String languageTag) { throw new RuntimeException("Stub!"); }

public static java.lang.String getDisplayCountry(java.util.Locale targetLocale, java.util.Locale locale) { throw new RuntimeException("Stub!"); }

public static java.lang.String getDisplayLanguage(java.util.Locale targetLocale, java.util.Locale locale) { throw new RuntimeException("Stub!"); }

public static java.lang.String getDisplayVariant(java.util.Locale targetLocale, java.util.Locale locale) { throw new RuntimeException("Stub!"); }

public static java.lang.String getDisplayScript(java.util.Locale targetLocale, java.util.Locale locale) { throw new RuntimeException("Stub!"); }
}

