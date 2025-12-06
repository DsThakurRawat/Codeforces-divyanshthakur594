
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long 
;
void solve() {
    ll n;cin>>n;
    vector<ll>a(n);for(ll &in:a)cin>>in;
    ll dif = 1000000000000000000LL - (n + 1);

    cout << (dif)%5<<endl;


  

    
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
