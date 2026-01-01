import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    set_a=set(a)
    if (len(set_a)==1):
        print('NO')
        continue
    else:
        temp=a[n-1]
        for i in range(n-1,0,-1):
            a[i]=a[i-1]
        a[0]=temp
        print("YES")
        print(*a)