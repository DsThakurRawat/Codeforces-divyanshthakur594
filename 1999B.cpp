
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int a1,a2,b1,b2;cin>>a1>>a2>>b1>>b2;
   ll ans = 0;
        if(a1>b1 && a2>=b2 || a1>=b1 && a2>b2) ans+=2;
        if(a1>b2 && a2>=b1 || a1>=b2 && a2>b1) ans+=2;
        cout<<ans<<endl;
  
   



    
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
