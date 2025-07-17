t = int(input())
for _ in range(t):
    n, p = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    shares = []

   
    for ai, bi in zip(a, b):
        shares.extend([bi] * ai)

   
    shares.extend([p] * n)
    
    shares.sort()
    total_cost = p + sum(shares[:n - 1])  
    print(total_cost)
