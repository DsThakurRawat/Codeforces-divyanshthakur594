
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;cin>>n;
  vector<int>a(n);for(int &in:a)cin>>in;
  int i1 = 0,i2 = 0;
  while(i1<n&&a[i1]==a[0])i1++;
  while(i2<n && a[n-i2-1]==a[n-1])i2++;
  int res = n;
  if(a[0]==a[n-1]){
    res -i1;
    res -= i2;
  }
  else{
    res -=max(i1,i2);
  }
  cout << max(0,res)<<endl;


    
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
