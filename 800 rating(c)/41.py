t=int(input())
for _ in range(t):
    n=int(input())
    odd_nums=[int(x) for x in input().split() if int(x)%2!=0]
    if(len(odd_nums)%2==0):
        print("YES")
    else:
        print("NO")
