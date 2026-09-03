w = 0;
b = 0;
pieces = {"Q":9,"R":5,"B":3,"N":3,"P":1}
#Q = 9
#R = 5
#B,N = 3
#P = 1
#Ki = 0 
for i in range(8):
    a = input()
    for j in range(len(a)):
        if a[j] == '.' == 'K' == 'k':
            continue
        else:
            for p,v in pieces.items():
                if a[j] == p:
                    w += v;
                elif a[j] == p.lower():
                    b += v;
                else:
                    continue

print("White" if w > b else "Draw" if w == b else "Black")
