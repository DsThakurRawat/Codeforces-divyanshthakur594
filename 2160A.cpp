
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;   cin >> n;
  
    vector<int>v(n);


    for(int i = 0; i < n; i++) cin >> v[i];

    int i = 0;
    int flag = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] != 0) flag = 1;


    }
     set<int> s(v.begin(), v.end());  
    int ans = 0;

    for(int i = 0; i < n; i++) {
        if (s.find(v[i] + 1) == s.end()) { 
            ans = v[i] + 1;
            break;
        }
    }

    if(flag == 1){
       cout << 0 << endl;
    }
    else 
      cout << ans << endl;




    










    




  
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
