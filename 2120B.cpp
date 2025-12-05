// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n, s;
        cin >> n >> s;

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int dxi, dyi, xi, yi;
            cin >> dxi >> dyi >> xi >> yi;

            if (dxi == dyi) {
                ans += (xi == yi);
            } else {
                ans += (xi + yi == s);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
