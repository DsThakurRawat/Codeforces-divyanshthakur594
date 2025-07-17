#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];

        int start = k - 1;
        int height = h[start];
        int maxheight = *max_element(h.begin(), h.end());

        if (height == maxheight) {
            cout << "YES\n";
            continue;
        }

        bool canReach = false;
        for (int i = 0; i < n; ++i) {
            if (h[i] == maxheight) {
                int teleport_time = abs(h[i] - height);
                if (teleport_time <= height - 1) {
                    canReach = true;
                    break;
                }
            }
        }

        cout << (canReach ? "YES" : "NO") << '\n';
    }

    return 0;
}
