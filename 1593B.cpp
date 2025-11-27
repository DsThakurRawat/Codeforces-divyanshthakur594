
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   string s;cin>>s;
   // a number is divisble by 25 if last two digits are one of 00,25,50,75
   
   string ans ="";

   for(int mask = 0; mask<(1LL << s.size());mask++){
    string no ="";

    for(long long j = 0; j<s.size();j++){
        if(mask & (1LL<<j)){
            no +=s[j];
        }
    }
    if(no.empty())continue;

    if(stoll(no)%25==0){
        if(no.size()>ans.size()) ans = no;
    }


}
cout << s.size()-ans.size()<<endl;




   




   

  

    
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
