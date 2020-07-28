/* GENERATED SOURCE. DO NOT MODIFY. */
// © 2016 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License
/*
*******************************************************************************
*   Copyright (C) 2001-2016, International Business Machines
*   Corporation and others.  All Rights Reserved.
*******************************************************************************
*/

/* FOOD FOR THOUGHT: currently the reordering modes are a mixture of
 * algorithm for direct BiDi, algorithm for inverse Bidi and the bizarre
 * concept of RUNS_ONLY which is a double operation.
 * It could be advantageous to divide this into 3 concepts:
 * a) Operation: direct / inverse / RUNS_ONLY
 * b) Direct algorithm: default / NUMBERS_SPECIAL / GROUP_NUMBERS_WITH_L
 * c) Inverse algorithm: default / INVERSE_LIKE_DIRECT / NUMBERS_SPECIAL
 * This would allow combinations not possible today like RUNS_ONLY with
 * NUMBERS_SPECIAL.
 * Also allow to set INSERT_MARKS for the direct step of RUNS_ONLY and
 * REMOVE_CONTROLS for the inverse step.
 * Not all combinations would be supported, and probably not all do make sense.
 * This would need to document which ones are supported and what are the
 * fallbacks for unsupported combinations.
 */

//TODO: make sample program do something simple but real and complete


