// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;

void solve() {
    // maple has two +ve integer a , b;
    /* choose any +ve integer
    */
   int a,b; cin >> a >> b;

   if( a==b) cout << 0 << endl;
   /*
   if a = 6 and b = 8
   then first multiply a by 8
   a = 48
   now b by 6 
   b = 48

   for a = 13 and b = 23
   for a = 10 and b=3
   multipl
   
   */

   if(a == 1 || b ==1 ) cout << 1 << endl;

   else{
    cout << 2 << endl;
   }








  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
