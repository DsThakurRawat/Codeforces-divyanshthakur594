
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , k; cin >> n >> k;
    string s; cin >> s;
    // char 0 mono remove the top cards
    // char 1 mono remove bottom card
    // char 2 if either top or bottom card can be removed
    int top(0),bottom(0), uncretain(0);
    for(int i = 0; i < k; i++){
        if(s[i] == '0') top++;
        else if(s[i] == '1') bottom++;
        else uncretain++;
    }
    string ans(n,'+');
    for(int i = 0; i < top; i++) ans[i] = '-';
    for(int i = n-1; i >=n-bottom;i--) ans[i] = '-';
    if(k == n){
        for(int i = 0; i < n; i++) ans[i] = '-';
        cout << ans << endl;
        return;
    }
    for(int i = top; i < top+uncretain; i++) ans[i] = '?';
    for(int i = n - bottom - uncretain; i < n-bottom; i++) ans[i] = '?';
    cout << ans << endl;  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
