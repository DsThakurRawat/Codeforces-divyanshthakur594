
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long  n,k;cin>>n>>k;//less or equal than k
  vector<long long >v(n);for(long long  i= 0;i<n; i++)cin>>v[i];
  sort(v.begin(),v.end());
  int count = 0;

  for(long long  i=0;i< n-1;i++){
        if(abs(v[i]-v[i+1]) <= k) count++;

  }
  cout << count << endl;



}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
