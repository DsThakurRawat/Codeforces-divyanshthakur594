
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;



void solve() {

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];


    int cutoff = a[k - 1];
    int count = 0;

    for (int score : a)
        if (score >= cutoff && score > 0)
            count++;

    cout << count << endl;
   



  


}

int main() {
   // int t ;
   // cin >> t;
   // while (t--) {
        solve();
  //  }
    return 0;
}
