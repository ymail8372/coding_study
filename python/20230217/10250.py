T = int(input())

for i in range(T) :
	H, W, N = map(int, input().split())
	
	ho = (N-1) // H + 1
	floor = (N-1) % H + 1
	
	if floor == 0 :
		floor = H

	if ho < 10 :
		ho = '0' + str(ho)

	room = str(floor) + str(ho)

	print(room)
