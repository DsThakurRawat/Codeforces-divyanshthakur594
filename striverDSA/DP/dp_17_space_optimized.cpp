#include <bits/stdc++.h>
using namespace std;

int findWays(vector<int>& num, int tar) {
    int n = num.size();
    vector<int> dp(tar + 1, 0);
    
    dp[0] = 1;
    if (num[0] <= tar) dp[num[0]] += 1;

    for (int ind = 1; ind < n; ind++) {
        // go from right to left to avoid overwriting values needed for this iteration
        for (int sum = tar; sum >= 0; sum--) {
            if (num[ind] <= sum)
                dp[sum] += dp[sum - num[ind]];
        }
    }

    return dp[tar];
}

 



int main() {
    vector<int> nums = {1, 2, 3, 4, 5}; 
    int target = 5;
    
    int result = findWays(nums, target);
    cout << "Number of subsets with sum " << target << " is: " << result << endl;

    return 0;
}
