
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin>>s;
    string ans;
    for(int i=0;i<s.size();i++){
        if(i == 0) ans +=toupper(s[i]);
        else ans +=s[i];

    }
    cout << ans << endl;
  


}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
