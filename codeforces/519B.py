input()
a = list(map(int,input().split()))
b = list(map(int,input().split()))
c = list(map(int,input().split()))

a = sum(a)
b = sum(b)
c = sum(c)

a = a-b
b = b-c
print(a)
print(b)
