
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>v(n);for(auto &in : v)cin>>in;

    int count0=0;
    int count_element = 0;
    set<int>st(v.begin(),v.end());
    

    
    for(int i =0;i<n;i++){
        if(v[i]==0){
            count0++;
        }
        else{
            count_element++;
       
        }
    }
    if(count0 ==0){
        cout << v.size()<<endl;
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
