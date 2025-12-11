
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
        ll cnt_white=0;
        ll cnt_black=0;
        for(ll i=0;i<n;i++){
            if(s[i]='W')cnt_white++;
            else cnt_black++;
        }
        ll cnti_cnt_black=0;
        ll curr=0;
        for(ll i =0;i<n;i++){
            if(s[i]=='B')curr++;
            else curr=0;
            cnti_cnt_black = max(curr,cnti_cnt_black);
        }
        if(n==k){
            cout<< cnt_white<< nl;
            return;
        }
        if(cnti_cnt_black<=k){
            cout << 0 << nl;
            return;
        }
        vector<ll>presum(n);
        presum[0]=int(s[0]=='W');
        for(ll i=1;i<n;i++){
            presum[i]=presum[i-1]+int(s[i-1]=='W');
        }
        ll res = INT_MAX;
        for(ll i=k;i<=n;i++){
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
