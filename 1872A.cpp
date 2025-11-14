
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;cin>>a>>b>>c;

    if( a== b) {
        cout << 0 << endl;
        return;
    }

    if(abs(a-b) <= c){
        cout << 1 << endl;
        return;
    }

    int k = abs(a-b);
    int p = 2*c;
    double x =  (double)k/p;

     cout << fixed << setprecision(0);
      cout << ceil(x)<<endl;     
    
   
    

 
    



    






  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
