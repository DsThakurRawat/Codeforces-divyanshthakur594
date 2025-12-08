
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long 
;
void solve() {

    string s;cin>>s;
    ll n = s.size();
    vector<ll>prefixbalance(n);
    
    prefixbalance[0] = 0;
    map<char,int>mp;

    for(int i =1;i<n;i++){
        if(s[i]=='('){
            prefixbalance[i] = prefixbalance[i-1]+1;
        }
        else{
            prefixbalance[i]=prefixbalance[i-1]+1;
        }


    }
    for(ll &ot:prefixbalance)cout << ot <<" ";


  
   
    
}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   // int t ;
   // t=1;
    //cin >> t;
   // while (t--) {
        solve();
   // }
    return 0;
}
