
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>v(n);for(int i = 0;i<n;i++)cin>>v[i];
     sort(v.begin(),v.end());
    if(v.size()==1) {
        cout << 0 << endl;
        return;
    }
    if(v.size()==2){
      
       cout << v[1]-v[0]<<endl;
       return;
    }

    cout << v[n-1]-v[0]<<endl;

    

    



    
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
