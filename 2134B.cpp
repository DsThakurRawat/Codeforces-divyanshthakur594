// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    vector<int>v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    // 2134B

    // we gonna make parity of element same 
    // let gcd be g = K + 1;
    int g = k + 1;
    vector<int>ans;


    for (int i = 0; i < n; i++) {
        long long r = v[i] % g;
        ans.push_back(v[i] + k * r);  
    }




    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
        
    }
    cout << endl;

    




    

  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
