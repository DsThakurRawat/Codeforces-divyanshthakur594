
// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int sum = 15;
    vector<int>nums(5);
    for(int i = 0; i < 5; i++) cin >> nums[i];
    int sum2 = accumulate(nums.begin(),nums.end(),0);

    cout << sum - sum2 << endl;



  
}

int main() {
   // int t ;
   // cin >> t;
   // while (t--) {
        solve();
    //}
    return 0;
}
