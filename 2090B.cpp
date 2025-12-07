
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

  vector<bool>checkrow(n,false),checkcol(m,false);

  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if(grid[i][j]=='0')checkrow[i]=true;
    }
  }
  for(int j = 0;j<m;j++)
     for(int i = 0;i<n;i++){
      if(grid[i][j]=='0') checkcol[j] = true;
     }





  for(int i = 0;i<n;i++){
    for(int j =0;j<m;j++){
      if(grid[i][j]==1){

                if(checkcol[i]&&checkcol[j]){
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
