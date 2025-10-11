// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = 4e18;


ll block_cost(const vector<ll>& arr, int l, int r) {
    vector<ll> seg(arr.begin() + l, arr.begin() + r + 1);
    sort(seg.begin(), seg.end());
    ll m = seg[seg.size() / 2];
    ll cost = 0;
    for (ll x : seg) cost += llabs(x - m);
    return cost;
}

void dp() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    if (n == 1) {
        cout << 0 << '\n';
        return;
    }

  
    vector<ll> ad(2 * n);
    for (int i = 0; i < 2 * n; ++i)
        ad[i] = a[i % n];

    
    vector<vector<ll>> cost(2 * n, vector<ll>(2 * n, INF));
    for (int i = 0; i < 2 * n; ++i) {
        for (int j = i + 1; j < min(2 * n, i + n); ++j)
            cost[i][j] = block_cost(ad, i, j);
    }

    ll ans = INF;

    // try every rotation
    for (int s = 0; s < n; ++s) {
        vector<ll> dp(n, INF);
        for (int i = 0; i < n; ++i) {
            for (int j = -1; j < i; ++j) {
                int len = i - j;
                if (len < 2) continue; // block must have ≥2 elements
                ll prev = (j == -1 ? 0 : dp[j]);
                dp[i] = min(dp[i], prev + cost[s + j + 1][s + i]);
            }
        }
        ans = min(ans, dp[n - 1]);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) dp();
    return 0;
}
