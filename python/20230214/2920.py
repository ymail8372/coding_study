nums = list(map(int, input().split()))

check = 0
for i in range(8) :
	if nums[i] != i+1 :
		check = 1
		break

if check == 0 :
	print("ascending")
	exit()

check = 0
for i in range(7, -1, -1) :
	if nums[7-i] != i+1 :
		check = 1
		break

if check == 0 :
	print("descending")
	exit()

print("mixed")
