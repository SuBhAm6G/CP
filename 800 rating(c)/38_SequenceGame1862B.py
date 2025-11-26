t=int(input())
for _ in range(t):
    n=int(input())
    b=list((map(int, input().split())))
    a=[]
    a.append(b[0])
    for i in range(n-1):
        if (b[i]<=b[i+1]):
            a.append(b[i+1])
        else:
            a.append(b[i+1])
            a.append(b[i+1])
    print(len(a))
    print(*a)
