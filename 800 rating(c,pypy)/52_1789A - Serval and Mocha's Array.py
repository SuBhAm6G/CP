import sys
import math
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    flag=0
    for i in range(n):
        for j in range(i+1,n):
            if(math.gcd(arr[i],arr[j])==1 or math.gcd(arr[i],arr[j])==2):
                flag=1
                break
    if flag: print("Yes")
    else: print("No")
