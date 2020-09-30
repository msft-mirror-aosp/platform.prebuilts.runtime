/*
 * Copyright (C) 2019 The Android Open Source Project
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


package com.android.icu.util.regex;


@SuppressWarnings({"unchecked", "deprecation", "all"})
public class MatcherNative {

private MatcherNative() { throw new RuntimeException("Stub!"); }

public static com.android.icu.util.regex.MatcherNative create(com.android.icu.util.regex.PatternNative pattern) { throw new RuntimeException("Stub!"); }

public int getMatchedGroupIndex(java.lang.String groupName) { throw new RuntimeException("Stub!"); }

public boolean find(int startIndex, int[] offsets) { throw new RuntimeException("Stub!"); }

public boolean findNext(int[] offsets) { throw new RuntimeException("Stub!"); }

public int groupCount() { throw new RuntimeException("Stub!"); }

public boolean hitEnd() { throw new RuntimeException("Stub!"); }

public boolean lookingAt(int[] offsets) { throw new RuntimeException("Stub!"); }

public boolean matches(int[] offsets) { throw new RuntimeException("Stub!"); }

public boolean requireEnd() { throw new RuntimeException("Stub!"); }

public void setInput(java.lang.String input, int start, int end) { throw new RuntimeException("Stub!"); }

public void useAnchoringBounds(boolean value) { throw new RuntimeException("Stub!"); }

public void useTransparentBounds(boolean value) { throw new RuntimeException("Stub!"); }
}

