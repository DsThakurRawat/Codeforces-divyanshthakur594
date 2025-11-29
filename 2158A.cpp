
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    long long n;cin>>n;
    long long y,r;cin>>y>>r;

    // 
    int total = 0;
   
  
    if( r >= n){
        cout << n << endl;

    }
    else{
        y = y/2;
        cout << y + r << endl;
    }


    




    
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
