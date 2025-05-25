# taking in put 
for i in range(int(input())):
    l,r,d,u = map(int, input().split())
    #all side of square have equal length 
    #and all inner angles are equal
   # no two edge of polynomila intersect each other
   #check side of lenght and just done
    if(l == r and r == d and d == u ):
      print("Yes")
    else:
       print("No")
         
    
    
