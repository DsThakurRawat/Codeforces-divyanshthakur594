#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int findWays(vector<int>& num, int tar) {
    int n = num.size();
    vector<int> prev(tar + 1, 0), cur(tar + 1, 0);

    // Base cases
    if (num[0] == 0)
        prev[0] = 2;  // pick or not pick
    else
        prev[0] = 1;  // only not pick

    if (num[0] != 0 && num[0] <= tar)
        prev[num[0]] = 1;

    for (int ind = 1; ind < n; ind++) {
        for (int sum = 0; sum <= tar; sum++) {
            int notTake = prev[sum];
            int take = 0;
            if (num[ind] <= sum)
                take = prev[sum - num[ind]];
            cur[sum] = (notTake + take) % mod;
        }
        prev = cur;
    }

    return prev[tar];
}

int countPartitions(int n, int d, vector<int>& arr) {
    int totSum = accumulate(arr.begin(), arr.end(), 0);

    if (totSum - d < 0 || (totSum - d) % 2 != 0)
        return 0;

    return findWays(arr, (totSum - d) / 2);
}
