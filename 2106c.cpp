#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<long long> v1(n), v2(n);
    for (auto &x : v1) cin >> x;
    for (auto &x : v2) cin >> x;

    int sum = -1;
    for (int i = 0; i < n; i++) {
        if (v2[i] != -1) {
            if (sum == -1) sum = v1[i] + v2[i];
            else if (sum != v1[i] + v2[i]) {
                cout << 0 << "\n";
                return;
            }
        }
    }

    if (sum == -1) {
        sort(v1.begin(), v1.end());
        int max_diff = v1[n - 1] - v1[0];
        cout << max(0, k - max_diff + 1) << "\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        int required = sum - v1[i];
        if (required < 0 || required > k) {
            cout << 0 << "\n";
            return;
        }
    }

    cout << 1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
