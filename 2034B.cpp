
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
ll n,m,k;cin>>n>>m>>k;
string s;cin>>s;
ll ans = 0;
ll cur = 0;
for(ll i = 0;i<n;i++){
    if(s[i]=='0'){
        cur++;
        if(cur==m){
            for(int j = i;j<min(i+k,n);j++){
                s[j]='1';
            }

        }
        cur = 0;
        ans++;
    }
    else{
        cur= 0;
    }
}
cout << ans<<endl;

   

    
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