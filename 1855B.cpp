
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    /*
    need to find interval for which n % i == 0;
    [4,5]
    40 % 4 == 0
    40 % 5 == 0
    1s = 10^8 operations
    1 test = 2 x 10^8 ops
    ops/tc = (2x10^8) / 10^4 = 2 x 10^4

    ops of logn
    0ps of 0(1)

  N = 990990
  [9 10 11]



    
    
    
    */
   int i = 1;
   while( n % i == 0){
    i++;
   }
   cout << i - 1 << endl;





  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
