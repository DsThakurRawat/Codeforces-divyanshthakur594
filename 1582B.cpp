
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
 int n;cin>>n;                                        // a number is divisble by 25 if last two digits are one of 00,25,50,75
 vector<int>v(n);for(auto & in : v)cin>>in;
 
 long long cnt = 0;
 long long cntt=0;
 for(int i = 0;i<n;i++){
    if(v[i]==0)cntt++;
    if(v[i]==1)cnt++;

 }
 cout << cnt*cntt<<endl;

 


   




   

  

    
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
