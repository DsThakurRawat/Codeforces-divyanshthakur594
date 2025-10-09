
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
 

void solve() {
  // requires determining the minimum cost with the least number of deals

  long long int  n;
  cin >> n;

  // making eqn
  int x = log(n)/log(3);
 long long int direc = n;

 long long int res1 = 3*direc;
 long long int res2 = direc/3;

 long long int complete = res1 + res2*x;
 
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
