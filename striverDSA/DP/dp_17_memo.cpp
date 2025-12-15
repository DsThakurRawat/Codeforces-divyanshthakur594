#include <bits/stdc++.h>
using namespace std;

// Declare function before main
int memo(vector<int>& nums, int ind, int target, vector<vector<int>>& dp);

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int n = nums.size();
    int target = 5;

    // dp[n][target+1]
    vector<vector<int>> dp(n, vector<int>(target + 1, -1));

    int ans = memo(nums, n - 1, target, dp);
    cout << "Number of subsets with sum " << target << " = " << ans << endl;

    return 0;
}

int memo(vector<int>& nums, int ind, int target, vector<vector<int>>& dp) {
    if (target == 0) return 1;
    if (ind == 0) return nums[0] == target;

    if (dp[ind][target] != -1) return dp[ind][target];

    int not_pick = memo(nums, ind - 1, target, dp);
    int pick = 0;
    if (nums[ind] <= target)
        pick = memo(nums, ind - 1, target - nums[ind], dp);

    return dp[ind][target] = pick + not_pick;
}
