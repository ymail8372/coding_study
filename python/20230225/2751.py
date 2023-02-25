# import sys

# def partition(nums, start, end) :
# 	pivot = start
# 	i = start+1
# 	j = end
# 	while i < j :
# 		while nums[i] < nums[pivot] and i < j :
# 			i += 1
		
# 		while nums[j] > nums[pivot] and j >= i :
# 			j -= 1

# 		if i < j :
# 			nums[i], nums[j] = nums[j], nums[i]

# 	if nums[pivot] > nums[j] :
# 		nums[pivot], nums[j] = nums[j], nums[pivot]
# 	pivot = j

# 	return pivot

# def quicksort(nums, start, end) :
# 	if start < end :
# 		pivot = partition(nums, start, end)
# 		quicksort(nums, start, pivot-1)
# 		quicksort(nums, pivot+1, end)

# #-------------------------------------------
# N = int(sys.stdin.readline())
# nums = []
# for i in range(N) :
# 	nums.append(int(sys.stdin.readline()))

# quicksort(nums, 0, N-1)

# for i in range(N) :
# 	print(nums[i])

import sys

N = int(input())

nums = []
for i in range(N) :
    nums.append(int(sys.stdin.readline()))
    
nums.sort()

for i in range(N) :
    print(nums[i])