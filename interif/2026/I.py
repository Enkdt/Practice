x = input()
y = ''
for i in range(len(x)):
    if x[i] == 'p' and x[i] == x[i+1]:
        pass
    elif x[i] == 'p':
        continue
    y+=x[i]

print(y)
