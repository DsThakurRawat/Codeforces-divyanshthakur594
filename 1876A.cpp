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

        vector<int> shares;

       
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < a[i]; ++j) {
                shares.push_back(b[i]);
            }
        }

        
        for (int i = 0; i < n; ++i) {
            shares.push_back(p);
        }

     
        sort(shares.begin(), shares.end());
        long long total_cost = p;  // First share must be from Pak Chanek
        for (int i = 0; i < n - 1; ++i) {
            total_cost += shares[i];
        }

        cout << total_cost << '\n';
    }

    return 0;
}
