#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool liar = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 0 && a[i + 1] == 0) {
                liar = true;
                break;
            }
        }

        if (!liar && n == 2 && a[0] == 1 && a[1] == 1) {
            liar = true;
        }

        cout << (liar ? "YES" : "NO") << "\n";
    }

    return 0;
}
