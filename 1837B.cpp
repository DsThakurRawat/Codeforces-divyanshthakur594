
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;

    // score is len+1;

    int max_len = 0;
    int len = 1;

    for(int i=0; i < s.size()-1;i++){
        if(s[i] == s[i+1]){
            len++;
        }
      else{
        len = 1;
      }
      max_len = max(len,max_len);

    }
    cout<<max_len+1<<endl;



    
    
  

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
