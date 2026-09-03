def solve():
    N = int(input())
    a = [int(input()) for _ in range(N)]
    a.sort(reverse=True)
    tSum = 0
    for i,e in enumerate(a):
        tSum += e
        if (i+1) % 3 == 0:
            tSum -=e

    return tSum

print(solve())
