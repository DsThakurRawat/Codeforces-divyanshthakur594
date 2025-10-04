
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    /*
    overall frequency should be same
    */
  // appraoch-1 brute force : generate all subsequence , then count subsequence having same frequency of all elements, return subsequence with highest length
  
     map<int,int>freq;
   

  for(int x : v) freq[x]++;
  int max_len = 0;
  int max_freq = 0;

  for(auto &p : freq) max_freq = max(p.second,max_freq); // chossing any frequency

  for(int i = 1; i <= max_freq; i++){
    int cnt = 0;
    for(auto &p : freq){
        if(p.second >= i) cnt++;

    }
    max_len = max(max_len,cnt*i);
  }
  cout << max_len << endl;

    








}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
