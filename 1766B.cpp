#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(const string &s) {
    int n = s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j]) j = pi[j-1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }
    return pi;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        auto pi = prefix_function(s);

        bool ok = false;
        for (int i = 1; i < n; i++) {
            if (pi[i] >= 2) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
}
