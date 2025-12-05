
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;cin>>n;
  vector<int>a(n);for(int &in:a)cin>>in;
  vector<int>b(n);for(int &in:b)cin>>in;
  int score = 0;

    long long current_min = 0;
    long long current_max = 0;
    
    for (int i = 0; i < n; ++i) {
        long long next_max = max(current_max - a[i], b[i] - current_min);
        long long next_min = min(current_min - a[i], b[i] - current_max);
        
        current_max = next_max;
        current_min = next_min;
    }
    
    cout << current_max << "\n";











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
