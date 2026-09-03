d = {i:chr(i) for i in range(97,123)}

n = int(input())
for i in range(n):
    a = input()
    for n,l in d.items():
        a = a.replace(str(n),l)
    print(a)
