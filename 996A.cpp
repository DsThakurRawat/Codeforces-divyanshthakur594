
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    

    // denominations are sum of 1,5,10,20,100

     long long n;
    cin >> n;

    vector<int> coins = {100, 20, 10, 5, 1};

    long long ans = 0;
    for (int c : coins) {
        ans += n / c;
        n %= c;
    }

    cout << ans << endl;






   

  
}

int main() {
  //  int t ;
   // cin >> t;
 //   while (t--) {
        solve();
 //   }
    return 0;
}
