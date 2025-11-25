
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n;cin>>n;
        int a,b,c,d;
      if( n% 4 == 0){
       cout << n/4 << " "<< n/4 << " "<<n/4<<" "<<n/4<<endl;
        return;
      }

      for(int i = 0; i*i<n;i++){
        if(a+b+c+d==n && gcd(a,b) == lcm(c,d)){
            cout << a << " "<< b << " "<<c <<" "<<d<<endl;
            return;
        }
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
