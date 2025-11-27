
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   string s;cin>>s;
   // a number is divisble by 25 if last two digits are one of 00,25,50,75
   
    vector<string>v = {"00","25","50","75"};
    long long ans = LLONG_MAX;

    for(auto  it : v ){
          long long cnt = 0;
          int ind = it.size()-1;


          for(long long i = s.size()-1;i>=0;i--){
            if(s[i]==it[ind]) {ind--;
            if(ind < 0)break;
             }
              else cnt++;
          }
          if(ind >= 0)cnt = LLONG_MAX;
          ans = min(ans,cnt);

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
