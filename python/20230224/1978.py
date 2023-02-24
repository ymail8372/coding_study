N = int(input())
nums = list(map(int, input().split()))
check = 0
prime_nums = []
for i in range(N) :
	if nums[i] == 1 :
		continue

	for j in range(2, nums[i]) :
		if nums[i] % j == 0 :
			check = 1
			break
		
	if check == 0 :
		prime_nums.append(nums[i])
	else :
		check = 0

print(len(prime_nums))