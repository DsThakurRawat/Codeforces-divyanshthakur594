
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  //  int n;cin>>n;
    vector<string>grid(8);
    string s = "";

    for(int i = 0; i < 8; i++){
        cin >> grid[i];
    }
    for(int i = 0; i < 8; i++){
        string t = grid[i];
        for(int j = 0; j < t.size(); j++){
            if(t[i] == '.') s+=t[i];

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
