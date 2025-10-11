
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    vector<int>nums(n);
    map<int,int>mpp;
    for(int i = 0; i < n; i++) cin >> nums[i];

  //For each set of input data, output one integer — the minimum number of operations required to satisfy the condition MEX(a)=k
  int count = 0;

  for(int i = 0; i < n; i++){
    if(nums[i] == k) count++;
    if(nums[i] < k) mpp[nums[i]]++;
  }
  int ans = 0;

  for(int i = 0; i <n; i++){
    if(!mpp[i]){
        ans++;
    }
  }
  cout << max(ans,count) << endl;
 


}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
