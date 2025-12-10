
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using  ld = long double;
using  int128 = __int128_t;





#define nl '\n';


void solve() {
  int n,m,sx,sy,d;cin>>n>>m>>sx>>sy>>d;
  // n , m points should be away from laser
  if((abs(n-sx)+abs(m-sy))<=d){
    cout << -1 << endl;
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
