#include<bits/stdc++.h>
using namespace std;
// solution by divyansh 
const int INF = 1e9;


int main(){
   int t;
   cin >> t;
   while(t--){ 

       int n,k;
       cin >> n >> k;

       vector<int>arr(n);
       for(int i = 0; i < n; i++) cin >> arr[i];
       /*
      
       */

       // for -1 
        vector<int> dp(k, INF);
    dp[1 % k] = 0;                          // product of 0 elems ≡ 1

    for (int val : arr) {
        vector<int> ndp(k, INF);
        for (int r = 0; r < k; ++r) {
            if (dp[r] == INF) continue;
            for (int inc = 0; inc < k; ++inc) {
                int newVal = val + inc;
                int r2 = (r * (newVal % k)) % k;
                ndp[r2] = min(ndp[r2], dp[r] + inc);
            }
        }
        dp.swap(ndp);
    }
       

           if (dp[0] == INF) cout << -1 << endl;
        else cout << dp[0] << endl;
       

      
    
   }
   
return 0;

    
} 