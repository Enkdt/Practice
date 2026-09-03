input();

a = list(map(int,input().split()))
a.sort(reverse=True)
tot = 0
for e in a:
    nBin = str(bin(e)[2:])
    tot += int(nBin)

tot = str(tot)
print(tot)
a = len(tot)-1;
i = 0
j = 0
l = ""
print("chave: ", sep="")
while(a>=0):
    i += int(tot[j])*2**a
    l += (f"{tot[j]}*2^{a}+" if tot[j]!='0' else f"")
    print(tot[j])
    a-=1
    j+=1

l = l[:len(l)-1] + "=" + str(i)
print(l)
