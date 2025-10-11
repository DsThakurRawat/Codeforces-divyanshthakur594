// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 4e18;

ll median_cost(const vector<ll>& seg) {
    vector<ll> temp = seg;
    sort(temp.begin(), temp.end());
    ll m = temp[temp.size() / 2];
    ll cost = 0;
    for (ll x : temp) cost += abs(x - m);
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

   
    vector<vector<ll>> cost(n, vector<ll>(n, INF));
    for (int l = 0; l < n; ++l) {
        vector<ll> seg;
        for (int r = l; r < n; ++r) {
            seg.push_back(a[r]);
            if (r - l + 1 >= 2)
                cost[l][r] = median_cost(seg);
        }
    }

    
    vector<ll> dp(n, INF);
    for (int i = 1; i < n; ++i) {
        for (int j = -1; j < i - 1; ++j) {
            ll prev = (j == -1 ? 0 : dp[j]);
            dp[i] = min(dp[i], prev + cost[j + 1][i]);
        }
    }

    cout << dp[n - 1] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) dp();
    return 0;
}
