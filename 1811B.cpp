
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
    ll n,k,d,w;cin>>n>>k>>d>>w;
    // n -> no pf patient
    // k-> number of doses per vaccine pack
    // d -> number of moments of time vaccine can live outiside the fridge
   // number of momnet of tome eacg patitien can wot
   vector<int>t(n);for(auto &in :t)cin>>in;
   /// o/p_. the minimum number of vaccine pack requires to vaccincate all apeople
    
   // umm max up time vaccin can have 
   ll  pack = 0;
   ll i =0;
  
   while(i<n){
         pack++;

         ll expiry = t[i]+w+d;
         ll cnt = 1;
         ll j = i+1;
         while(j<n&&t[j]<=expiry&&cnt <k){
            cnt++;
            j++;
         }
         i = j;

   }
   cout << pack << endl;

  

    
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
