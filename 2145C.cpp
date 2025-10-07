
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   
    int n; cin >> n;
    string s; cin >> s;
   


        vector<int>v(n);
        for(int i = 0; i < n; i++){
            if(s[i] == 'a') v[i] = 1;
            else v[i] = -1;
        }
      

        
        int total_sum = accumulate(v.begin(),v.end(),0);
        map<int,int>pos;

        pos[0] = 0;
        int prefixsum = 0,ans = INT_MAX;
        for(int r = 0; r < n; r++){
            prefixsum += v[r];
            int target = prefixsum - total_sum;
            if(pos.count(target)) ans = min(ans,r-pos[target] + 1);
            pos[prefixsum] = r + 1;
        }
        if( ans == INT_MAX) cout << -1 << endl;
        else cout << ans << endl;












  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
