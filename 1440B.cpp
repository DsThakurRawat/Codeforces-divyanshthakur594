
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
 
    int n,k;cin>>n>>k;
    vector<int>v(n*k+1);for(int i = 1;i<=n;i++)cin>>v[i];

    long long i=0;
    long long sum =0;
    while(k--){
        i -=(n/2+1);
        sum += v[i];
    }
    cout << sum <<endl;

    



     


    
    
  

    
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
