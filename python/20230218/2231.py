num = input()

for i in range(int(num)) :
	result = i
	str_result = str(result)
	digit = len(str_result)

	for j in range(digit) :
		result += int(str_result[j])

	if result == int(num) :
		print(i)
		exit()
	
	if i == int(num)-1 :
		print(0)