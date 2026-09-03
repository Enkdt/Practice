z =''
a = input().split("+")
a.sort()
for i,e in enumerate(a):
    if i != 0:
        z+= '+'
    z+= e

print(z)
