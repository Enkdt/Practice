import sys
from collections import Counter

punct = ["!","\"",".",",","?",":"]
a = sys.stdin.read().lower()

for e in punct:
    a = a.replace(e," ")

words = Counter(a.split())
# -x[1] = descending generally, x[0] = ascending when tie
words = sorted(words.items(),key = lambda x: (-x[1],x[0]))

prev = None
for w, c in words:
    if c != prev:
        if prev is not None:
            print()
        print(f"{c}: ", end="")
    print(w, end=" ")
    prev = c

