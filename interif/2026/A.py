nSel = int(input())
nCat = int(input())

#Hardcode to change array and make prio sorting easier
conv = {'P':1,'V':2,'S':3,'G':4}
prio = [conv[x] for x in input().split()]

aSel = []
for _ in range(nSel):
    time = list(input().split())
    #Isso aqui salva em vez de fazer int lambda no aSel.sort(key=lambda x:int(x[b]),reverse=True)
    time[1:] = map(int, time[1:])
    aSel.append(time)

aSel.sort(key=lambda x:x[0])
d = len(prio)-1

for _ in range(len(prio)):
    b = prio[d]
    aSel.sort(key=lambda x:x[b],reverse=True)
    d-=1

for i,e in enumerate(aSel):
    #O join vai juntar cada elemento da array, com os ' ' separando eles
    #print(f'{i+1} {' '.join(map(str,e))}')
    #Esse *e desempacota a lista, aí nem precisa do enum
    print(i+1, *e)

