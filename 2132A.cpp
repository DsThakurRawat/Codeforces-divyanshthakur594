
// simple template-test2
// code by divyansh thakur rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string a; cin >> a;
    int m; cin >> m;
    string b , c;
    cin >> b >> c;
    string d = "";
    string v = "";

    for(int i = 0; i < m; i++){
        if(c[i] == 'V') {
           v +=  b[i];
        }
        else {
            d += b[i];

        }
    }
    reverse(v.begin(),v.end());
    string ans = v+a+d;

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
