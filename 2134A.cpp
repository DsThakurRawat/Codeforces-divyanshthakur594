
// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n , a , b; cin >> n >> a >> b;
   if(a <= b) {
      cout << ((n % 2) == (b % 2) ? "YES\n" : "NO\n");
    } else {
      cout << ((n % 2) == (b % 2) && (n % 2) == (a % 2) ? "YES\n" : "NO\n");
      
  
    }  
  

}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
