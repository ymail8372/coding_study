N = int(input())

for i in range(N) :
	bracket = 0
	
	ps = list(input())
	for j in ps :
		if j == '(' :
			bracket += 1
		elif j == ')' :
			bracket -= 1
		
		if bracket < 0 :
			break
	
	if bracket == 0 :
		print('YES')
	else :
		print('NO')
		