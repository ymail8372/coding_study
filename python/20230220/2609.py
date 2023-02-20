num1, num2 = list(map(int, input().split()))

min = min(num1, num2)
max = max(num1, num2)

greatest_common_factor = 0
for i in range(2, min+1) :
    if (min % i == 0) & (max % i == 0) :
    	greatest_common_factor = i

least_common_multiple = 0
for i in range(max, max*min+1) :
    if (i % min == 0) & (i % max == 0) :
        least_common_multiple = i
        break
        
print(greatest_common_factor)
print(least_common_multiple)