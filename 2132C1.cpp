
// simple template-test2
// code by divyansh rawat


#include <bits/stdc++.h>
using namespace std;
 

void solve() {
  // requires determining the minimum cost with the least number of deals

   int  n;
  cin >> n;

  // making eqn
  int x = log(n)/log(3);
  int direc = n;

  int  res1 = 3*direc;
  long res2 = int(direc/3);
 int res3 = x*res2;

  int complete = res1 + res3;
 
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
