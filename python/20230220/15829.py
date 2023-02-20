L = int(input())

sequence = input()

sum = 0
for i in range(L) :
	sum += (ord(sequence[i])-96) * 31**i

H = sum % 1234567891

print(H)