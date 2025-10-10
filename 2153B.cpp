
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long x, y, z;
    cin >> x >> y >> z;
    bool flag  = 1;
    for (int i = 0; i < 30; i++) {
        long long  xb = (x >>i ) & 1;
        long long  yb = (y >> i) & 1;
        long long  zb = (z >> i) & 1;
        long long  sum = xb + yb + zb;
     
        if (sum == 2) {
            flag = 0;
            break;
        }
    }
   if(flag == 1) cout << "YES" << endl;
   else cout << "NO"<< endl;
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
