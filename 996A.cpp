
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    vector<int>v(5);
    v = {1,5,10,20,100};
  //  cout << v[1] << endl;
   int count = 0;

  for(int i = 0; i < n; i++){

     n = n - v[i];
     count++;
     if( n <= v[i]){
     i = i;
     }
     if( n == 0) break;
    
  }

   cout << count << endl;

   

   




  
}

int main() {
  //  int t ;
   // cin >> t;
 //   while (t--) {
        solve();
 //   }
    return 0;
}
