n = int(input())
for i in range(n):
    a = list(map(int,input().split()))
    a.sort()
    print(min(a[2]-a[1], a[1] - a[0]))
