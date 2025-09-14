import sys
input=sys.stdin.readline

t=int(input())
for _ in range(t):
    a,b,c,d=map(int,input().split())
    if(max(a,b)>2*min(a,b)+2):
        print("NO")
    elif(max(c-a,d-b)>2*min(c-a,d-b)+2):
        print("NO")
    else:
        print("YES")