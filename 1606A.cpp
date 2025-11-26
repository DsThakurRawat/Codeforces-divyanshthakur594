
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int n =s.size();
    if(s[0]!=s[n-1]){
        if(s[0]!='a')s[0]='b';
        else s[0]='a';
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
