
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

      int n, m;
        cin >> n >> m;

        vector<int> height(n + 1);
        iota(height.begin(), height.end(), 0); // height[i] = i initially
        vector<long long> temp(n + 1, 0);      // total treasure per starting shaft

        for (int i = 0; i < m; ++i) {
            int x, y;
            long long v;
            cin >> x >> y >> v;

            // both travelers collect v
            temp[height[x]] += v;
            temp[height[y]] += v;

            // swap their current shafts
            swap(height[x], height[y]);
        }

        cout << *max_element(temp.begin() + 1, temp.end()) << "\n";
    }

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
