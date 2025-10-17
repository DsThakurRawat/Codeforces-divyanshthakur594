
// simple template-test2
// code by divyansh rawat

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0; i < n; i++) {
        vector<bool> used(n, false);
        string p;
        char last = '0';
        
        for(int j = i; j < n; j++) {
            if(s[j] >= last) {
                used[j] = true;
                p += s[j];
                last = s[j];
            }
        }

        string remaining;
        for(int j = 0; j < n; j++) {
            if(!used[j]) {
                remaining += s[j];
            }
        }

        bool isPalindrome = true;
        for(int j = 0; j < remaining.length()/2; j++) {
            if(remaining[j] != remaining[remaining.length()-1-j]) {
                isPalindrome = false;
                break;
            }
        }

        if(isPalindrome) {
            cout << p << endl;
            return;
        }
    }
    
    cout << "-1" << endl;
}

int main() {
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
