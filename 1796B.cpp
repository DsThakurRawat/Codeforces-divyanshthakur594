
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){

    string a;cin>>a;
    string b;cin>>b;
    int n = a.size();
    int m = b.size();
    if(a[0]==b[0]){
        cout <<"YES"<<endl;
        cout << a[0] + '*'<<endl;
        return;
        
    }
    if(a[n-1]==b[m-1]){
        cout << "YES"<<endl;
        cout << '*'+b[0]<<endl;
        return;

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
