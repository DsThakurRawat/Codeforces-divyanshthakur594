
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;cin>>n;
  // in this case there is simple construction where each number is place at x and 2x
 
  


  vector<int>result(2*n +1,0);
  for(int i = 1;i<=2*n;i++){

    if(i==1){
     continue;

    }
    else if(i != 1 && i != n){
      result[i] = i;
      result[2*i] = i;
    }
    if(i == n){
         result[i] = n;
         result[2*i] = n;
         break;
    }
    

   

  }
  for(int i = 0;i<2*n;i++){
    if(result[i]==0){
      result[i] = 1;
    }
  }
  for(auto & ot : result)cout << ot << " ";
  cout << endl;


  









}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
