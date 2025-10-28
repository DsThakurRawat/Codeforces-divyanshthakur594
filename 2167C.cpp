
    // simple template-test2
    // code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
            int n; 
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        vector<int> odd,evn;

        for(int i = 0; i < n; i++){
            if(v[i] % 2 == 0)evn.push_back(v[i]);
            else odd.push_back(v[i]);
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
