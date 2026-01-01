import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    start=0
    end=int(input())
    s=str(input())
    while start<end and ((s[end-1]=='0' and s[start]=='1') or (s[end-1]=='1' and s[start]=='0')):
        end-=1
        start+=1
    print(end-start)

            
