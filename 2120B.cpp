
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(int t ) {
     
    int n, s, ans = 0, dxi, dyi, xi, yi;
    while(t--) {
        cin >> n >> s;
        
        for (int i = 0; i < n; i++) {
            cin >> dxi >> dyi >> xi >> yi;
            if (dxi == dyi) ans += (xi == yi);
            else ans += (xi + yi == s);
        }
        
        cout << ans << '\n';
        ans = 0;
    
  

    
}
} 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    t=1;
    cin >> t;
    while (t--) {
        solve(t);
    }
    return 0;
}
