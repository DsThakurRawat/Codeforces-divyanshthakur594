
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
     string s;
    cin >> s;
    string p1, x1, p2, x2;
    
    for(char c : s){
        if(c == '0') p1 += c;
        else x1 += c;
        if(c == '1') p2 += c;
        else x2 += c;
    }
    
    string rev_x1 = x1; reverse(rev_x1.begin(), rev_x1.end());
    if(x1 == rev_x1) {
        cout << p1 << "\n";
        return;
    }
    
    string rev_x2 = x2; reverse(rev_x2.begin(), rev_x2.end());
    if(x2 == rev_x2) {
        cout << p2 << "\n";
        return;
    }
    
    cout << -1 << "\n";

    
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
