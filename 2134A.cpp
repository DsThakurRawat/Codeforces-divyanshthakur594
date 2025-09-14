
// simple template-test2
// code by divyansh rawat
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n , a , b; cin >> n >> a >> b;
  int count = 0;
  vector<int>v(3);
  v.push_back(a);
  v.push_back(b);
  v.push_back(n);
  for(int i = 0; i < 3; i++){
    if(v[i] % 2 != 0) count++;
  }

  if(count == 2) cout << "NO" << endl;
  else cout << "YES" << endl;
  



  
  
  

}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
