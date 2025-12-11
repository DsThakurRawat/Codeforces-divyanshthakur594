
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
       
    /*  vector<ll>presum(n);
        presum[0]=int(s[0]=='W');
        for(ll i=1;i<n;i++){
            presum[i]=presum[i-1]+(int(s[i]=='W'));
        }
        ll res = LLONG_MAX;
        for(ll i=k-1;i<n;i++){
             ll sumW = presum[i] - (i - k >= 0 ? presum[i - k] : 0);
             res = min(res, sumW);
            
        }
cout << res << nl;
        

*/
// take block of length k for 
     
       ll cnt_min_white =1e18;
            ll cntwhite;
        for(int i = 0;i<n;i++){
            cntwhite=0;
           for(int j = i; j<i+k;j++){
                 if(s[j]=='W')cntwhite++;
           }
           cnt_min_white = min(cntwhite,cnt_min_white);

        }
        

        cout << cnt_min_white<<nl;
       
       





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
