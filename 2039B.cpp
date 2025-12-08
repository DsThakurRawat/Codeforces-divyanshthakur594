
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

  
  //OBSERVATION: Two length strings are valid if the adjacent characters are same.
/*   
 THOUGHT
    So if s contains two consecutive same characters, we can print it right away. 
    All that remains is to consider strings without two consecutive same characters.


*/

/*  
  OBSERVATION: Three length strings are valid if all characters are different.

  THOUGHT: 
  So if s
 contains three consecutive different characters, we can print it right away.



*/



























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
