import math

N, K = list(map(int, input().split()))

result = 1
for i in range(K) :
    result *= N-i

result = result // math.factorial(K)

print(result)