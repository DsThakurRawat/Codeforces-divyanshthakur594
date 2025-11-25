
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int  n;cin>>n;

    vector<int>v(n);for(auto &in:v)cin>>in;
    int count = 0;

    for(int i = n-2;i>=0;i--){
        while(v[i]>=v[i+1]){
            count++;
            v[i] /=2;
            if(v[i]==0) break;
            if(v[i]==0&&v[i+1]==0){
                cout << -1<<endl;
                return;
            }

        }
    }
    cout << count <<endl;
   

    





  

    
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
