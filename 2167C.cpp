
    // simple template-test2
    // code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
       int n; 
cin >> n;
vector<long long> v(n);
for (auto &x : v) cin >> x;

bool has_even = false, has_odd = false;
for (auto x : v) {
    if (x % 2 == 0) has_even = true;
    else has_odd = true;
}

if (has_even && has_odd) sort(v.begin(), v.end());
for (auto x : v) cout << x << " ";
cout << endl;



      

        

  


}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
