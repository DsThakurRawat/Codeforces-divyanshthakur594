
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    
    vector<int> p;
    int l = 0, r = n-1;
    
    while(l < r && s[l] == '1' && s[r] == '0') l++, r--; 
    
    int first_zero = -1, last_one = -1;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') { first_zero = i; break; }
    }
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == '1') { last_one = i; break; }
    }
    
    if(first_zero == -1 || last_one == -1 || first_zero > last_one) {
        cout << 0 << "\n";
        return;
    }
    
    for(int i = 0; i <= last_one; i++) {
        if(s[i] == '0') p.push_back(i+1);
    }
    for(int i = first_zero; i < n; i++) {
        if(s[i] == '1') p.push_back(i+1);
    }
    
    sort(p.begin(), p.end());
    cout << p.size() << "\n";
    for(int idx : p) cout << idx << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
