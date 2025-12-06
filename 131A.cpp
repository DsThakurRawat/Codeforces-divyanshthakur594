
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long 
;
void solve() {
    string s;cin>>s;
   string ans="";
    for(int i = 0;i<s.size();i++){
        if(i==0){
     char c =  toupper(s[0]);
     ans += c;
        
    }
    else{
        char c = tolower(s[i]);
        ans += c;
    }

    }
    cout << ans<<endl;

  

    
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
