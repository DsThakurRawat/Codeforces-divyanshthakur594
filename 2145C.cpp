
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    // minimum number of consecutive letters that monocarp needs to remove from his string
    int n; cin >> n;
    string s; cin >> s;
   // map<char,int>mpp;
  //  for(int i = 0; i < s.size(); i++){
   //     mpp[s[i]]++;
   // }
  //  if(mpp['a'] == mpp['b']) cout << 0 << endl;
   // if(mpp['a'] == 0 || mpp['b'] == 0 ) cout << -1 << endl;
    // we have to effectively find the shortest substring having equal number of a and b


        vector<int>v(n);
        for(int i = 0; i < n; i++){
            if(s[i] == 'a') v[i] = -1;
            else v[i] = 1;
        }
        // calculationg using prefix sum

        
        int total_sum = accumulate(v.begin(),v.end(),0);
        map<int,int>pos;

        pos[0] = 0;
        int prefixsum = 0,ans = INT_MAX;
        for(int r = 0; r < n; r++){
            prefixsum += v[r];
            int target = prefixsum - total_sum;
            if(pos.contains(target)) ans = min(ans,r-pos[target] + 1);
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
