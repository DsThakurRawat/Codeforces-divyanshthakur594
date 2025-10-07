
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    // minimum number of consecutive letters that monocarp needs to remove from his string
    int n; cin >> n;
    string s; cin >> s;
    map<char,int>mpp;
    for(int i = 0; i < s.size(); i++){
        mpp[s[i]]++;
    }
    if(mpp['a'] == mpp['b']) cout << 0 << endl;
    if(mpp['a'] == 0 || mpp['b'] == 0 ) cout << -1 << endl;
                 
    







  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
