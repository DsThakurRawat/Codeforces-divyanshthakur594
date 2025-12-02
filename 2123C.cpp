
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;cin>>n;
  vector<int>a(n);for(int &in:a)cin>>in;

  vector<int>prefmin(n),sufmax(n);
  prefmin[0] = a[0];
  for(int i = 1;i<n;i++){
    prefmin[i] = min(a[i],prefmin[i-1]);
  }
  sufmax[n-1] = a[n-1];
  for(int i = n-2;i>=0;i--){
     sufmax[i] = max(sufmax[i+1],a[i]);

  }

  string s = "";

  for(int i = 0;i<n;i++){
    if(prefmin[i] == a[i] || sufmax[i] == a[i]){
        s +="1";
    }
    else s +="0";
  }
  cout << s << endl;

 

  



    
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
