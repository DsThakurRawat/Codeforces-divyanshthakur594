
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;cin>>n;
  vector<int>a(n);for(int &in:a)cin>>in;
  vector<int>b(n);for(int &in:b)cin>>in;
  int score = 0;

    int mini = 0;
    int maxi = 0;
    
    for (int i = 0; i < n; ++i) {

            int score1 = max(maxi - a[i], b[i] - mini);
            int score2 = min(mini - a[i], b[i] - maxi);
            
        maxi = score1;
        mini = score2;
    }
    
    cout << maxi << endl;











}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
