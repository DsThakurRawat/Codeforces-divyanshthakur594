// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    vector<int>v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    // we gonna make parity of element same 
    // let gcd be g = K + 1;
    int g = k + 1;
    vector<int>ans(n);

    for(int i = 0; i < v.size(); i++){
        if( v[i] % g == 0) ans.push_back(v[i]);
        else if( v[i] % g != 0){
            if( v[i] < g){

               
                ans.push_back(g);


            }
            else if( v[i] > g){
                int r = v[i] % g;
                v[i] = v[i] + g;
                ans.push_back(v[i]);
            }




        }
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

    




    

  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
