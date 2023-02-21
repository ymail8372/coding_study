num1, num2 = list(map(int, input().split()))

min = min(num1, num2)
max = max(num1, num2)

greatest_common_factor = 1
least_common_multiple = 1

for i in range(1, min+1) :
    if min % i == 0 and max % i == 0 :
        greatest_common_factor = i

least_common_multiple = greatest_common_factor * (min // greatest_common_factor) * (max // greatest_common_factor)

print(greatest_common_factor)
print(least_common_multiple)
