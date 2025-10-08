
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int>v(n);
  int ans = 0;
  for(int i = 0; i < n; i++) cin >> v[i];
  int count1 = 0; // maintains count of 0;
  int count2 = 0;// maintians count of -1;
  for(int i = 0; i < n; i++){
    if(v[i] == -1)count2++;
    if(v[i] == 0) count1++;
  }

    if( count2 % 2 == 0){
        ans = count1;

    }
    else {
        ans = 2 + count1;
    }

    cout << ans << endl;


}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
