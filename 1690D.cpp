
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
 /*    ll cnt_min_white = LLONG_MAX;
     ll cntwhite =0;

     for(ll i=0;i<k;i++){
        if(s[i]=='W')cntwhite++;
     }
     cnt_min_white = min(cnt_min_white,cntwhite);

     for (ll i=k;i<n;i++){
        if(s[i]=='W')cntwhite++;
        if(s[i-k]=='W')cntwhite--;
        cnt_min_white= min(cnt_min_white,cntwhite);
     }
       cout << cnt_min_white << nl;
 */

   ll left =0;
   ll cntwhite=0;
   ll recolor =LLONG_MAX;

   for(ll right =0;right<s.size();right++){
    if(s[right]=='W')cntwhite++;

    if(right - left +1==k){
        recolor = min(recolor,cntwhite);
        if(s[left]=='W')cntwhite--;
        left++;
    }

   }
  





       cout << recolor << nl;














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
