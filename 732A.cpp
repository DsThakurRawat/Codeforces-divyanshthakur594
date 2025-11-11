
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int k, r;
    if (!(cin >> k >> r)) return ;
    for (int n = 1; n <= 10; ++n) {
        int last = (k * n) % 10;
        if (last == 0 || last == r) {
            cout << n << '\n';
            return ;
        }
    }

   

    

  

}
  


int main() {
   // int t ;
   // cin >> t;
   // while (t--) {
        solve();
   // }
    return 0;
}
