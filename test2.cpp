
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

         int n, m;
        cin >> n >> m;

        vector<long long> dp(n + 1, 0);


        for (int i = 0; i < m; ++i) {
            int x, y;
            long long v;
            cin >> x >> y >> v;

            long long tempx = dp[x];
            long long tempy = dp[y];

            dp[x] = max(dp[x], tmp_y + v);
            dp[y] = max(dp[y], tmp_x + v);
        }

        cout << *max_element(dp.begin() + 1, dp.end()) << endl;
    }


       
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
