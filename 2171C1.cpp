
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>a(n);for(int i = 0; i < n; i++)cin>>a[i];
    vector<int>b(n);for(int i = 0; i < n; i++)cin>>b[i];

        int cntA = 0, cntM = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                if(i % 2 == 0) cntA++;  // Ajisai controls
                else cntM++;           // Mai controls
            }
        }

        int xorA = cntA % 2;
        int xorM = cntM % 2;

        if(xorA > xorM) cout << "Ajisai\n";
        else if(xorM > xorA) cout << "Mai\n";
        else cout << "Tie\n";
            
            
          



            

  

}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
