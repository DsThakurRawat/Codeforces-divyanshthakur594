
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int>p(n);
    double sum = 0;
    for(int i = 0; i < n; i++){
     cin >> p[i];
     sum += p[i];
    }
    cout << sum / n << endl;
   

  
}

int main() {
   // int t ;
   // cin >> t;
   // while (t--) {
        solve();
    //}
    return 0;
}
