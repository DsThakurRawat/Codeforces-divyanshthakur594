#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    // Count number of 'a' and 'b'
    int count_a = count(s.begin(), s.end(), 'a');
    int count_b = count(s.begin(), s.end(), 'b');

    // If already balanced
    if (count_a == count_b) {
        cout << 0 << "\n";
        return;
    }

    // Impossible case: difference is larger than string length? Actually always possible
    // but let's use prefix sum + map to find minimum segment to remove
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = (s[i] == 'a' ? 1 : -1);

    int total_sum = count_a - count_b;  // difference to fix
    map<int, int> pos;  // stores first occurrence of prefix sums
    pos[0] = 0;

    int prefixsum = 0;
    int ans = INT_MAX;

    for (int r = 0; r < n; r++) {
        prefixsum += v[r];
        int target = prefixsum - total_sum; // segment sum needed
        if (pos.count(target))
            ans = min(ans, r - pos[target] + 1);
        if (!pos.count(prefixsum))
            pos[prefixsum] = r + 1;  // store first occurrence
    }

    if (ans == INT_MAX)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
