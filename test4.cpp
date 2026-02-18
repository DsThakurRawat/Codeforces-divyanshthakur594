/*
DIVYANSH RAWAT
MASTER TEMPLATE
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    return;
}

void MASTER() {
    int n;
    cin >> n;
    
    ll a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    
    ll sum = 0;
    for (int i = 2; i <= n; i++) sum += abs(a[i]-a[i-1]);
    
    ll ans = min(sum - abs(a[2]-a[1]), sum - abs(a[n]-a[n-1]));
    for (int i = 2; i < n; i++) {
        ans = min(ans, sum - abs(a[i+1]-a[i]) - abs(a[i]-a[i-1]) + abs(a[i+1]-a[i-1]));
    }
    
    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        MASTER();
        solve();
    }

    return 0;
}
