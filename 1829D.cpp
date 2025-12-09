
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    ll n,m;cin>>n>>m;
    if(n==m){
        cout<<"YES" <<endl;
        return;
       }

    if(m>n){
        cout << "NO"<<endl;
        return;
    }
    if(n%3!=0){
        cout << "NO"<<endl;
        return;
    }
    if(n%3==0){
        ll b = n/3;
        if(b<m){
            cout << "NO"<<endl;
            return;
        }
    }
    cout <<check(n,m) ? "YES" : "NO"<<endl;



  

    
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
