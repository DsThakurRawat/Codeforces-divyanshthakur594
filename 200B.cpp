
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int>p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    int x = 100;
    float per;
    for(int i = 0; i < n; i++){
        int per = p[i] / x ;
    }
    float res = ((per)*(100)/n);
    cout << res << endl;


  
}

int main() {
   // int t ;
   // cin >> t;
   // while (t--) {
        solve();
    //}
    return 0;
}
