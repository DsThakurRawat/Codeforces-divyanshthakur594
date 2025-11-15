
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;cin>>k;
    //vector<int>nums;

    for(int i = 1; ;i++){
        if(i%3 == 0 || i % 10 == 3) continue;
        if(--k == 0){//--k decrements k by 1 BEFORE using its value.
            cout << i << endl;
            break;
        }
    }

    

  



  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
