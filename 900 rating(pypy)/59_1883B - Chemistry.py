import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    n,k=map(int,input().split())
    string=input().strip()
    freq=dict()
    for c in string:
        if c in freq:
            freq[c]+=1
        else:
            freq[c]=1
    odd_count = sum(v % 2 for v in freq.values())
    print("YES" if k>=(odd_count-1) else "NO")