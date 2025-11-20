
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>a(n);for(int i = 0; i < n; i++)cin>>a[i];
    vector<int>b(n);for(int i = 0; i < n; i++)cin>>b[i];
    vector<int>aji_a(n),mai(n);
    
         for(int i = 1; i < n; i++) {
        swap(a[i], b[i]);
    }
    int xor_a = a[0];
    int xor_b = b[0];
    for(int i = 1; i < n; i++){
        xor_a=xor_a^a[i];
        xor_b=xor_b^b[i];
    }
    if(xor_a > xor_b)cout << "Ajisai"<<endl;
    else if(xor_b > xor_a )cout << "Mai"<<endl;
    else cout << "Tie"<<endl;




    

  

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
