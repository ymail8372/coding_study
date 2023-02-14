T = int(input())

for i in range(T) :
	P = ''
	R, S = input().split()
	R = int(R)

	for j in S :
		for k in range(R) :
			P += j

	print(P)
