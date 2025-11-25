
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<long long >v(n);for(int i = 0;i<n;i++)cin>>v[i];
    long long ans = v[n-1]-v[0];

    for(long long  i = 0;i<n;i++){
        ans = max(ans,v[i]-v[0]);// check with all
    }
    for(long long i = 0;i<n-1;i++){
        ans = max(ans,v[n-1]-v[i]);
    }
    for(long long i = 0;i<n-1;i++){
        ans = max(ans,v[i]-v[i+1]);

    }
    cout << ans<<endl;
   
    

    



    
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
