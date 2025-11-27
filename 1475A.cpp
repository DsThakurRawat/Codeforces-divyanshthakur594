
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;cin>>n;

    if(n%2 !=1 ){
        cout << "YES"<<endl;
       
    }
    else{
        for(long long i = 3;i*i<n;i=i+2){
          if( n % i==0){
            cout << "YES"<<endl;
            return;
          }

        }
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
