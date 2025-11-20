
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int count = 0;
    //. Two configurations are considered different if they contain either a different number of chickens, diff number of cows  or diff number of bith
   for(int i = 0; i <=n; i++){
    for(int j = 0; j <=n;j++){
        if(n == i*4+j*2)count++;

    }
    
   }
   cout << count << endl;
    


 








  

}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
