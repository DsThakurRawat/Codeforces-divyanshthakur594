
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  
   string s;cin>>s;
   // we have to make sur allice win
   // two differant adjacent character
   int i = 0;
  int count =0;

    while (i < (int)s.size() - 1) {
        if ( (s[i] == '0' && s[i+1] == '1') ||
             (s[i] == '1' && s[i+1] == '0') ) 
        {
            count++;
            i += 2; 
        } else {
            i++;
        }
    }
    if(count % 2==0){
        cout << "NET"<<endl;
    }
    else cout << "DA"<<endl;
   
    




    
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
