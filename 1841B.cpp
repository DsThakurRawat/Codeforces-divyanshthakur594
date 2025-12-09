
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long 
;
void solve() {
  int q;cin>>q;
  vector<ll>x(q);for(ll &in:x)cin>>in;
  ll first = x[0];
  int last = x[0];
//A beautiful array is NOT required to be sorted.
//It only needs to become sorted after some rotation.
  string s;
  s.push_back('1');
  bool broken = false;

  for(int i = 1;i<x.size();i++){
    if(broken==true;){
      if(x[i]>=last){
       s.push_back('1');
       last = x[i];
      }
      else if(x[i]<=first){
        broken = true;
        s.push_back('1'); 
        last = x[i];
      }
      else{
        s.push_back('0');
      }
    }
    else{
      if(x[i]>=last&&x[i]<=first){
        s.push_back('1');
        last = x[i];
      }
      else{
        s.push_back('0');
      }
    }
  }

  cout << s <<endl;
 

    
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
