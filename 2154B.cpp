// simple template-test-2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n; cin >> n;

    vector<int> v(n); for(int &it : v) cin >> it;

    vector<int> maxm(n);
    maxm[0] = v[0];

    for(int i = 1; i < n; i++) {
        maxm[i] = max(maxm[i - 1], v[i]);
    }

    for(int i = 1; i < n; i += 2) {
        v[i] = maxm[i];
    }

    int ans = 0;

    if(n == 2) {
        v[1] = max(v[1], v[0]);

        if(v[1] > v[0]) {
            cout << 0 << endl;
        } 
        else {
            int res = v[0] - (v[1] - 1);
            cout << res << endl;
        }
        return;
    }

    if(n >= 3) {
        for(int i = 1; i + 1 < n; i += 2) {

            int mid = v[i];
            int left = v[i - 1];
            int right = v[i + 1];

            if(mid > left && mid > right) continue;

            if(mid <= left) {
                ans += left - (mid - 1);
                v[i - 1] = mid - 1;
            }

            if(mid <= right) {
                ans += right - (mid - 1);
                v[i + 1] = mid - 1;
            }
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
     cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
