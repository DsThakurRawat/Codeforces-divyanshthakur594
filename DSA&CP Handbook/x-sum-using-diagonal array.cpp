#include <bits/stdc++.h>
using namespace std;
long long usingDiagonalArrays(vector<vector<int>>& a) {
    int n = a.size(), m = a[0].size();

    int offset = m + 5;  
    vector<long long> d1(n+m+10), d2(n+m+10);

    // Precompute diagonal sums
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            d1[i - j + offset] += a[i][j];
            d2[i + j] += a[i][j];
        }
    }

    long long ans = 0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            long long sum = d1[i-j+offset] + d2[i+j] - a[i][j];
            ans = max(ans, sum);
        }
    }
    return ans;
}
