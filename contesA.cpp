#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool liar = false;
    
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 0 && a[i + 1] == 0) {
                liar = true;
                break;
            }
        }

        // Special case for n=2 and both say 1
        if (!liar) {
            if (n == 2) {
                if (a[0] == 1 && a[1] == 1) {
                    liar = true;
                }
            }
        }

        if (liar) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
