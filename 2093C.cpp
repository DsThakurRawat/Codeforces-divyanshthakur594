
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
  int n,k;cin>>n>>k;

  string s = to_string(n);
  for(int i = 0;i<k-1;i++){
    s += to_string(n);
  }
  long long x = stoll(s);

  if(x <= 2){
    cout << "NO"<< endl;
    return;
  }
  if(x%2==0){
    cout<<"NO"<< endl;
    return;
  }
  long long r = floor(sqrt((long double)x));
  for(ll i = 3;i<=r;i+=2){
    if( x % i == 0){
        cout << "NO"<< endl;
        return;
    }
  }
  cout << "YES"<<endl;
  








    
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
