
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;cin>>n;
  vector<int>v(n);for(int i = 0;i<n;i++)cin>>v[i];

  for(int i = 0; i<n;i++){
    if(v[i]==0){
        cout << 2 <<endl;
        return;
    }
  }
  cout << 1 <<endl;


    
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
