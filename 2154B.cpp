
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  
    int n;cin>>n;
    vector<int>a(n);for(int &in : a)cin>>in;
    int maxi = a[0];

    for(int i = 0;i<n;i++){
        maxi = max(maxi,a[i]);
        if( i % 2 == 0){
            a[i] =  maxi;
        }
    }
    int cost = 0;
    for(int i = 1;i<n-1;i++){
        if( i % 2 == 0 ){
            if( a[i-1] >= a[i]  ) cost = a[i-1]-a[i]+1;
            else if(a[i+1] >= a[i]) cost = a[i+1]-a[i]+1;
        }
    }
    cout << cost << endl;





    
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
