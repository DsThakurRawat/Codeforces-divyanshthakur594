
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   
    int n; cin >> n;
    vector<int>a(n), b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    int cntA = 0, cntM = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            if((i+1) % 2 == 1) cntA++; 
            else cntM++;              
        }
    }

    int xorA = cntA % 2;
    int xorB = cntM % 2;

    if(xorA > xorB) cout << "Ajisai\n";
    else if(xorB > xorA) cout << "Mai\n";
    else cout << "Tie\n";
}





    

  


  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
