t=int(input())
for _ in range(t):
    nums=list(map(int,input().split()))
    a=[i for i in range(1,nums[1]+1) if i!=nums[2]]
    if nums[2]!=1:
        print("YES")
        ans=[]
        for _ in range(nums[0]//a[len(a)-1]):
            ans.append(a[len(a)-1])
        for _ in range(nums[0]-sum(ans)):
            ans.append(1)
        print(len(ans))
        print(*ans)
    else:
        if(nums[0]%2==0 and 2 in a):
            ans=[]
            for _ in range(nums[0]//2):
                ans.append(2)
            print("YES")
            print(len(ans))
            print(*ans)
        elif(nums[0]%2!=0 and 2 in a and 3 in a):
            ans=[3]
            for _ in range((nums[0]-3)//2):
                ans.append(2)
            print("YES")
            print(len(ans))
            print(*ans)
        else:
            print("NO")

            
            


            
