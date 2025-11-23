
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long  n,q;cin>>n>>q;
  vector<long long >v(n);for(auto &in:v)cin>>in;
  while(q--){
    long long l,r,k;
    cin>>l>>r>>k;

    for(int i = l; i<=r-1;i++){
        v[i+1] = k;

    }

   long long sum =  accumulate(v.begin(),v.end(),0LL);

   if(sum % 2 != 0)cout << "YES"<<endl;
   else cout <<"NO"<<endl;

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
