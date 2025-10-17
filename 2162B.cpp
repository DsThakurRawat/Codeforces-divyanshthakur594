
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  
    int n;
    string s;
    cin >> n >> s;

    int l = 0, r = n - 1;
    while(l < r && s[l] == s[r]) l++, r--;

    if(l >= r) {
        cout << 0 << endl;
        return;
    }

    vector<int> p;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0' && i <= r) p.push_back(i + 1);
    }
    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == '1' && i >= l) p.push_back(i + 1);
    }

    sort(p.begin(), p.end());
    cout << p.size() << endl;
    for(int idx : p) cout << idx << " ";
    cout << endl;

    
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
