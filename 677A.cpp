
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , h;
    cin >> n >> h;
    vector<int>v(n);
    for(int i =0; i < n; i++) cin >> v[i];
    // h is the height of the fence 
    int width = 0;

    for(int i = 0; i < n; i++){
        if(v[i] <= h ) width++;
        else if( v[i] > h) width = width + 2;
    }

    cout << width << endl;



  
}

int main() {
   // int t ;
   // cin >> t;
  //  while (t--) {
        solve();
   /// }
    return 0;
}
