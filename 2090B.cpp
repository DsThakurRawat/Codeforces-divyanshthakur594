
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long 
;
void solve() {
  ll n,m;cin>>n>>m;
  vector<string>grid(n);
  for(int i = 0;i<n;i++){
    cin>>grid[i];
  }
  // he can push any number of balls


  for(int i = 0;i<n;i++){
    for(int j =0;j<m;j++){
      if(grid[i][j]=='1'){
     int left = 0;
     int right = 0;

      /// from zero to j-1(including) no zero should be there
     for(int col =0;col<j;col++){
      if(grid[i][j]=='0'){
        left = 1;
        break;
      }
     }
     for(int row = 0;row<i;row++){
      if(grid[i][j]=='0'){
      right = 1;
      break;
     }
    }
    if(left==1&&right==1){
      cout << "NO"<<endl;
      return;
    }









                
      }
    }
  }
  cout << "YES"<<endl;

  

    
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
