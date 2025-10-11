
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

  //For each set of input data, output one integer — the minimum number of operations required to satisfy the condition MEX(a)=k
  int count = 0;

  for(int i = 0; i < n; i++){
    if(nums[i] == k) count++;
  }
  cout << count << endl;


}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
