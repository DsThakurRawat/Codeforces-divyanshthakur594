
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    long long  x,n;cin>>x>>n;
   
    if( n % 4 == 0){
        cout << x << endl;
    }
   else if(n%4 == 1){
        if(x % 2==0)cout << x-n<<endl;
        else cout << x+n<<endl;
    }
   else if(n%4==2){
        if(x%2==0)cout << x+1<<endl;
        else cout << x-1<<endl;
    }
    else if ( n%4==3){
        if(x%2==0) cout << x+(n+1)<<endl;
            
        else cout << x -(n+1)<<endl;
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
