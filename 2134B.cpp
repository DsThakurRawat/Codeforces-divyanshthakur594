// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
        cin >> n >> k;
        vector<long long> a(n);

        long long g = k + 1;  
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            long long r = a[i] % g;      
            a[i] += r * 1LL * k;        
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    




    

  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
