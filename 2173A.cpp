
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n,k;cin>>n>>k;
   string s;cin>>s;
   int count  = 0;
   int flag = -1;

   for(int i = 0;i<n;i++){
    if(s[i]=='1'){
        flag = i+k;
    }
    else{
        if(i>flag) count++;
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
