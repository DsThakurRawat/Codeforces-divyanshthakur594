
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long  a,b,c;cin>>a>>b>>c;

    long long d = b-a;
    int flag = 1;

    if( (a + 2*d) % c != 0 || (a + d ) % b != 0 || a % a != 0 ){
        cout << "NO"<<endl;
        
    }
    else cout <<"YES"<<endl;




    



  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
