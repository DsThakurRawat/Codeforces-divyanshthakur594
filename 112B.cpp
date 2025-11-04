
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n,x,y; cin >> n >> x >> y;
    n = n/2;

    if( (x == n || x == n+1)&& ( y == n || y == n+1)) cout << "NO"<<endl;
    else cout <<"YES"<<endl;


  
}

int main() {
//    int t ;
//cin >> t;
   // while (t--) {
        solve();
   // }
    return 0;
}
