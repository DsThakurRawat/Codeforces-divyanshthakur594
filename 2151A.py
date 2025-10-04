import  math 
for _ in range(int(input())):
     n,m = map(int, input().split())
     a =  [0] + list(map(int, input().split()))
     ans = n - a[m] + 1
     for i in range(2,m + 1):
          if a[i] == 1:
               ans = 1
     print(ans)

     
      
        