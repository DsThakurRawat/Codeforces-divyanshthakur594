
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long  n;cin>>n;
  vector<long long >ans(n);

  ans.push_back(1);
  int sum = ans[0];

  while(true){
     ans.push_back(ans[0]+1);

    sum =  accumulate(ans.begin(),ans.end(),0);
    if(sum % n == 0 ){
        break;
    }

      



  }
  for(auto &out:ans) {
    cout << out << " ";
    
  }
  cout <<endl;

 

 







 










}
  


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(NULL);
 
    
    int t ;
    t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
