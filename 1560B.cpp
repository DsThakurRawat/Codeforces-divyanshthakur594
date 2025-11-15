
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;cin>>a>>b>>c;
    int n = 2*abs(a-b);

    if(  a >n || b > n ||   c > n) {
        cout << -1 << endl;
        return;

    }
    int d1 = c + n/2;
    int d2 = c - n/2;

    if(d1 <=n ) cout << d1 <<endl;
    else cout << d2 << endl;

    



    


  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
