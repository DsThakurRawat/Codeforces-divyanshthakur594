
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  
   long long  n;cin>>n;
   long long  count = 0;
   int c1 =0,c2=0;
   while(n%2==0){
    n/=2;c1++;
   }
   while(n%3==0){
    n/=3;c2++;
   }
   if(n==1&&c1<=c2) cout << 2*c2-c1<<endl;
   else cout << -1 << endl;

    
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
