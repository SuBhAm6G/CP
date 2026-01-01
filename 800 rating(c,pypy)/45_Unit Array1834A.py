t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    neg=a.count(-1)
    action=max(0, (neg-n//2))
    if((neg-action)%2!=0):
        action+=1
    print(action)