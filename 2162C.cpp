
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

     long long  a, b;
    cin >> a >> b;
      // so like overall we need to change a to b by taking xor 

    if (a == b){
        cout << 0 << endl;


    } 
    else if ((a ^ b) <= a){
        cout << 1 << endl;
        cout << (a ^ b) << endl;


    } 
    else if (b < a){
        cout << 2 << endl;
      
      
        cout << a << " " << b << endl;
    } 
    else {
        cout << -1 << endl;
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
