
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
    vector<int>pos(n);
    
    prefixbalance[0] = 0;
    map<char,int>mp;
    pos[0] = prefixbalance[0];

    for(int i =1;i<n;i++){
        ll cnt1=0;
        ll cnt2 = 0;

        for(int j = 0;j<i;j++){
            if(s[j]=='(') cnt1++;
            if(s[j]==')')cnt2++;
        }
        prefixbalance[i] = cnt1-cnt2;
        pos[i]=prefixbalance[i];
    }
    sort(pos.begin(),pos.end());
    string ans="";

    for(int i =0;i<n;i++){
        ans[i] = ans[i]+s[pos[i]];
    }

    


  

  
   
    
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
