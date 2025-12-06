
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long 
;
void solve() {
    ll n;cin>>n;
    string s1,s2;cin>>s1>>s2;
   
    string z1 , z2;
    for(int i = 0;i<n-1;i++){
        z1 = s1[i]+z1;
        z1 = z1+s2[i+1];

    }
    for(int i = 0;i<n-1;i++){
        z2 = s2[i]+z2;
        z2 = z2+s1[i+1];

    }
    ll z_1 = 0,z_2 = 0;
    for(int i =0;i<n;i++){
        if(z1[i]=='0')z_1++;
    }
    for(int i = 0;i<n;i++){
        if(z2[i]=='0')z_2++;

    }
    ll need1 = ceil(n/2);
    ll need2 = ceil(n/2);
    if(z_1>=need1 && z_2>=need2){
        cout<<"YES"<<endl;
    }
    else {
        cout << "NO"<<endl;
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
