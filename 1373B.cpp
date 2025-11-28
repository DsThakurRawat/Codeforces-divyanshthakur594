
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  
   string s;cin>>s;
   // we have to make sur allice win
   // two differant adjacent character
   string a="01";
   string b = "10";
   int count = 0;
   
    if(s.find(a)!=string::npos)count++;
    if(s.find(b)!=string::npos)count++;
   
   if(count % 2 !=1 )cout << "DA"<<endl;
   else cout << "NET"<<endl;




    
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
