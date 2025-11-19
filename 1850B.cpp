
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
   vector<pair<int,int>>responses(n);
   for(int i =0; i < n; i++){
    cin >> responses[i].first >> responses[i].second;
   }
   int max_quality = 0;
   int ans = 0;

   for(int i = 0; i < n; i++){
    if(responses[i].first <= 10 && max_quality < responses[i].second){
        max_quality = max(max_quality,responses[i].second);
        ans = i;
    }
   }
   cout << ans+1 << endl;

   










  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
