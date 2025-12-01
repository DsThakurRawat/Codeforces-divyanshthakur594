
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
        int a,b;cin>>a>>b;
        // so like he can make new candles from b available candles
       
        int sum =0;
        int rem =0;
       while(a>=b){
          sum +=a;
          a = a/b;
          rem = a % b;
          a +=rem;
       }
       cout << a + sum <<endl;



     

        
    
     

      
      
      
      
  
   
    
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
