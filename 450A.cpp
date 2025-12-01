
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n,m;cin>>n>>m;
  vector<int>a(n+1);for(int i = 1;i<=n;i++)cin>>a[i];
  int max_elementindex = 0;

  int maxi = INT_MIN;

  for(int i = 1;i<n=;i++){
  if(a[i]==max(maxi,a[i])) max_elementindex = i;
  }
  cout << max_elementindex <<endl;



    
}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   // int t ;
   // t=1;
   // cin >> t;
    //while (t--) {
        solve();
    //}
    return 0;
}
