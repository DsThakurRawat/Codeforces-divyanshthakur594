
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long  n;cin>>n;
  long long x ,y;
  /*
  4*x+6*y = n
  we have take that pair min = min(a+b);and max = max(a+b);
  
  */
 int mini = INT_MAX;
 int maxi= INT_MIN;

  for(int x = 1;x++){
    for(int y = 1;y++){
        if(4*x+6*y==n){
        mini = (y+x,mini);
        maxi = (y+x,maxi);
        }
    }
  }

  cout << mini << " "<<maxi<<endl;



  

  
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
