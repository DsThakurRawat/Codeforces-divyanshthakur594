
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n,k;cin>>n>>k;
   string s;
   int count  = 0;
   for(int i = 0;i<s.size();i++){
    if(s[i]=='1'){
        i = i+k+1;
        if(i>=n) break;
    }
    else{
     count++;
    }

   }
   cout<< count<<endl;

    
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
