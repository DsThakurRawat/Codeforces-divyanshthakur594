
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>v(n);for(auto &in : v)cin>>in;
    long long cnt = 0;            
    long long sum = 0;            
    for (long long x : v) {
        if (x > 0) cnt++;
        sum += x;
    }


    
   
    long long ans = min(cnt, sum - (n - 1));

    cout << ans << endl;

  

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
