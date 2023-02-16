import copy

while True :
	num1 = list(input())

	if num1 == ['0'] :
		exit()
	
	num2 = copy.deepcopy(num1)

	num1.reverse()

	if num1 == num2 :
		print('yes')
	else :
		print('no')
