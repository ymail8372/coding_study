import sys

N = int(input())
N_nums = set(map(int, sys.stdin.readline().split()))
M = int(input())
M_nums = list(map(int, sys.stdin.readline().split()))

for i in range(M) :
    if M_nums[i] in N_nums :
        print(1)
    else :
        print(0)
        
