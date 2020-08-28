/* GENERATED SOURCE. DO NOT MODIFY. */
// ? 2017 and later: Unicode, Inc. and others.
// License & terms of use: http://www.unicode.org/copyright.html#License

package android.icu.text;

@SuppressWarnings({"unchecked", "deprecation", "all"})
public final class Edits {

public Edits() { throw new RuntimeException("Stub!"); }

public void reset() { throw new RuntimeException("Stub!"); }

public void addUnchanged(int unchangedLength) { throw new RuntimeException("Stub!"); }

public void addReplace(int oldLength, int newLength) { throw new RuntimeException("Stub!"); }

public int lengthDelta() { throw new RuntimeException("Stub!"); }

public boolean hasChanges() { throw new RuntimeException("Stub!"); }

public int numberOfChanges() { throw new RuntimeException("Stub!"); }

public android.icu.text.Edits.Iterator getCoarseChangesIterator() { throw new RuntimeException("Stub!"); }

public android.icu.text.Edits.Iterator getCoarseIterator() { throw new RuntimeException("Stub!"); }

public android.icu.text.Edits.Iterator getFineChangesIterator() { throw new RuntimeException("Stub!"); }

public android.icu.text.Edits.Iterator getFineIterator() { throw new RuntimeException("Stub!"); }

public android.icu.text.Edits mergeAndAppend(android.icu.text.Edits ab, android.icu.text.Edits bc) { throw new RuntimeException("Stub!"); }
@SuppressWarnings({"unchecked", "deprecation", "all"})
public static final class Iterator {

private Iterator() { throw new RuntimeException("Stub!"); }

public boolean next() { throw new RuntimeException("Stub!"); }

public boolean findSourceIndex(int i) { throw new RuntimeException("Stub!"); }

public boolean findDestinationIndex(int i) { throw new RuntimeException("Stub!"); }

public int destinationIndexFromSourceIndex(int i) { throw new RuntimeException("Stub!"); }

public int sourceIndexFromDestinationIndex(int i) { throw new RuntimeException("Stub!"); }

public boolean hasChange() { throw new RuntimeException("Stub!"); }

public int oldLength() { throw new RuntimeException("Stub!"); }

public int newLength() { throw new RuntimeException("Stub!"); }

public int sourceIndex() { throw new RuntimeException("Stub!"); }

public int replacementIndex() { throw new RuntimeException("Stub!"); }

public int destinationIndex() { throw new RuntimeException("Stub!"); }

public java.lang.String toString() { throw new RuntimeException("Stub!"); }
}

}

