t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=[((n+1)-a[i]) for i in range(n)]
    print(*b)
