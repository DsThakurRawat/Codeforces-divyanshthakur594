
// simple template-test2
// code by divyansh rawat


#include <bits/stdc++.h>
using namespace std;
 

void solve() {
  // requires determining the minimum cost with the least number of deals

   long long  n;
  cin >> n;
  long double x = log(n)/log(3);

  // making eqn

  long long x_int = (long long)x;
 
  

  long long   res1 = 3*n;

  long long res3 = (long long)((x_int * (long double)n) / 3.0);

  long long  complete = res1 + res3;
 
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
