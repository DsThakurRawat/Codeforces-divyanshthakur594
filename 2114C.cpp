
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;cin>>n;
  vector<int>a(n);for(auto &in:a)cin>>in;
  int ans = 0;
  int last = -1;
  for(int i = 0;i<n;i++){
    if(last == -1){
        last = a[i];
        ans++;
    }
    else if(a[i]>last+1){
        last = a[i];
        ans++;
    }
  }
  cout << ans << endl;



    
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
