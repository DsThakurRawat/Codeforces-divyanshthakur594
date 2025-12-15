#include <bits/stdc++.h>
using namespace std;

const int mod =1;


int findWays(vector<int>& num, int tar) {
    int n = num.size();
    vector<vector<int>> dp(n, vector<int>(tar + 1, 0));

    // Base cases
    if (num[0] == 0)
        dp[0][0] = 2; // pick or not pick
    else
        dp[0][0] = 1; // only not pick

    if (num[0] != 0 && num[0] <= tar)
        dp[0][num[0]] = 1;

    for (int ind = 1; ind < n; ind++) {
        for (int sum = 0; sum <= tar; sum++) {
            int notTake = dp[ind - 1][sum];
            int take = 0;
            if (num[ind] <= sum)
                take = dp[ind - 1][sum - num[ind]];
            dp[ind][sum] = (notTake + take) % mod;
        }
    }

    return dp[n - 1][tar];
}

int countPartitions(int n, int d, vector<int>& arr) {
    int totSum = 0;
    for (auto& it : arr) totSum += it;

    if (totSum - d < 0 || (totSum - d) % 2 != 0)
        return 0;

    return findWays(arr, (totSum - d) / 2);
}
