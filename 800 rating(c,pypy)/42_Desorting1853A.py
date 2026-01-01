t=int(input())
for _ in range(t):
    n=int(input())
    nums=list(map(int,input().split()))
    if any(nums[i]>nums[i+1] for i in range(n-1)):
        print(0)
        continue
    minimum=abs(nums[0]-nums[1])
    for i in range(1,n-1):
        diff=abs(nums[i]-nums[i+1])
        if(diff<minimum):
            minimum=diff
    print(minimum//2 +1)