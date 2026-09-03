while True:
    try:
        #0 - N minas, 1 N conexoes, 2 Mina ativada
        n = input().split()
    #Handelar tanto ctrl+c quanto ctrl+d/z
    except (EOFError, KeyboardInterrupt):
        break

    dMine = {str(i+1):'f ' for i in range(int(n[0]))}
    dMine[n[2]] = dMine[n[2]].replace('f','t')
    sA = [n[2]]
    passed = [n[2]]

    for i in range(int(n[1])):
        st,con = input().split()
        if not con in dMine[st]:
            dMine[st] += f'{con} '
        if not st in dMine[con]:
            dMine[con] += f'{st} '

    def explode(s):
        a = list(dMine[s].split())
        for i in a[1:]:
            if 'f' in dMine[i]:
                dMine[i] = dMine[i].replace('f','t')
                sA.append(i)
        for e in a[1:]:
            if e not in passed:
                passed.append(e)
                explode(e)

    explode(n[2])
    print('\n'.join(sA))
