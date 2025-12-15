import sys
input=sys.stdin.readline
t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    if k==1 or n==k or n%2==0: print("YES")
    elif (n-k)%2==0: print("YES")
    else: print("NO")
