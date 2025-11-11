
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    // polycarp chooses shovel->k burles
    // 
    int k,r;cin>>k>>r;

    //  k price of one shovel
    // r extra coin

    int x = 0; 

    int y = 0;
for (int y = 1; y <= 10; y++) {
        int cost = k * y;
        if (cost % 10 == 0 || cost % 10 == r) {
            cout << y << endl;
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
