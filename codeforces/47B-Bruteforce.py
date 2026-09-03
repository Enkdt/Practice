def solve():
    a = [input() for _ in range(3)]
    #This ugly asf, but i'm lazy
    for e,i in enumerate(a):
        if i[0] == 'C':
            if i[2] == 'A':
                if i[1] == '<':
                    a[e] = 'A>C'
                else:
                    a[e] = 'A<C'
            elif i[2] == 'B':
                if i[1] == '<':
                    a[e] = 'B>C'
                else:
                    a[e] = 'B<C'
        elif i[0] == 'B':
            if i[2] == 'A':
                if i[1] == '<':
                    a[e] = 'A>B'
                else:
                    a[e] = 'A<B'

    a.sort(key=lambda x:x[2])
    a.sort(key=lambda x:x[0])

    if a[0][1] == '<':
        if a[1][1] == '<':
            if a[2][1] == '<':
                return 'ABC'
            else:
                return 'ACB'
        else:
            if a[2][1] == '<':
                return 'Impossible'
            else:
                return 'CAB'
    elif a[0][1] == '>':
        if a[1][1] == '<':
            if a[2][1] == '<':
                return 'BAC'
            else:
                return 'Impossible'
        else:
            if a[2][1] == '<':
                return 'BCA'
            else:
                return 'CBA'
    else:
        return 'Impossible'

print(solve())

