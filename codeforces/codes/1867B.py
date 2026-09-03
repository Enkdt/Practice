def aplin(x):
    a = []
    j = len(x);
    for i in range(int((len(x)/2))):
        j-=1
        if x[i] == x[j]:
            continue;
        a.append(i)
    return a


def solve():
    a = int(input())
    b = input()
    x = len(aplin(b))
    s = x*"0"
    for i in range(x,(a-x+1)):
        if a%2==0:
            if x%2!=0:
                s+=("1" if i%2!=0 else "0")
            else:
                s+=("1" if i%2==0 else "0")
        else:
            s+="1";
    s += x*"0"
    return s

n = int(input());
for i in range(n):
    print(solve())
