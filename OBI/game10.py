def solve():
    counter = 0
    a = [int(input()) for _ in range(3)]
    while a[2] != a[1]:
        if a[2] == a[0]:
            a[2]= 0
        else:
            a[2]+=1
            counter+=1
    return counter

print(solve())
