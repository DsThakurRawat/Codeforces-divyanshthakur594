
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   // int n;cin>>n;

   // vector<int>v(n);for(auto &in:v)cin>>in;
    // gcd(x,0) = x and gcd(x,1) = 1;
    long long  a,b;cin>>a>>b;
    // ex = gcd(a,b);
    // 0,0 if fans can get infinite ex 
    // other wise a -> max and b ->min excitement

    if(a==b) {
        cout << 0 << " "<<0 << endl;
    }

    else {
        long long g = abs(a-b);
        long long m = min(a%g,g-a%g);
        cout << g <<" "<<m<<endl;
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
