import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    a,b=map(int,input().split())
    xk,yk=map(int,input().split())
    xq,yq=map(int,input().split())
    offsets=[
        (a,b),(a,-b),(-a,b),(-a,-b),(b,a),(b,-a),(-b,a),(-b,-a)
    ]
    king_attacking_pos=set()
    for dx,dy in offsets:
        king_attacking_pos.add((xk+dx,yk+dy))
    count=0
    for px,py in king_attacking_pos:
        dx=abs(px-xq)
        dy=abs(py-yq)
        if (dx == a and dy == b) or (dx == b and dy == a):
            count+=1
    print(count)
