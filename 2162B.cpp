
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;



bool isPalindrome(const string &s) {
    int n = s.size();
    for(int i = 0; i < n/2; i++)
        if(s[i] != s[n-1-i])
            return false;
    return true;
}

void solve() {
    int n;
    string s;
    cin >> n >> s;
    
    
    if(isPalindrome(s)) {
        cout << 0 << "\n";
        return;
    }
    
   
    for(int i = 0; i < n; i++) {
        string x = s.substr(0,i) + s.substr(i+1);
        if(isPalindrome(x)) {
            cout << 1 << "\n" << i+1 << "\n";
            return;
        }
    }
    
    
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(s[i] <= s[j]) {
                string x = "";
                for(int k = 0; k < n; k++) {
                    if(k != i && k != j) x += s[k];
                }
                if(isPalindrome(x)) {
                    cout << 2 << "\n" << i+1 << " " << j+1 << "\n";
                    return;
         }
     }
        }
    }
    
 
    vector<int> indices;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') indices.push_back(i+1);
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') indices.push_back(i+1);
    }
    cout << indices.size() << "\n";
    for(int idx : indices) cout << idx << " ";
    cout << "\n";
}


int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
