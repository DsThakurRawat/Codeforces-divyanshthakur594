
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    if( n % 3 == 0) cout << 0 << endl;
    else {
        int r = n % 3;
        cout << 3 - r << endl;
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
