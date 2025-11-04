
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1; cin >> s1;
    string s2; cin >>s2;
    // if first string is grater than 2nd print 1 and if 2nd is greater than 1st print -1 if both equal print 0;

   
    for(int i = 0; i < s1.size(); i++){
        if(tolower(s1[i]) > tolower(s2[i])){
            cout << 1 << endl;
            return;

        }
        if(tolower(s1[i]) > tolower(s2[i])){
            cout << -1 << endl;
            return;

        }
    }
    cout << 0 << endl;

}


int main() {
   // int t ;
   // cin >> t;
   // while (t--) {
        solve();
   // }
    return 0;
}
