
// simple template-test2
// code by divyansh rawat


#include <bits/stdc++.h>
using namespace std;
 

void solve() {
  // requires determining the minimum cost with the least number of deals
        long long n;
        cin >> n;

        long long x = 0;
        long long val = 1;
        while (val * 3 <= n) {
            val *= 3;
            x++;
        }
        long long res1 = 3 * n;
        long long res3 = (x * n) / 3;  // integer arithmetic only
        long long complete = res1 + res3;
        cout << complete << endl;


  

}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
