
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
     long long  a,b;cin>>a>>b;

    
        long long x;
        if (b % a == 0) {
          
            x = (b * b) / a;
        } else {
           
            long long g = __gcd(a, b);
            x = (a * b) / g;
        }

        cout << x << endl;;

     


     

     


    
}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
