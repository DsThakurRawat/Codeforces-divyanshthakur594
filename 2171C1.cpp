
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   
    int n; 
    cin >> n;
    vector<int> a(n), b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int odd_diff = 0, even_diff = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            if((i + 1) & 1) odd_diff++;
            else even_diff++;
        }
    }

    if(odd_diff > even_diff) cout << "Ajisai"<<endl;
    else if(even_diff > odd_diff) cout << "Mai"<<endl;
    else cout << "Tie"<<endl;
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
