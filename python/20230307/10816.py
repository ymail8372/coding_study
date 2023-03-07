from sys import stdin

N = int(stdin.readline())
N_cards = list(map(int, stdin.readline().split()))

M = int(stdin.readline())
M_cards = list(map(int, stdin.readline().split()))

nums = {}
for i in range(N) :
	if N_cards[i] in nums :
		nums[N_cards[i]] += 1
	else :
		nums[N_cards[i]] = 1
		
for i in M_cards :
	if i in nums :
		print(nums[i])
	else :
		print(0)
