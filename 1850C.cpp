
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<string>grid(n);
    string s;

    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }
    for(int i = 0; i < n; i++){
        string t = grid[i];
        for(int j = 0; j < t.size(); j++){
            if(t[i] != '.') s+=t[i];

        }
    }
    cout << s << endl;

  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
