from math import floor
def solve():
    n,m,a,b = map(int,input().split())
    t = [n*a,floor(n/m)*b + (n%m)*a,floor(n/m)*b + b]
    t.sort()
    return t[0] 

print(solve())
