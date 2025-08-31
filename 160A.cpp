
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    //your sum should be strictly more that your twins' sum.
    int n; cin >> n ;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int coincount = 0;
    int coinsum = 0;
    int remsum = accumulate(v.begin(),v.end(),0);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    for(int i = 0; i < n; i++) {
        remsum = remsum - v[i];
        coincount++;
        coinsum += v[i];
        if(coinsum > remsum)break;


    }
    cout << coincount << endl;






  
}

int main() {
  //  int t ;
   // cin >> t;
   // while (t--) {
        solve();
    //}
    return 0;
}
