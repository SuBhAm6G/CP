t=int(input())
for _ in range(t):
    x,k=map(int,input().split())
    if(x%k!=0):
        print(1)
        print(x)
    else:
        print(2)
        print(f"{x-(k+1)} {k+1}")