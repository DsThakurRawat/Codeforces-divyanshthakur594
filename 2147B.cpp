
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;cin>>n;
  // in this case there is simple construction where each number is place at x and 2x
 
  


  vector<int>result(2*n,0);


  for(int i =0;i<2*n;i++){
    if(i == 0){
      result[i] = i+1;
      result[n+1] = i+1;
    }
    else{
      result[i] = i+1;
      result[2*i-1] = i+1;
    }

  }
  for(int &i :result)cout << i <<" ";
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
