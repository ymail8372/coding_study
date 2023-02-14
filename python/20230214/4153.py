while True :
	temp = list(map(int, input().split()))
	temp.sort()
	x, y, z = temp

	if x == 0 & y == 0 & z == 0 :
		exit()

	if x ** 2 + y ** 2 == z ** 2 :
		print("right")
	else :
		print("wrong")
