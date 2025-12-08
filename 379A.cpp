




// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
        int a,b;cin>>a>>b;
        // so like he can make new candles from b available candles
       
        int cur_a = a,cur_b = 0;
        int total_hours = 0;
        while(cur_a>=1){

        total_hours += cur_a;
        cur_b +=cur_a;// 
        cur_a = cur_b/b;// making new candles from 
        cur_b = cur_b % b;
        }
        cout << total_hours <<endl;


     

        
    
     

      
      
      
      
  
   
    
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
