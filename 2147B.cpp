
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;cin>>n;
  // in this case there is simple construction where each number is place at x and 2x
  vector<int>v(2*n);
  for(int i = 1;i<=2*n;i++){
    v.push_back(i);

  }

  vector<int>result(2*n,0);


  for(int i =0;i<2*n;i++){
    result[i] = i;
    result[2*i] = i;
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
