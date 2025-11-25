
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int  n;cin>>n;

    vector<int>v(n);for(auto &in:v)cin>>in;
    int count = 0;
    reverse(v.begin(),v.end());

    for(int i = 0;i<n-1;i++){
        while(v[i+1]>v[i]){
            v[i+1] = v[i+1]/2;
            count++;
        }       
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
