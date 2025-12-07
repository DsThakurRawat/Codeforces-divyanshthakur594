
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  
   ll n,m,k;cin>>n>>m>>k;
   string s;cin>>s;
   ll i = 0;
   ll ops = 0;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        a[i]=(s[i]=='1');
    }
    while(i<=n-m){
        bool allzero = true;
        for(int j = i;j<i+m;j++){
            if(a[j]==1){
                allzero = false;
                break;
            }
        }
        if(allzero){
            ops++;
            ll lastindex = i+m-1;
            ll l = max(0LL,lastindex-k+1);
            int rem = lastindex;
            for(int x = l ;x<=rem;x++){
                a[x]=1;
                i = rem+1;
            }
        }
        else{
            i++;
        }
    }
    cout << ops << endl;
  







   

    
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