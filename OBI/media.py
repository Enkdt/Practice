def solve():
    a,b = map(int,input().split(" "))
    a *= 2
    c = a - b
    if a >= b:
        abs(c)
    return c

print(solve())

