
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;cin>>n;
    vector<int>nums(n),ans(n);
    for(int i =0; i < n; i++) cin >> nums[i];

    for(int i = 0; i < n; i++){
        int take = nums[i];
        ans[take-1] = i + 1; 
    }
    for(int x: ans) cout << x << " ";

    


    
  

}
  


int main() {
   // int t ;
   //// cin >> t;
   // while (t--) {
        solve();
  //  }
    return 0;
}
