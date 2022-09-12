from math import *

loop = int(input())

for i in range(loop) :
	x1, y1, r1, x2, y2, r2 = input().split()
	x1 = int(x1)
	y1 = int(y1)
	r1 = int(r1)
	x2 = int(x2)
	y2 = int(y2)
	r2 = int(r2)

	dis_of_turret = sqrt((x1-x2)**2 + (y1-y2)**2)
	sum_of_dis_of_target = r1 + r2

	if dis_of_turret == 0 and r1 == r2 :
		print(-1)
	elif (dis_of_turret < sum_of_dis_of_target and dis_of_turret >= max(r1, r2)) or (max(r1, r2) >= dis_of_turret and max(r1, r2) < min(r1, r2) + dis_of_turret) :
		print(2)
	elif dis_of_turret == sum_of_dis_of_target or max(r1, r2) == min(r1, r2) + dis_of_turret :
		print(1)
	else :
		print(0)