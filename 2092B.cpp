
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long 
;
void solve() {
    ll n;cin>>n;
    string s1,s2;cin>>s1>>s2;
   
   string zigzag_1,zigzag_2;
   for(int i = 0;i<n;i++){
    if(i%2 == 0){
        zigzag_1 = zigzag_1+s1[i];
    }
    if(i%2!=0){
        zigzag_1 = zigzag_1 + s2[i];
    }
   }
   for(int i = 0;i<n;i++){
    if(i%2!=0){
        zigzag_2 = zigzag_2+s1[i];
    }
    if(i%2==0){
        zigzag_2 = zigzag_2+s2[i];
    }
   }
   int z1 = 0;
   int z2 = 0;
   for(int i = 0;i<zigzag_1.size();i++){
    if(zigzag_1[i]=='0') z1++;
    if(zigzag_2[i]=='0')z2++;
   }
   int need1 = (n + 1) / 2;   
int need2 = n / 2;       
   if(z1>=need1 && z2>=need2){
    cout << "YES"<<endl;
   }
   else{
    cout <<"No"<<endl;
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
