for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    xor = 0
    for x in a:
        xor ^= x
    if xor == 0:
        print(0)
    else:
        if n % 2 == 1:
            print(xor)
        else:
            print(-1)