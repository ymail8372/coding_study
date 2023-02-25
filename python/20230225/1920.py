import sys

N = int(input())
N_nums = list(map(int, sys.stdin.readline().split()))
M = int(input())
M_nums = list(map(int, sys.stdin.readline().split()))
result = []

for i in range(M) :
	check = 0

	for j in range(len(N_nums)) :
		if N_nums[j] == M_nums[i] :
			N_nums.pop(j)
			check = 1
			print(1)
			break

	if check == 0 :
		print(0)