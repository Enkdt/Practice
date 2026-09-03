x = input()
z = ''
for e in x:
    if e not in z:
        z+=e
if len(z) % 2 == 0:
    print('CHAT WITH HER!')
else:
    print('IGNORE HIM!')
