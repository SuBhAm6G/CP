t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=[]
    c=[]
    m=min(a)
    if (a.count(m)==n):
        print(-1)
        continue
    else:
        for i in range(n):
            if(a[i]==m):
                b.append(a[i])
            else:
                c.append(a[i])
    print(len(b))    
    print(len(c))        
    print(*b)         
    print(*c)     
