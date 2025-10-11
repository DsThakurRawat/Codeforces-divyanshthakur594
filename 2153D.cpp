#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll LINF = 1000000000000000005;
const int MAXN = 500005;
 
int t;
int n;
int a[MAXN];
ll dp[MAXN];
 
ll cost(int x, int y) { return abs(x - y); }
 
ll cost(int x, int y, int z) {
    if (x > y) {
        swap(x, y);
    }
    if (y > z) {
        swap(y, z);
    }
    if (x > y) {
        swap(x, y);
    }
    return z - x;
}
 
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
 
        ll ans = LINF;
        for (int cyc = 0; cyc < 4; cyc++) {
            dp[0] = 0;
            dp[1] = LINF;
            for (int i = 2; i <= n; i++) {
                dp[i] = dp[i - 2] + cost(a[i - 1], a[i]);
                if (i >= 3) {
                    dp[i] =
                        min(dp[i], dp[i - 3] + cost(a[i - 2], a[i - 1], a[i]));
                }
            }
            ans = min(ans, dp[n]);
 
            // cyclic shift anti-clockwise
            for (int i = 2; i <= n; i++) {
                swap(a[i], a[i - 1]);
            }
        }
 
        cout << ans << '\n';
    }
    return 0;
}