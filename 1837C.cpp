
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin>>s;
    char x = '0';

    //❗Choose 0/1 for ? so that the final string has as few “10” transitions as possible

    for(auto &c : s) {
        if(c == '?') c=x;
       else x = c;
    }
    cout << s <<endl;

  

}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
