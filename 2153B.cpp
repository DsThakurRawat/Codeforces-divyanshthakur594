
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long x, y, z;
    cin >> x >> y >> z;
    long long  flag  = 1;
    bitset<30>res1(x),res2(y),res3(z);
    for(int i = 0; i < 30; i++) {
        long long   r1 = res1[i];       
        long long   r2  = res2[i];
         long long  r3  = res3[i];

        long long  sum = r1 + r2 + r3;

     
        if (sum == 2) {
            flag = 0;
            break;
        }
    }
   if(flag == 1) cout << "YES" << endl;
   else cout << "NO"<< endl;
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
