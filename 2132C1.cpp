
// simple template-test2
// code by divyansh rawat


#include <bits/stdc++.h>
using namespace std;
 

void solve() {
  // requires determining the minimum cost with the least number of deals

   int  n;
  cin >> n;

  // making eqn
  // Step 1: compute x
    long double x = log(n) / log(3);      // natural logs
    long long x_int = (long long)x;       // integer part only

    // Step 2: compute formula using integer arithmetic
    long long part1 = 3 * n;
    long long part2 = (x_int * n) / 3;    // integer division
    long long ans = part1 + part2;

    cout << ans << endl;


}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
