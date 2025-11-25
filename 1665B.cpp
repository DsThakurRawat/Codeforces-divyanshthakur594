
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n;cin>>n;
        vector<long long >v(n);for(auto &in:v)cin>>in;
        map<int,int>mp;
        for(int i = 0;i<n;i++){
            mp[v[i]]++;
        }
    // first the key your element ;
    //second the
    int max_freq =0;
    for(auto &p:mp){
        max_freq = max(max_freq,p.second);
    }
    int op = 0;

    while(max_freq<n){
        op++;
        if(2*max_freq<=n){
            op+=max_freq;
            max_freq *=2;
        }
        else{
            op+=(n-max_freq);
            max_freq = n;
        }

    }
    cout<<op<<endl;



  
   
    
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
