
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;cin>>n;
  vector<int>v(n);for(int i = 0; i < n; i++)cin>>v[i];
  //abs(a-b)<=1 and choose c = min(a,b);

  if(v.size() == 1){
   cout << "YES"<<endl;
  return;
}

  for(int i=0;i<n-1;i++){
    if(abs(v[i]-v[i+1]) >1){ 
    cout <<"NO"<<endl;
    return;
    }
  }
  cout<<"YES"<<endl;
  





}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
