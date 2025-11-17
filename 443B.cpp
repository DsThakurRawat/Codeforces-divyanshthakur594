
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

bool match(char a, char b) {
    return a == b || a == '?' || b == '?';
}


void solve() {
    string s;cin>>s;
    int n;cin>>n;
    //A tandem repeat of length 2n is string s, where for any position i (1 ≤ i ≤ n) the following condition fulfills: si = si + n.
    string copy = s+string(n,'?');
    int N = copy.size();
      int ans = 0;
      string t = copy;
      for (int m = 1; 2 * m <= N; m++) {
        int cnt = 0;
        bool ok = false;

        for (int i = 0; i < N - m; i++) {
            if (match(t[i], t[i + m])) {
                cnt++;
            } else {
                cnt = 0;
            }
            if (cnt >= m) {
                ok = true;
                break;
            }
        }

        if (ok) ans = max(ans, 2 * m);
    }






     


  

}
  


int main() {
  //  int t ;
   // cin >> t;
   // while (t--) {
        solve();
   // }
    return 0;
}
