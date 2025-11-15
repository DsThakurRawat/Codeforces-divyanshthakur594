n = int(input())
arr = list(map(int, input().split()))
sum1 = 0
arr.sort()
for i in range(n):
   sum1 = (arr[n-1] - arr[i]) + sum1
print(sum1)