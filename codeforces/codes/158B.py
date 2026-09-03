input()
b = {"1":0,"2":0,"3":0,"4":0}
c = input().split()
tC = 0

for e in c:
    b[e] +=1;

while b['4'] > 0:
    b['4'] -=1
    tC +=1

while b['3'] > 0:
    if b['1'] >0:
        b['1'] -=1
    b['3'] -=1
    tC +=1

while b['2'] > 0:
    if b['2'] > 1:
        b['2'] -=2
        tC+=1
    elif b['1'] >= 1:
        b['2'] -=1
        b['1'] -= b['1'] if (b['1'] < 2) else 2
        tC+=1
    else:
        b['2']-=1
        tC+=1

while b['1'] > 0:
    if b['1'] < 4:
        b['1'] -= b['1']
    else:
        b['1'] -=4
    tC+=1;

print(tC)
