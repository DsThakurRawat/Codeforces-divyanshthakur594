
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>nums(n);for(int i = 0; i< n; i++) cin >> nums[i];
    long long sum =0;
    for(int i = 0; i < n; i++) sum+=nums[i];
    if(sum % 2 != 0) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;


  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
