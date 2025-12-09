
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll n,ll m){
    if(n==m)return true;
    else if(n%3!=0) {return false;}
    else  {return (check(n/3,m)||((2*n)/3,m));}
}
void solve() {
    ll n,m;cin>>n>>m;
   
    cout <<(check(n,m) ? "YES" : "NO")<<endl;



  

    
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
