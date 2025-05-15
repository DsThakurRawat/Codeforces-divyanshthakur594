#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int max_count = 1, count = 1;  
    int l = s.length();

    if (l < 7) { 
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 1; i < l; i++) {  
        if (s[i] == s[i - 1]) {  
            count++;  
        } else {
            count = 1; 
        }
        max_count = max(max_count, count);  
    }

    if (max_count >= 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
