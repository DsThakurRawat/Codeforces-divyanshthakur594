
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long  n,q;cin>>n>>q;
  vector<long long >v(n);for(auto &in:v)cin>>in;
  while(q--){
    long long sum = 0;

      vector<long long >v2 =v; 


    long long l,r,k;
    cin>>l>>r>>k;

    for(int i= l-1; i<r;i++){
        v2[i] = k;

    }

    sum =  accumulate(v.begin(),v.end(),0LL);

   if(sum % 2 == 1)cout << "YES"<<endl;
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
