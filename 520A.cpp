
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   string s;
    getline(cin, s);
    set<char> letters;

    for (char c : s) {
        if (isalpha(c)) {
            letters.insert(tolower(c));
        }
    }

    cout << (letters.size() == 26 ? "YES" : "NO") << endl;

        

      

    }



   



  


  


int main() {
   // int t ;
   // cin >> t;
   // while (t--) {
        solve();
  //  }
    return 0;
}
