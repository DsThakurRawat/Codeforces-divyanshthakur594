#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // PREFIX SUM
    vector<long long> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }

    // SUFFIX SUM
    vector<long long> suff(n);
    suff[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suff[i] = suff[i + 1] + a[i];
    }

    // print prefix
    cout << "Prefix: ";
    for (long long x : pref) cout << x << " ";
    cout << "\n";

    // print suffix
    cout << "Suffix: ";
    for (long long x : suff) cout << x << " ";
    cout << "\n";

    return 0;
}

