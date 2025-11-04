
// simple template-test2
// code by divyansh rawat
/*
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.
*/

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
        if(tolower(s1[i]) < tolower(s2[i])){
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
