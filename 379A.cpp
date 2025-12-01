
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
        int a,b;cin>>a>>b;
        // so like he can make new candles from b available candles
       
        int cur_a = a,cur_b = 0;
        while(cur_a>=1){
        cur_b +=cur_a;
        cur_a = cur_b/b;
        cur_b = cur_b % b;
        }
        cout << cur_a <<endl;


     

        
    
     

      
      
      
      
  
   
    
}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   // int t ;
   // t=1;
   // cin >> t;
    //while (t--) {
        solve();
    //}
    return 0;
}
