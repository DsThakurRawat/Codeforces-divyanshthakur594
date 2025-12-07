#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

void solve() {
    int n, m, k;
    std::cin >> n >> m >> k;
    
    std::string s;
    std::cin >> s;
    
    int ans = 0;
    int cover = 0;
    int len = 0;
    for (int i = 0; i < n; i++) {
        if (i >= cover && s[i] == '0') {
            len++;
        } else {
            len = 0;
        }
        if (len == m) {
            ans++;
            len = 0;
            cover = i + k;
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}