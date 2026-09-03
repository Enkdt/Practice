from math import ceil
def solve():
    a,b = map(int,input().split())
    c = ceil(a/2);
    if b > c:
        c = (b-c)*2
        return c
    else:
        c = b*2-1
        return c

print(solve())
