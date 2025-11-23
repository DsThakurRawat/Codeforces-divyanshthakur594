
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>v(n);for(auto &in:v)cin>>in;
    /*
   x  in array count of elelemnt should be equal to x
    */
   map<int,int>mp;

    for(int i = 0; i < n; i++){
   mp[v[i]]++;

    }
    int count = 0;

  
    for (auto &p : mp) {
    int x = p.first;
    int y = p.second;
    if(y < x) {
        count+=y;
    }
    else{
        count +=min(y,y-x);
    }
}

cout << count<<endl;




  

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
