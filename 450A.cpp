
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n,m;cin>>n>>m;
  vector<int>a(n+1);for(int i = 1;i<=n;i++)cin>>a[i];

  auto ciel_division = [&](int x){
    return (x + m-1)/m;// ceil divison
  };
  int idx = 1;
  int max_ceil = ((a[1]+m-1)/m);

  for(int i = 2;i<=n;i++){
        if(ceil((a[i]+m-1)/m) >= max_ceil){
            idx = i;
            max_ceil = ceil((a[i]+m-1)/m);
        }
  } 
  cout << idx << endl;

 


    
}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   // int t ;
   // t=1;
   // cin >> t;
    //while (t--) {
        solve();
    //}
    return 0;
}
