t = int(input())
for _ in range(t):
    n, p = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    shares = []

    # All shares from residents
    for ai, bi in zip(a, b):
        shares.extend([bi] * ai)

    # Add p-cost shares from Pak Chanek
    shares.extend([p] * n)

    # Sort and pick n-1 cheapest shares
    shares.sort()
    total_cost = p + sum(shares[:n - 1])  # First share = p
    print(total_cost)
