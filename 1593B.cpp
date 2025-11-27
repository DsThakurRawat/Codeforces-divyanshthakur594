
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   string s;cin>>s;
   // a number is divisble by 25 if last two digits are one of 00,25,50,75
   string no ="";
   string ans ="";

   for(long long  i = 0;i<s.size();i++){
    for(long long j = i; j<s.size();j++){
        no += s[j];
        if(stoll(no)%25 == 0){
           ans=no;
        }

         
       

    }
   }
   cout << ans <<endl;

   




   

  

    
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
