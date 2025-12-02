
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
   
    for(int i = 0;i<n;i++){
        if( i == 0){
            if(a[1]>=a[0]){
                cost = a[1]-a[0]+1;
            }
            if( i == n-1 && (n-1) % 2 == 0){
                if(a[n-2] >= a[n-1]){
                    cost = a[n-2]-a[n-1]+1;
                }
            }


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
