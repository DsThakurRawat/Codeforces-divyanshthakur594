
// simple template-test2
// code by divyansh rawat


#include <bits/stdc++.h>
using namespace std;
 

void solve() {
  // requires determining the minimum cost with the least number of deals

   long long  n;
  cin >> n;
  int x = log(n)/log(3);
  // making eqn
 
  long long direc = n;

  long long   res1 = 3*direc;
  long long  res2 = (direc/3);
  long long  res3 = x*res2;

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
