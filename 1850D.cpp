
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long  n,k;cin>>n>>k;//less or equal than k
  vector<long long >v(n);for(long long  i= 0;i<n; i++)cin>>v[i];
  sort(v.begin(),v.end());
  int count = 1,maxii = 1;

  for(int i = 1; i < n; i++){
    if(v[i]-v[i-1] > k) count = 1;
    else count++;
    max(maxii,count);

  }
  cout << n - maxii << endl;


}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
