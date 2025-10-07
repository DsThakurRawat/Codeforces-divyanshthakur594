#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for(int i = 0; i < int(n); i++) 
 
void solve() {                    
    int n;
    string s;
    cin >> n >> s;
    int cur = count(s.begin(), s.end(), 'a') - count(s.begin(), s.end(), 'b');
    map<int, int> lst;
    int pr = 0;
    lst[pr] = -1;
    int ans = n;
    forn(i, n){
        pr += s[i] == 'a' ? 1 : -1;
        lst[pr] = i;
        if (lst.count(pr - cur))
            ans = min(ans, i - lst[pr - cur]);
    }
    cout << (ans == n ? -1 : ans) << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    forn(i, t) solve();
}