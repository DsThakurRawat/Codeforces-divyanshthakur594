// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(2*n);
    for(int &x : a) cin >> x;

    unordered_map<int,int> freq;
    freq.reserve(2*n);

    for(int x : a) freq[x]++;

    int odd = 0, even = 0;

    for(auto &p : freq) {
        if(p.second % 2 == 1) odd++;
        else even++;
    }

    int ans = 0;

    if(odd > 0) {
        // can fix parity easily
        ans = odd + 2 * min(even, n);
    } else {
        // all frequencies even -> parity constraint forces us to lose 1 slot
        ans = 2 * min(even - 1, n);
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}
