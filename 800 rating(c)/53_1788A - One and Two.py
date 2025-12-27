import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    count_2=a.count(2)
    if(count_2==0): print(1)
    elif((count_2%2)!=0): print(-1)
    else:
        pos=0
        k=0
        while(k<count_2/2):
            if(a[pos]==2):
                k+=1
            pos+=1
        print(pos)

