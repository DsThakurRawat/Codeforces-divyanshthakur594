for _ in range(int(input())):
    arr = list(map(int, input().split()))
    if  sum(arr[0],arr[1],arr[2]) == sum(arr[3],arr[4],arr[5]):
        print("YES")
    else:
        print("NO")
