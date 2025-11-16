
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>v(n);for(int i = 0; i<n; i++)cin>>v[i];
    vector<int>nums = v;

    int maxi = *max_element(nums.begin(),nums.end());
    int min = *min_element(nums.begin(),nums.end());

    cout << maxi - min <<endl;

  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}