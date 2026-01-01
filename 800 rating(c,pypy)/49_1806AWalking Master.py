import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    moves=0
    a,b,c,d=map(int,input().split())
    #y-coordinate equating
    moves+=(d-b)
    if (moves<0): 
        print(-1)
        continue
    if c<=(a+moves):
        moves+=(a+moves)-c
        print(moves)
    else: print(-1)
    
