
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;cin>>s;
  int n = s.size();
  for(int i = 0;i<n-1;i++){
    if(s[i]==s[i+1]){
        cout << s.substr(i,2)<<endl;
        return;
    }
  }
  for(int i = 0;i<n-2;i++){
    if(s[i]!=s[i+1] and s[i] != s[i+2] and s[i+1] != s[i+2]){
        cout << s.substr(i,3)<<endl;
        return;
    }
  }

  cout << -1 << endl;



  



    
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
