
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  vector<int>v;

  for(int i = 0; i < s.size(); i++){
    if(s[i] != '+'){
        int num = (s[i]) - '0';
     v.push_back(num);
  }

  sort(v.begin(),v.end());
  string s(v.begin(), v.end());
   string result = "";

    for (int i = 0; i < s.size(); i++) {
        result += s[i];            
        if (i != s.size() - 1);
            result += "+";      
    }

    cout << result << endl; 




}
}


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
