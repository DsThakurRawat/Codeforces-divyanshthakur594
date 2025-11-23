
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

  int n;cin>>n;
  vector<int>p(n);for(auto &in:p)cin>>in;
  vector<int>v(n);

  for(int i = 1; i <=n; i++){
    v[i-1] = p[i-1]-i;
  }
  int g = v[0];
  for(int i = 1; i < v.size(); i++){
        g = gcd(g, v[i]);  
    }

    cout << g <<endl;







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
