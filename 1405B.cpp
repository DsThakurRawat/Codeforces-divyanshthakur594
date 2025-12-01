
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
 
    long long  n;cin>>n;
    vector<long long>v(n);for(long long  &in : v) cin>>in;
    // we have to find maximum suffix sum
    vector<long long>suffixsum(n);
    suffixsum[n-1] = v[n-1];

    for(int i = n-2;i>=0;i--){
        suffixsum[i] = v[i]+suffixsum[i+1];
    }
    long long max_sum = LLONG_MIN;
    for(int i = 0;i<n;i++){
        max_sum = max(max_sum,suffixsum[i]);
    }
    cout << max_sum <<endl;


   










     


    
    
  

    
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
