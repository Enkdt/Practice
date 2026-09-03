#https://olimpiada.ic.unicamp.br/pratique/ps/2020/f2/formiga/
#Approach foi a seguinte:

#Macro
lol = lambda x: list(map(int,x.split()))
paths = {}
#Conditions
a = lol(input())
#Heights
b = lol(input())

#Defining all paths as empty beforehand
for i in range(1,a[0]+1):
    paths[i] = [];

#Conn inputs, defines where the conn is added 
#by taking height in consideration
for i in range(a[1]):
    c = lol(input())
    if b[c[0]-1] < b[c[1]-1]:
        paths[c[1]].append(c[0])
    if b[c[1]-1] < b[c[0]-1]:
        paths[c[0]].append(c[1])

#Memoization array
memoShi = {}

def dfs(num):
    if num in memoShi: #if alr in memo, just return it (max value alr calcd)
        return memoShi[num]
    if not paths[num]: #empty array, dead end
        memoShi[num] = 0
    else: #if has child, add to memoization shi getting best path from it (max part)
        memoShi[num] = 1 + max(dfs(e) for e in paths[num])
    return memoShi[num]

#starts the dfs using the given number and returns that shit
print(dfs(a[2]))

