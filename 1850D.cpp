
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long  n,k;cin>>n>>k;//less or equal than k
  vector<long long >v(n);for(long long  i= 0;i<n; i++)cin>>v[i];
  sort(v.begin(),v.end());
 long long l =0,ans = 1;

 for(long long r = 1; r < n; r++){
  if(v[r] - v[r-1] > k){
    l = r;
  }
  ans = max(ans,r-l+1);
 }
 cout << ans << endl;



}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
