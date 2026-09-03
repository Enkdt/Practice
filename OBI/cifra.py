from string import ascii_lowercase as al

alphabet = list(al)
alphabet.pop(24)
alphabet.pop(22)
alphaPos = {c:i for i,c in enumerate(alphabet)}
vowels = ['a','e','i','o','u']
conson = [i for i in alphabet if i not in vowels]
consonPos = {c:i for i,c in enumerate(conson)}

def solve():
    x = input().lower()
    if len(x) > 30:
        return False, None
    out = ''
    for letter in x:
        if letter not in alphabet:
            return False, None
        out+=letter
        if letter == 'z':
            out+='uz'
        elif letter in conson:
            i = alphaPos[letter]
            j = i
            iTrue = False
            jTrue = False
            while not iTrue and not jTrue:
                if i<len(alphabet)-1:i+=1
                if j>=0:j-=1 
                iTrue = False if alphabet[i] not in vowels else True
                jTrue = False if alphabet[j] not in vowels else True
            if jTrue and iTrue:
                if j<=i:
                    out+=alphabet[j]
            else:
                if jTrue:
                    out+=alphabet[j]
                if iTrue:
                    out+=alphabet[i]
            i = consonPos[letter]
            if i < len(conson)-1: out+=conson[i+1]
        else: 
            continue
    return True, out

Ver, otp = solve()
if Ver:
    print(otp)


