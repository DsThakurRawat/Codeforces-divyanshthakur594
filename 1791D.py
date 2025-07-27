for _ in range(int(input())):
   n = int(input())
   s = input()
   #using tabulation dp appraoch here
   pre = [0]*n
   suf  = [0]*n

   
   seen = set()
   for i in range(n):
        seen.add(s[i])
        pre[i] = len(seen)
    

   seen.clear()
   for i in reversed(range(n)):
        seen.add(s[i])
        suf[i] = len(seen)

   ans = 0
   for i in range(n - 1):
        ans = max(ans, pre[i] + suf[i + 1])
    
   print(ans)