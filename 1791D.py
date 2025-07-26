for _ in range(int(input())):
   n = int(input())
   s = input()
   def f(x):
      return len(set(x))
   dp = [-1] * (n + 1)  
   def recurse(s,ind):
      if ind == len(s):
         return 0
      a = s[:ind]
      b = s[ind:]
      total = f(a) + f(b)
      return max(total,recurse(s,ind+1))
       
      dp[ind] = max(total, recurse(ind + 1))
      return dp[ind]

   def solve():
        return recurse(s,1)
   print(solve())