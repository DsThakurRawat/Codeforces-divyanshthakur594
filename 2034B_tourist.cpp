/**
 *    author:  tourist
 *    created: 30.11.2024 06:36:17
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int ans = 0;
    int t = 0;
    for (char c : s) {
      if (t < 0) {
        t += 1;
        continue;
      }
      if (c == '0') {
        t += 1;
        if (t == m) {
          t = -k + 1;
          ans += 1;
        }
      } else {
        t = 0;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
