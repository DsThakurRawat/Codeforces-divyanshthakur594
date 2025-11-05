
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    vector<int>words;
    int flag = 0;

    for(char c = 'a'; c <= 'z'; c++){

        if(s.find(c) == string::npos){
           flag = 1;
           
          break;
        }


        

      

    }

     cout << (flag ? "NO" : "YES") << endl;


   



  

}
  


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
