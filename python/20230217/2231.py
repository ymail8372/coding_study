num = int(input())

for i in range(num) :
	original_num = i

	digit_100 = num // 100
	num -= digit_100*100

	digit_10 = num // 10
	num -= digit_10*10

	digit_1 = num

	if digit_100 + digit_10 + digit_1 + i == num :
		