
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
   int n;cin>>n;
   vector<ll>a(n+1);
   for(ll i = 1;i<=n;i++){
    cin>>a[i];
   }
   // ai = gcd(ai,i);
   // gcd(a[i],1)==1
   // gcd(a,b)==1
   /*if a and b are coprime 
   //like i have given list of array if it contains 1 then over all gcd of array is one
   
   */
    for(ll i =1;i<=n;i++){
        for(ll j = i;j<=n;j++){
            if(gcd(a[i],a[j])==1){
                cout<<0<<endl;
                return;
            }
        }
    }
   


    
}
  


int main(){
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
