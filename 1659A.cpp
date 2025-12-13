
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
    ll n,r,b;cin>>n>>r>>b;
     // r+b==n
    // minimum together floor((n/(b+1));
    // total partition->b+1;
    string s="";
      ll p = (r/(b+1));//minimum number of Rs that EVERY partition must have
      ll q = r % (b+1);




   while(s.size()<n){
     
    ll min_to = (q>0 ? p+1 :p);
      
       
        for(ll i=0;i<min_to&&r>0;i++){
        
            s +='R';
            r--;

           
           
        }
        if(q>0)q--;
        if(b>0&&s.size()<n){
            s+='B';
            b--;
        }
    
        
        

        
        
    }
    cout << s << nl;


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
