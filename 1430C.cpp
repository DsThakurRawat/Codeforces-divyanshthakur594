
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

    vector<ll>v(1);
    for(ll i=1;i<=n;i++){
        v.push_back(i);
    }
    cout << 2 << nl;

    while(v.size()>2){
        ll a = v[v.size()-2];
        ll b = v[v.size()-1];
        cout << a << " "<< b << nl;
        ll x = (a+b+1)/2;
        v[v.size()-2]=x;
        v.pop_back();// removing  n-1 element 
    }



    

    
    



   



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
