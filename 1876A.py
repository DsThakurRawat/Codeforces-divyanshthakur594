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
    print(sum(shares[:n - 1]))
