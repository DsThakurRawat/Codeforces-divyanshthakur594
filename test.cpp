/**
 
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (is_sorted(a.begin(), a.end())) {
      cout << -1 << '\n';
      continue;
    }
    auto b = a;
    sort(b.begin(), b.end());
    int ans = int(2e9);
    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        ans = min(ans, max(a[i] - b[0], b[n - 1] - a[i]));
      }
    }
    cout << ans << nl;
  }
  return 0;
}
