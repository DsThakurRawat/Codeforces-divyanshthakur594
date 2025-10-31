
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {

    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' && i == 0) {

        cout << "YES"<<endl; 
        return;
    }
    else if(s[i] == 'b' && i == 1){
        cout << "YES" <<endl;
        break;
    }
    else if(s[i] == 'c' && i == 2){
        cout << "YES" << endl;
        return 
    }

   
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
