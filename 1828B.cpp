
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    vector<int>nums;
    for(auto &in:nums){
        cin >>in;
        nums.push_back(in);

    }



        unordered_map<long long, unordered_map<int, int>> mp;

        long long px = 0; // prefix XOR
        int diff = 0;      // evens - odds
        int ans = 0;

        // initial state for index = -1
        mp[0][0] = -1;

        for(int i = 0; i < nums.size(); i++){
            px ^= nums[i];

            if(nums[i] % 2 == 0) diff++;
            else diff--;

            if(mp[px].count(diff)){
                ans = max(ans, i - mp[px][diff]);
            } else {
                mp[px][diff] = i;
            }
        }

        cout << ans;
  

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
