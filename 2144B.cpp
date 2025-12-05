#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> pos0;
    vector<int> used(n, 0);

    for(int i = 0; i < n; i++) {
        cin >> p[i];
        --p[i];
        if(p[i] == -1)
            pos0.push_back(i);
        else
            used[p[i]] = 1;
    }

    if(pos0.size() == 1) {
        int missing = -1;
        for(int x = 0; x < n; x++) {
            if(!used[x]) {
                missing = x;
                break;
            }
        }
        p[pos0[0]] = missing;
    }

    int l = 0, r = n - 1;
    while(l < n && p[l] == l) l++;
    while(r >= 0 && p[r] == r) r--;

    if(l >= r) {
        cout << 0 << endl;
        return;
    }

    cout << (r - l + 1) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}
