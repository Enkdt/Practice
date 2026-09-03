def solve():
    sDict = {}
    ifCnt = 1
    ifPr = 0
    N,M = map(int, input().split(' '))
    for i in range(N):
        sDict[i+1] = f'{i+1} 0'
    
    iFr, iRn = map(int,input().split(' '))

    for i in range(M):
        ifPr = False
        a = list(map(int,input().split(' ')))
        if i+1 < iRn:
            continue
        a.pop(0)
        for e in a:
            if e == iFr:
                sDict[e] = f'{e} 1'
                ifPr = True
            else:
                pass
            if sDict[e].split(' ')[1] == '1':
                ifPr = True
        if ifPr:
            for e in a:
                if sDict[e].split(' ')[1] == '0':
                    sDict[e] = f'{e} 1'
                    ifCnt += 1
    return ifCnt

print(solve())
            
            

