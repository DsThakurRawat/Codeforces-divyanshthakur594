// convert it to tabulation
// dp-17 count number of subset with sum k
#include <bits/stdc++.h>
using namespace std;

int findWays(vector<int> &num, int tar) {
    int n = num.size();
    vector<vector<int>> dp(n, vector<int>(tar + 1, 0));

    // base case
    for (int i = 0; i < n; i++) dp[i][0] = 1;

    if (num[0] <= tar)
        dp[0][num[0]] = 1;

    for (int ind = 1; ind < n; ind++) {
        for (int sum = 0; sum <= tar; sum++) {
            int notTake = dp[ind - 1][sum];
            int take = 0;
            if (num[ind] <= sum)
                take = dp[ind - 1][sum - num[ind]];
            dp[ind][sum] = notTake + take;
        }
    }

    return dp[n - 1][tar];
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5}; 
    int target = 5;
    
    int result = findWays(nums, target);
    cout << "Number of subsets with sum " << target << " is: " << result << endl;

    return 0;
}
