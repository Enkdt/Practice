#Resolução usada, otimização usando dict >:) (rodou em Tmax de 0,047)

def solve():
    solveDict = {}
    counter = 0
    n = int(input())
    for _ in range(n):
        key, side = map(str,input().split(' '))
        #print(f"key {key} side {side}")
        if key not in solveDict:
            solveDict[key] = [0,0]
        if side == 'D': 
            if solveDict[key][1] > 0:
                solveDict[key][1] -=1
                counter+=1
            else:
                solveDict[key][0] +=1
        elif side == 'E':
            if solveDict[key][0] > 0:
                solveDict[key][0] -=1
                counter+=1
            else:
                solveDict[key][1] +=1
    return counter

print(solve())
