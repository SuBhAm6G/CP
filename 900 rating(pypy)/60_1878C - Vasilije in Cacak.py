import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    n,k,x=map(int,input().split())
    Min=(k*(k+1))/2
    Max=(k*(2*n -k +1))/2
    if Min<=x<=Max:
        print("YES")
    else:
        print("NO")