
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
    string s;cin>>s;
    string t;cin>>t;
    set<ll>st1,st2;

    for(ll i=0;i<s.size();i++){
             st1.insert(s[i]);
    }
    for(ll j=0;j<t.size();j++){
        st2.insert(s[j]);
    }
    if(st1.size()==1 && st2.size()==1){
        char val = *st1.begin();
        char val2 = *st2.begin();
        if(s[0]==t[0]&&t.size()==1){
            cout << 1 <<nl;
        }
        else{
            cout << 2 << nl;
        }



    }
    else cout << -1 <<nl;

   

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
