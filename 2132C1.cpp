
// simple template-test2
// code by divyansh rawat


#include <bits/stdc++.h>
using namespace std;
 

void solve() {
  // requires determining the minimum cost with the least number of deals
long long n;
    cin >> n;

    long double x = log(n)/log(3);              // full double, not truncated yet
    long long res1 = 3 * n;
    long long res3 = (long long)((x * n) / 3);  // multiply and divide as double, truncate once
    long long complete = res1 + res3;

    cout << complete << endl;  // 2,250,964,728
}
  

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
