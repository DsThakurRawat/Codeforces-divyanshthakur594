
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int a1,a2,b1,b2;cin>>a1>>a2>>b1>>b2;
  // a1.a2->card sunnet had
  // b1,b2 ->card slavic has
  ll a11 = a1,a12 = a2;
  ll a21 = a2,a22 = a1;
  ll b11 = b1,b12 = b2;
  ll b21 = b2,b22 = b1;

  ll count = 0;
  if(a11>b11&&a12>b12)count++;
  if(a11>b21&&a12>b22)count++;
  if(a21>b11&&a22>b12)count++;
  if(a21>b21&&a22>b22)count++;

cout << count <<endl;

    
}
  


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
