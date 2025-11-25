
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long  n;cin>>n;
  long long x ,y;
  /*
  4*x+6*y = n
  we have take that pair min = min(a+b);and max = max(a+b);
  
  */
 if(n%2 == 1 || n < 4){
    cout << -1<<endl;
    return;
 }
 cout << int(ceil(n/6)) << " "<< floor(n/4)<<endl;

  


  

  
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
