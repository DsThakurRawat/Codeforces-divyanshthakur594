
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y, z;
    cin >> x >> y >> z;
    bool flag  = 1;
    for (int i = 0; i < 30; i++) {
        int xb = (x >>i ) & 1;
        int yb = (y >> i) & 1;
        int zb = (z >> i) & 1;
        int sum = xb + yb + zb;
     
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
