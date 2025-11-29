// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    long long n;cin>>n;
    long long y,r;cin>>y>>r;

    // 
    long long rs = min(r,n);
    long long rem = n - rs;
    long long ys = min(y/2,rem);
    cout << rs+ys<<endl;



    




    
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