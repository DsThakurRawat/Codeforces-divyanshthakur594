
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long 
;
void solve() {
    ll n;cin>>n;
    string s1,s2;cin>>s1>>s2;
    int count = 0;
    for(int i = 0;i<n;i++){
        if(s1[i]=='0') count++;
        if(s2[i]=='0')count++;
    }
    if(count<n){
        cout << "NO"<<endl;
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
