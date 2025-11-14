
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    

    // denominations are sum of 1,5,10,20,100

    int n;cin>>n;
    vector<int>coins={1,5,10,20,100};
    vector<int>dp(n+1);
    dp[0] = 0;
    for(int i = 0; i <= n; i++){
      for(int take : coins){
         if(take <= i){
            dp[i] = min(dp[i],dp[i-take]+1);
         }
      }
    }
    cout << dp[n]<<endl;






   

  
}

int main() {
  //  int t ;
   // cin >> t;
 //   while (t--) {
        solve();
 //   }
    return 0;
}
