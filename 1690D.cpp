
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
        ll n,k;cin>>n>>k;
        string s;cin>>s;
       
        vector<ll>presum(n);
        presum[0]=int(s[0]=='W');
        for(ll i=1;i<n;i++){
            presum[i]=presum[i-1]+int(s[i-1]=='W');
        }
        ll res = LLONG_MAX;
        for(ll i=k;i<n;i++){
            res = min(res,presum[i]-presum[i-k]);
        }
cout << res << nl;
        



       
       





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
