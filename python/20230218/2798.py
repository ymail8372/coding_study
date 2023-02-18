from itertools import combinations

N, M = map(int, input().split())
cards = input().split()

max = 0
case = list(combinations(cards, 3))

for i in range(len(case)) :
	sum = 0
	sum = int(case[i][0]) + int(case[i][1]) + int(case[i][2])

	if sum > M :
		continue
	elif sum > max :
		max = sum

print(max)