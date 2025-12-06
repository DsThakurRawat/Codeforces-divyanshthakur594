
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long 
;
void solve() {
    string s;cin>>s;
    string ans="";
    int n =s.size();
      if (n == 1) {
        if (islower(s[0])) s[0] = toupper(s[0]);
        else s[0] = tolower(s[0]);
        cout << s;
return;
    }

      bool ok = true;
    for (int i = 1; i < n; i++) {
        if (!isupper(s[i])) {
            ok = false;
            break;
        }
    }

    if (ok) {
        
        for (char &c : s) {
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }

    
}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 //   int t ;
   // t=1;
   // cin >> t;
   // while (t--) {
        solve();
  //  }
    return 0;
}
