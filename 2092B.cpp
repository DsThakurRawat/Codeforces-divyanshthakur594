
// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int z1 = 0, z2 = 0;

    for (int i = 0; i < n; i++) {
      
        if (i % 2 == 0) {
            if (a[i] == '0') z1++;   
        } else {
            if (b[i] == '0') z1++;    
        }

       
        if (i % 2 == 0) {
            if (b[i] == '0') z2++;  
        } else {
            if (a[i] == '0') z2++;   
        }
    }

    int need1 = (n + 1) / 2;  
    int need2 = n / 2;         
    if (z1 >= need1 && z2 >= need2)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
