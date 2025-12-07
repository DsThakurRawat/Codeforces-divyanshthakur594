
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
  bool  res1 = (a11>b11&&(a12>b12));// game1
  bool res2 = (a11>b21 && a12>b22);// game2
  bool res3 = (a21>b11&&a22>b12);//// game3
  bool res4 = (a21>b21&&a22>b22);//game 4;
  if(res1||res2)count+=2;
  if(res3||res4)count+=2;
  cout << count<<endl;
   



    
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
