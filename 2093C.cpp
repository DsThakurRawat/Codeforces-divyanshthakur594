
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
        int x,k;cin>>x>>k;
        if(x<=1)
      {
        cout << "NO"<<endl;
        return;
      }
      if(k>1 && x >1){
        cout << "NO"<<endl;
        return;
      }
      else if(k==1){

        for (int i = 2; i * i <= x; i++) {
              if (x % i == 0) {
                cout << "NO"<<endl;
                return;
              }
        }
        cout << "YES"<<endl;

      }
      else{
        cout << ((k==2)?"YES":"NO");
      }







    
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
