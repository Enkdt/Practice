#Idade irmãs
#ar = [val for _ in range(3) if 5<=(val:= int(input()))<=100]
#ar.sort()
#print(ar[1])

#Idade mônica
ar = [int(input()) for _ in range(3)]
ar.append(ar[0] - (ar[1]+ar[2]))
ar.sort()
print(ar[2])
