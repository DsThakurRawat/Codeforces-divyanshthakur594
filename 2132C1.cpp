
// simple template-test2
// code by divyansh rawat


#include <bits/stdc++.h>
using namespace std;
long long intLog3(long long n) {
    long long x = 0;
    long long val = 1;
    while (val * 3 <= n) {
        val *= 3;
        x++;
    }
    return x;
}
 

void solve() {
  // requires determining the minimum cost with the least number of deals
   long long n;
    cin >> n;

    // Compute log base 3 using floating point
    long double x = log(n) / log(3.0);   // full precision
    long long x_int = (long long)x;      // integer part of x

    // Compute the formula carefully using integer division
    long long res1 = 3 * n;
    long long res3 = (x_int * n) / 3;    // multiply first, divide after
    long long complete = res1 + res3;

    cout << complete << endl;  // 2250964728
  

}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
