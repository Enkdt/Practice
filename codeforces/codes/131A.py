lower = 'abcdefghijklmnopqrstuvwxyz'
upper = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
x = list(input().split());
y = '';
for e in x:
    swap = True 
    for i in range(len(e)):
        if e[i] in lower and i!=0:
            swap = False
    if not swap:
        y+= e
    else:
        y+= e.swapcase()

print(y) 
