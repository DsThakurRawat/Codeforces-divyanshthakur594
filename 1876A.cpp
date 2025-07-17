#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

      
        vector<pair<int, int>> offers;
        for (int i = 0; i < n; ++i) {
            offers.emplace_back(b[i], a[i]);
        }

       
        sort(offers.begin(), offers.end());

        long long total_cost = p;
        int needed = n - 1;

        for (int i = 0; i < n && needed > 0; ++i) {
            int use = min(offers[i].second, needed);
            total_cost += 1LL * use * min(offers[i].first, p);
            needed -= use;
        }

        // If still needed shares, get from Pak Chanek
        if (needed > 0) total_cost += 1LL * needed * p;

        cout << total_cost << '\n';
    }

    return 0;
}
