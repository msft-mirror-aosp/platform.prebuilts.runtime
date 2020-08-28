/* GENERATED SOURCE. DO NOT MODIFY. */
/*
 * Copyright (C) 2011 The Android Open Source Project
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


package com.android.org.conscrypt;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public class TrustedCertificateStore implements com.android.org.conscrypt.ConscryptCertStore {

public TrustedCertificateStore() { throw new RuntimeException("Stub!"); }

public static final boolean isUser(java.lang.String alias) { throw new RuntimeException("Stub!"); }

public static void setDefaultUserDirectory(java.io.File root) { throw new RuntimeException("Stub!"); }

public java.security.cert.Certificate getCertificate(java.lang.String alias) { throw new RuntimeException("Stub!"); }

public java.security.cert.Certificate getCertificate(java.lang.String alias, boolean includeDeletedSystem) { throw new RuntimeException("Stub!"); }

public java.util.Date getCreationDate(java.lang.String alias) { throw new RuntimeException("Stub!"); }

public java.util.Set<java.lang.String> aliases() { throw new RuntimeException("Stub!"); }

public java.util.Set<java.lang.String> userAliases() { throw new RuntimeException("Stub!"); }

public java.util.Set<java.lang.String> allSystemAliases() { throw new RuntimeException("Stub!"); }

public boolean containsAlias(java.lang.String alias) { throw new RuntimeException("Stub!"); }

public java.lang.String getCertificateAlias(java.security.cert.Certificate c) { throw new RuntimeException("Stub!"); }

public java.lang.String getCertificateAlias(java.security.cert.Certificate c, boolean includeDeletedSystem) { throw new RuntimeException("Stub!"); }

public boolean isUserAddedCertificate(java.security.cert.X509Certificate cert) { throw new RuntimeException("Stub!"); }

public java.io.File getCertificateFile(java.io.File dir, java.security.cert.X509Certificate x) { throw new RuntimeException("Stub!"); }

public java.security.cert.X509Certificate getTrustAnchor(java.security.cert.X509Certificate c) { throw new RuntimeException("Stub!"); }

public java.security.cert.X509Certificate findIssuer(java.security.cert.X509Certificate c) { throw new RuntimeException("Stub!"); }

public java.util.Set<java.security.cert.X509Certificate> findAllIssuers(java.security.cert.X509Certificate c) { throw new RuntimeException("Stub!"); }

public java.util.List<java.security.cert.X509Certificate> getCertificateChain(java.security.cert.X509Certificate leaf) throws java.security.cert.CertificateException { throw new RuntimeException("Stub!"); }

public void installCertificate(java.security.cert.X509Certificate cert) throws java.security.cert.CertificateException, java.io.IOException { throw new RuntimeException("Stub!"); }

public void deleteCertificateEntry(java.lang.String alias) throws java.security.cert.CertificateException, java.io.IOException { throw new RuntimeException("Stub!"); }
}

