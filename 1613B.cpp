
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
///vector<pair<int,int>> v;






#define nl '\n'


void solve() {
     ll n;cin>>n;
     vector<ll>a(n);for(auto & in :a)cin>>in;
     /*
     imp things to noted 
     x mod y < y
     so we can obtain n-1 pair by choosing y as the minimum number 
     */
    ll mini = *min_element(a.begin(),a.end());
    for(ll i =0,k=0;k< n/2;i++){
        if(a[i]!=mini){
            cout << a[i]<< " "<<mini << nl;
            k++;
        }
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
