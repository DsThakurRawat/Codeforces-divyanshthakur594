#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;  // Read input as a string to handle cases like "123321"
        
       
        
        int sum1 = s[0] - '0' + s[1] - '0' + s[2] - '0';  // Sum of first 3 digits
        int sum2 = s[3] - '0' + s[4] - '0' + s[5] - '0';  // Sum of last 3 digits

        cout << (sum1 == sum2 ? "YES" : "NO") << endl;
    }
    return 0;
}
