
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;cin>>n;
   vector<int>a(n);for(int &in:a)cin>>in;

   for(int i =0;i<n;i++){
    for(int j = 0;j<i;j++){
       
        if( (a[i]%a[j]) % 2 == 0) {
            cout << a[j] << " " << a[i]<<endl;
            return;
        }
    }
   }
   cout << -1 << endl;



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
