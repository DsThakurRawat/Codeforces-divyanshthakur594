
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
            vector<ll>b(n);for(ll &in:b)cin>>in;
            // if bi =1 ->she will buy new guineea pig
            // bi = 2 doctor will come to determine sex of guineer pig
            // if you have n pig then mini number of pig having same gender is (n+1)/2;

            ll cnt_1 = 0;
            for(ll i=0;i<n;i++){
                if(b[i]==1)cnt_1++;
            }
            if(b[n-1]==2){
                ll min_same_gender = (n+1)/2;
                ll b=cnt_1-min_same_gender;
                cout<< b + (min_same_gender+1)/2<<endl;
                return;
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
