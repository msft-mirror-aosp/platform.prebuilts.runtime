/*
 * Copyright (C) 2018 The Android Open Source Project
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


package android.net.ssl;

import javax.net.ssl.SSLEngine;

/**
 * Static utility methods for accessing additional functionality of supported instances of
 * {@link SSLEngine}.  Engines from the platform TLS provider will be compatible with all
 * methods in this class.
 */

@SuppressWarnings({"unchecked", "deprecation", "all"})
public class SSLEngines {

private SSLEngines() { throw new RuntimeException("Stub!"); }

/**
 * Returns whether the given engine can be used with the methods in this class.  In general,
 * only engines from the platform TLS provider are supported.
 */

public static boolean isSupportedEngine(javax.net.ssl.SSLEngine engine) { throw new RuntimeException("Stub!"); }

/**
 * Enables or disables the use of session tickets.
 *
 * <p>This function must be called before the handshake is started or it will have no effect.
 *
 * @param engine the engine
 * @param useSessionTickets whether to enable or disable the use of session tickets
 * @throws IllegalArgumentException if the given engine is not a platform engine
 */

public static void setUseSessionTickets(javax.net.ssl.SSLEngine engine, boolean useSessionTickets) { throw new RuntimeException("Stub!"); }
}

