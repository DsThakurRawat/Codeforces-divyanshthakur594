
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;cin>>k;
    vector<int>nums;

    for(int i = 0; i < 1e4; i++){
      if(i % 3 != 0 || i % 2 == 1) nums.push_back(i);
    }

    cout << nums[k-1] << endl;



  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
