
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int y = 0,bit,index;
    vector<int>a(n);for(auto &x:a)cin>>x;
    vector<int>b(n);for(auto &x:b)cin>>x;
    for(int i =0; i< n; i++){
        y^=a[i];
        y^=b[i];
    }
      if(y == 0){
        cout << "Tie" << endl;
        return;
    }
     for(int i=0; i<20; i++)
        if(y & (1 << i))
            bit = i;
    for(int i=0; i<n; i++)
        if((a[i] ^ b[i]) & (1 << bit))
            index = i;
    cout << (index & 1 ? "Mai" : "Ajisai") << endl;




  


}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
