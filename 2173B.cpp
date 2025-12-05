
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;cin>>n;
  vector<int>a(n);for(int &in:a)cin>>in;
  vector<int>b(n);for(int &in:b)cin>>in;
  int score = 0;
  for(int i = 0;i<n;i++){
    int take1 = score-a[i];
    int take2 = b[i]-score;
    score=max(take1,take2);
  }
  cout << score<<endl;


    
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
