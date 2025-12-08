#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> pref(n), suf(n);

    // PREFIX MINIMUM
    pref[0] = a[0];
    for(int i = 1; i < n; i++) {
        pref[i] = min(pref[i-1], a[i]);
    }

    // SUFFIX MAXIMUM
    
    suf[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--) {
        suf[i] = max(suf[i+1], a[i]);
    }

    // print to check
    for(int x : pref) cout << x << " ";
    cout << "\n";

    for(int x : suf) cout << x << " ";
    cout << "\n";

    return 0;
}