package android.icu.text;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public class Bidi {

public Bidi() { throw new RuntimeException("Stub!"); }

public Bidi(int maxLength, int maxRunCount) { throw new RuntimeException("Stub!"); }

public Bidi(java.lang.String paragraph, int flags) { throw new RuntimeException("Stub!"); }

public Bidi(java.text.AttributedCharacterIterator paragraph) { throw new RuntimeException("Stub!"); }

public Bidi(char[] text, int textStart, byte[] embeddings, int embStart, int paragraphLength, int flags) { throw new RuntimeException("Stub!"); }

public void setInverse(boolean isInverse) { throw new RuntimeException("Stub!"); }

public boolean isInverse() { throw new RuntimeException("Stub!"); }

public void setReorderingMode(int reorderingMode) { throw new RuntimeException("Stub!"); }

public int getReorderingMode() { throw new RuntimeException("Stub!"); }

public void setReorderingOptions(int options) { throw new RuntimeException("Stub!"); }

public int getReorderingOptions() { throw new RuntimeException("Stub!"); }

public static byte getBaseDirection(java.lang.CharSequence paragraph) { throw new RuntimeException("Stub!"); }

public void setContext(java.lang.String prologue, java.lang.String epilogue) { throw new RuntimeException("Stub!"); }

public void setPara(java.lang.String text, byte paraLevel, byte[] embeddingLevels) { throw new RuntimeException("Stub!"); }

public void setPara(char[] chars, byte paraLevel, byte[] embeddingLevels) { throw new RuntimeException("Stub!"); }

public void setPara(java.text.AttributedCharacterIterator paragraph) { throw new RuntimeException("Stub!"); }

public void orderParagraphsLTR(boolean ordarParaLTR) { throw new RuntimeException("Stub!"); }

public boolean isOrderParagraphsLTR() { throw new RuntimeException("Stub!"); }

public byte getDirection() { throw new RuntimeException("Stub!"); }

public java.lang.String getTextAsString() { throw new RuntimeException("Stub!"); }

public char[] getText() { throw new RuntimeException("Stub!"); }

public int getLength() { throw new RuntimeException("Stub!"); }

public int getProcessedLength() { throw new RuntimeException("Stub!"); }

public int getResultLength() { throw new RuntimeException("Stub!"); }

public byte getParaLevel() { throw new RuntimeException("Stub!"); }

public int countParagraphs() { throw new RuntimeException("Stub!"); }

public android.icu.text.BidiRun getParagraphByIndex(int paraIndex) { throw new RuntimeException("Stub!"); }

public android.icu.text.BidiRun getParagraph(int charIndex) { throw new RuntimeException("Stub!"); }

public int getParagraphIndex(int charIndex) { throw new RuntimeException("Stub!"); }

public void setCustomClassifier(android.icu.text.BidiClassifier classifier) { throw new RuntimeException("Stub!"); }

public android.icu.text.BidiClassifier getCustomClassifier() { throw new RuntimeException("Stub!"); }

public int getCustomizedClass(int c) { throw new RuntimeException("Stub!"); }

public android.icu.text.Bidi setLine(int start, int limit) { throw new RuntimeException("Stub!"); }

public byte getLevelAt(int charIndex) { throw new RuntimeException("Stub!"); }

public byte[] getLevels() { throw new RuntimeException("Stub!"); }

public android.icu.text.BidiRun getLogicalRun(int logicalPosition) { throw new RuntimeException("Stub!"); }

public int countRuns() { throw new RuntimeException("Stub!"); }

public android.icu.text.BidiRun getVisualRun(int runIndex) { throw new RuntimeException("Stub!"); }

public int getVisualIndex(int logicalIndex) { throw new RuntimeException("Stub!"); }

public int getLogicalIndex(int visualIndex) { throw new RuntimeException("Stub!"); }

public int[] getLogicalMap() { throw new RuntimeException("Stub!"); }

public int[] getVisualMap() { throw new RuntimeException("Stub!"); }

public static int[] reorderLogical(byte[] levels) { throw new RuntimeException("Stub!"); }

public static int[] reorderVisual(byte[] levels) { throw new RuntimeException("Stub!"); }

public static int[] invertMap(int[] srcMap) { throw new RuntimeException("Stub!"); }

public android.icu.text.Bidi createLineBidi(int lineStart, int lineLimit) { throw new RuntimeException("Stub!"); }

public boolean isMixed() { throw new RuntimeException("Stub!"); }

public boolean isLeftToRight() { throw new RuntimeException("Stub!"); }

public boolean isRightToLeft() { throw new RuntimeException("Stub!"); }

public boolean baseIsLeftToRight() { throw new RuntimeException("Stub!"); }

public int getBaseLevel() { throw new RuntimeException("Stub!"); }

public int getRunCount() { throw new RuntimeException("Stub!"); }

public int getRunLevel(int run) { throw new RuntimeException("Stub!"); }

public int getRunStart(int run) { throw new RuntimeException("Stub!"); }

public int getRunLimit(int run) { throw new RuntimeException("Stub!"); }

public static boolean requiresBidi(char[] text, int start, int limit) { throw new RuntimeException("Stub!"); }

public static void reorderVisually(byte[] levels, int levelStart, java.lang.Object[] objects, int objectStart, int count) { throw new RuntimeException("Stub!"); }

public java.lang.String writeReordered(int options) { throw new RuntimeException("Stub!"); }

public static java.lang.String writeReverse(java.lang.String src, int options) { throw new RuntimeException("Stub!"); }

public static final int DIRECTION_DEFAULT_LEFT_TO_RIGHT = 126; // 0x7e

public static final int DIRECTION_DEFAULT_RIGHT_TO_LEFT = 127; // 0x7f

public static final int DIRECTION_LEFT_TO_RIGHT = 0; // 0x0

public static final int DIRECTION_RIGHT_TO_LEFT = 1; // 0x1

public static final short DO_MIRRORING = 2; // 0x2

public static final short INSERT_LRM_FOR_NUMERIC = 4; // 0x4

public static final short KEEP_BASE_COMBINING = 1; // 0x1

public static final byte LEVEL_DEFAULT_LTR = 126; // 0x7e

public static final byte LEVEL_DEFAULT_RTL = 127; // 0x7f

public static final byte LEVEL_OVERRIDE = -128; // 0xffffff80

public static final byte LTR = 0; // 0x0

public static final int MAP_NOWHERE = -1; // 0xffffffff

public static final byte MAX_EXPLICIT_LEVEL = 125; // 0x7d

public static final byte MIXED = 2; // 0x2

public static final byte NEUTRAL = 3; // 0x3

public static final int OPTION_DEFAULT = 0; // 0x0

public static final int OPTION_INSERT_MARKS = 1; // 0x1

public static final int OPTION_REMOVE_CONTROLS = 2; // 0x2

public static final int OPTION_STREAMING = 4; // 0x4

public static final short OUTPUT_REVERSE = 16; // 0x10

public static final short REMOVE_BIDI_CONTROLS = 8; // 0x8

public static final short REORDER_DEFAULT = 0; // 0x0

public static final short REORDER_GROUP_NUMBERS_WITH_R = 2; // 0x2

public static final short REORDER_INVERSE_FOR_NUMBERS_SPECIAL = 6; // 0x6

public static final short REORDER_INVERSE_LIKE_DIRECT = 5; // 0x5

public static final short REORDER_INVERSE_NUMBERS_AS_L = 4; // 0x4

public static final short REORDER_NUMBERS_SPECIAL = 1; // 0x1

public static final short REORDER_RUNS_ONLY = 3; // 0x3

public static final byte RTL = 1; // 0x1
}

