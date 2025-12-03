
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;cin>>s;
  if(s.size()==1){
    cout << -1 << endl;
    return;
  }
  set<int>st;
  for(auto &c:s) st.insert(c);
  if(st.size()==1){
    cout << s <<endl;
  }
  
  string s1 ="";
  for(int i = 0;i<s.size();i++){
     
         s1 = s1 + s[i];
         int x = s1.size();
         int t = (x*(x+1))/2;

         if(t%2==0){
            cout << s1 << endl;
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
