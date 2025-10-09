#include <bits/stdc++.h>
using namespace std;

int main() {
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
