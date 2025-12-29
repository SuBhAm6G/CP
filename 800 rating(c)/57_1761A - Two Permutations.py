import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    n,a,b=map(int,input().split())
    if n-(a+b)>=2:
        print("Yes")
    elif (n==a) and (a==b):
        print("Yes")
    else:
        print("No")