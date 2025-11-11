
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;cin>>s;
  string temp;
  for(int i = 0; i < s.size(); i++){
    temp += tolower(s[i]);
  }
  string temp2 = "yes";
  
  if(temp == temp2) cout<<"YES"<<endl;
  else cout << "NO"<<endl;



  


}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
