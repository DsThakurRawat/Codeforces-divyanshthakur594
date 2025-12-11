
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using  ld = long double;
using  int128 = __int128_t;


//vector<vector<ll>> grid(n, vector<int>(m));
//vector<vector<ll>> arr(n, vector<int>(m,1));
//indexes to run from 1…n and 1…m, not from 0.
//vector<vector<ll>> grid(n + 1, vector<ll>(m + 1, 1));





#define nl '\n'


void solve() {

    int n;cin>>n;
    vector<int>v(n);for(auto &in:v)cin>>in;
    ll cnt=0;
  for(ll i=0;i<n;i++){
    for(ll j=n-1;j>=0;j--){
        if(v[i]>v[j] && i <j)cnt++;
    }
  }
cout << cnt << nl;

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
