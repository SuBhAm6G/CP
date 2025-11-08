t=int(input())
for _ in range(t):
    n=int(input())
    arr=[]
    arr=list(map(int, input().split()))
    s=set(arr)
    if(len(s)==1):
        print('YES')
    elif(len(s)==2):
        l=list(s)
        count1=arr.count(l[0])
        count2=arr.count(l[1])
        if(abs(count1-count2)<=1):
            print('YES')
        else:
            print('NO')
    else:
        print('NO')

    