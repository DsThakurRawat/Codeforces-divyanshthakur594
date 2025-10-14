
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  string s; cin >> s;

  int count = 0;

  for( auto x: s){
    if( x == '0') count++;
    else count = n-1 + count;
  }
  cout << count << endl;





}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
