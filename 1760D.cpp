
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
    ll n;cin>>n;
    vector<ll>a(n);for(ll &in:a)cin>>in;
    vector<ll>b;
    for(int i =0;i<n;i++){
        if(i==0 || a[i]!=b.back()){
            b.push_back(a[i]);
        }
    }
    int num_valley =0;

    for(ll i=0;i<b.size();i++){
        if((i==0 || b[i-1]>b[i])&&(i==b.size()-1||b[i]<b[i+1]))num_valley++;
    }
  if(num_valley==1)cout << "YES"<<nl;
  else cout << "NO"<<nl;
    



    
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
