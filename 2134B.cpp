// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    vector<int>v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    // we gonna make parity of element same 
    int a = gcd(gcd(v[0],v[1]),v[2]);
    
    

    while( a <= 1){
     

        v[0] = v[0] + k;
        v[1] = v[1] + k;
        v[2] = v[2] + k;

        a = gcd(gcd(v[0],v[1]),v[2]);
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
