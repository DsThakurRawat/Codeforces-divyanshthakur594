
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
     int a,b;cin>>a>>b;

     if(a==1|| b ==1 ){
        if(a==1){
            cout << b*2<<endl;
            return;
        }
        if(b==1){
            cout <<a*2 << endl;
            return;
        }
     }
     if(a % b== 0 or b % a == 0){
        if(a % b == 0){
            cout << b*2 <<endl;
            return;
        }
        else{
            cout << 2*a << endl;
            return;
        }
     }
     else{
        cout << lcm(a,b)<<endl;
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
