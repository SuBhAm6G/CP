import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    total=0
    for num in a:
        total^=num
    if n%2==0:
        if total==0: print(0)
        else: print(-1)
    else:
        print(total)