def quicksort(nums) :
	if len(nums) <= 1 :
		return 0

	pivot = nums[0]
	lower = []
	upper = []
	for i in range(1, len(nums)) :
		if nums[i] < pivot :
			lower.append(nums[i])
		else :
			upper.append(nums[i])

	quicksort()


N = int(input())

nums = []

for i in range(N) :
	nums.append(int(input()))

quicksort(nums, nums[0])

for i in range(N) :
	print(nums[i])