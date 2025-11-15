
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,c;cin>>a>>b>>c;
    long long  sum = 0;

    for(long long i = 1; i<=4; i++){
        sum += a*i;
    }
    cout << sum-b <<endl;




  

}
  


int main() {
   // int t ;
    //cin >> t;
   // while (t--) {
        solve();
  //  }
    return 0;
}
