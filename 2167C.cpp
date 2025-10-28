
    // simple template-test2
    // code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
            int n; 
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        bool even_flag = false, odd_flag = 0;
        for (auto x : v) {
            if (x % 2 == 0) has_even = true;
            else odd_flag = 1;
        }

        if (is_sorted(v.begin(), v.end())) {
            cout << "YES" << endl;;
            return;
        }

  


}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
