
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





#define nl '\n';


void solve() {
  int n,m,sx,sy,d;cin>>n>>m>>sx>>sy>>d;
  // n , m points should be away from laser
    
    if (min(sx - 1, m - sy) <= d && min(n - sx, sy - 1) <= d) {
        cout << -1 << nl;
        return;
    }

 
 


  cout << n+m-2 << nl;






    
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
