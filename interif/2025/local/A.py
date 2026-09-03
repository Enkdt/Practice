def solve():
    n = int(input())
    a = []
    cnt,j = 0,0

    for i in range(n):
        a.append(int(input()))

    a.sort(reverse=True)

    s = int(input())
    
    while s > 0 and j<=len(a)-1:
        while a[j] <= s:
            s -= a[j]
            cnt+=1
        else:
            j+=1
    if s > 0:
        return 'frustraka'
    return cnt

print(solve())
