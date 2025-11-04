
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

         int n, m;
        cin >> n >> m;

        vector<long long> dp(n + 1, 0);

        for(int i = 0; i < m; i++) {
            int x, y;
            long long v;
            cin >> x >> y >> v;

            long long pu = dp[x];
            long long pv = dp[y];

            dp[x] = max(pu, pv + v);
            dp[y] = max(pv, pu + v);
        }

        cout << *max_element(dp.begin() + 1, dp.end()) << "\n";
  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
