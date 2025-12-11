
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
// in this problem you have to find sum of maximum digonally

void solve() {
           ll n,m;cin>>n>>m;
           vector<vector<ll>> grid(n + 1, vector<ll>(m + 1, 1));

           for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                cin>>grid[i][j];
            }
           }
           ll limit = m+5;
           vector<ll>d1(n+m+10),d2(n+m+10);


           // precmpute dignoal sum
           for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                d1[i-j+limit] += grid[i][j];
                d2[i+j]+=grid[i][j];
            }
           }

           ll ans = 0;
           for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                ll sum = d1[i-j+limit]+d2[i+j]-grid[i][j];
                ans = max(ans,sum);
            }
           }
     cout << ans << nl;

           



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
