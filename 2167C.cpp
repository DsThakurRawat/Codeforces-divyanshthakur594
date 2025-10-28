
    // simple template-test2
    // code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

     bool has_even = false, has_odd = false;
    for (auto x : a) {
        if (x % 2 == 0) has_even = true;
        else has_odd = true;
    }

    if (is_sorted(a.begin(), a.end())) {
        cout << "YES\n";
        return;
    }

    if (has_even && has_odd) cout << "YES\n";
    else cout << "NO\n";



  


}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
