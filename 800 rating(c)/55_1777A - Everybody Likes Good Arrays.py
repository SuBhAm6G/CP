import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    o=0
    e=0
    for i in range(0,n-1):
        if(a[i]%2==0 and a[i+1]%2==0):
            e+=1
        elif(a[i]%2!=0 and a[i+1]%2!=0):
            o+=1
    print(e+o)