#include <bits/stdc++.h>
using namespace std;
//DP solution that returns the actual Longest Common Substring
string longestCommonSubstring(string a, string b) {
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    int maxLen = 0;
    int endIndex = 0;  // ending index in string a

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;

                if (dp[i][j] > maxLen) {
                    maxLen = dp[i][j];
                    endIndex = i - 1;  // track the end of substring in a
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    if (maxLen == 0) return "";  // no common substring

    return a.substr(endIndex - maxLen + 1, maxLen);
}

int main() {
    string a = "abcdxyz";
    string b = "xyzabcd";

    cout << longestCommonSubstring(a, b) << "\n";
}
