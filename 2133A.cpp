
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    set<int>st(v.begin(),v.end());
    if(st.size() < v.size()) cout << "YES" << endl;
    else 
     cout << "NO" << endl;





  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
