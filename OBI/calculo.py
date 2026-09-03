def solve():
    a = [int(input()) for _ in range(3)]
    counter = 0
    for i in range(a[1],a[2]+1):
        digits = [int(j) for j in str(i)]
        lSum = 0;
        for j in digits:
            lSum+= j
        if lSum == a[0]:
            counter+=1
    return counter

print(solve())
