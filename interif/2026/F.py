def getInfo(dct,parent,i):
    a = dct[parent].split()
    return int(a[i]) 

def getChars(dct,key):
    try:
        return list(dct[key].split())
    except:
        return 0

def solve():
    trees = {}
    n = int(input())
    te = 0
    for _ in range(n):
        a,b = input().split()
        if not a in trees:
            #parent, name, gen, tree
            trees[a] = f'0 {a} 0 {te}'
            te +=1
        if not b in trees:
            x = getInfo(trees,a,2) + 1
            y = getInfo(trees,a,3)
            trees[b] = f'{a} {b} {x} {y}'
    n = list(input().split())
    x,y = getChars(trees,n[0]), getChars(trees,n[1])
    if x == 0 or y == 0:
        return 'PODEM CASAR'
    else:
        if x[3] != y[3]:
            return 'PODEM CASAR'
        elif abs(int(x[2])-int(y[2]))>int(n[2]):
            return 'PODEM CASAR'
        return 'NAO PODEM CASAR'

print(solve())
