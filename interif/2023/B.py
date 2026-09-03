def saborMax(a):
    a = list(a.split(' '))
    tMax = 100**10
    stre = ''
    for e in a:
        x = e.split(':')
        if len(x) == 3:
            tMs = int(x[0])*60000 + int(x[1])*1000 + int(x[2])
            if tMs <= tMax:
                tMax = tMs
                stre = e
    return tMax, stre

n = list(map(int,input().split(' ')))
names = []
times = {}
b = []
j = 0

for i in range(n[0]):
    stri = input()
    names.append(stri)
    x = stri[:3].upper()
    times[x] = ''

for i in range(n[1]):
   a = list(input().split(' '))
   times[a[0].upper()] += a[1].replace('.',':') + ' '

for i in range(n[2]):
    a = list(input().split(' '))
    a[1] = a[1].replace('.',':')
    x = a[0].upper()
    times[x] = times[x].replace(a[1],"")

for e in times:
    a = list(saborMax(times[e]))
    a.append(names[j])
    b.append(a)
    j+=1

b.sort(key=lambda x:x[0])

for i,e in enumerate(b):
    print(f'{i+1} {e[2]} {e[1]}')
