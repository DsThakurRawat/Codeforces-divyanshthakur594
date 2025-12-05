
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int n;cin>>n;
  vector<ll>a(n);for(ll &in:a)cin>>in;
  vector<ll>b(n);for(ll &in:b)cin>>in;
  
    ll mini = 0;
    ll maxi = 0;
    
    for (ll i = 0; i < n; ++i) {

            ll score1 = max(maxi - a[i], b[i] - mini);
            ll score2 = min(mini - a[i], b[i] - maxi);   
            maxi = score1;
            mini = score2;
    }
    
    cout << maxi << endl;


}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
