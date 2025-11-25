
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;cin>>n;
   vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
   map<int,int>mp;

   for(int i = 0;i<n;i++){
    mp[v[i]]++;

   }
   //
   int element = 0;

   for(auto &p:mp){
    if(p.first>p.second){
        element +=p.second;
    }
    if(p.second>p.first){
        element+=(p.second-p.first);
    }
   

   }
   cout << element<<endl;



  

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
