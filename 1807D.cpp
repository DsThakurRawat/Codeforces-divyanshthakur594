
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long  n,q;cin>>n>>q;
   vector<long long> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];
  

  vector<long long>prefsum(n+1,0);
  for(int i = 1; i<=n;i++){
    prefsum[i] = prefsum[i-1]+a[i];
  }
  long long sum = prefsum[n];

  while(q--){
    long long l,r,k;cin>>l>>r>>k;

    long long old_sum = prefsum[r]-prefsum[l-1];
    long long newsum = (r-l+1)*k;
    long long fin_sum = sum - old_sum+newsum;
    if(fin_sum%2 != 0)cout << "YES"<<endl;
    else cout << "NO"<<endl;

  }





  


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
