
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;cin>>n;

    if(n%2 ==1 ){
        cout << "YES"<<endl;
       
    }
    else{
        while(n%2==0) n/=2;
        if( n > 1) cout << "YES"<<endl;
        else cout << "NO"<<endl;
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
