str = input()
alphabat = []

for i in range(26) :
	alphabat.append(-1)

for i in range(len(str)) :
	if alphabat[ord(str[i])-97] == -1 :
		alphabat[ord(str[i])-97] = i

for i in range(25) :
	print(alphabat[i], end=' ')

print(alphabat[25])
