import sys
import math
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    n=int(input())
    l=len(str(n))
    k=math.floor(n/(10**(l-1)))
    output=9*(l-1)+k
    print(output)