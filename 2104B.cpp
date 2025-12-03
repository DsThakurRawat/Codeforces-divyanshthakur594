
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;cin>>n;
    vector<long long>v(n);for(auto &in : v)cin>>in;
    vector<long long>ans;
    vector<long long>suffixsum(n),prefixmax(n);

    // calculate prefixmax
    prefixmax[0] = v[0];
    for(int i = 1;i<n;i++){
        prefixmax[i] = max(prefixmax[i-1],v[i]);
    }

    // calculate suffixsum
    suffixsum[n-1] = v[n-1];
    for(int i = n-2;i>=0;i--){
        suffixsum[i] = suffixsum[i+1]+v[i];
    }
    for(int i = 0;i<n;i++){
        ans[i] = suffixsum[i+1]+prefixmax[i];
    }

    for(ll & ot : ans) cout << ot << " ";
    cout << endl;


    
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
