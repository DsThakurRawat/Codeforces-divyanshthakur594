
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;getline(cin,s);
 //cout << s <<endl;

 map<int,int>mp;

 for(int i = 0; i < s.size(); i++){
    if(s[i]>='a') mp[s[i]]++;
 }

 cout << mp.size()<<endl;


}
  


int main() {
   // int t ;
   // cin >> t;
   // while (t--) {
        solve();
   // }
    return 0;
}
