from math import ceil
a = [int(input()) for _ in range(3)]
a[0] -= a[1]
a[0] /= a[2]
print(ceil(a[0]))
