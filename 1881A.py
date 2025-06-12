def solve():
    n, m = map(int, input().split())
    x = input()
    s = input()
    for i in range(6):
        if s in x:
            print(i)
            return
        x += x
    print(-1)
    """
    equivalent cpp code
     for (int i = 0; i < 6; i++) {
        if (x.find(s) != string::npos) {
            cout << i << endl;
            return 0;
        }
        x += x;
    }
    """

for _ in range(int(input())):
    solve()
