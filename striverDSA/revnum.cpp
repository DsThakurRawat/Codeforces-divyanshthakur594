#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseDigits(int n) {
        //Return the reversed number
        int rev_num=0;
        int r;
        while(n > 0){
            // step 1
            r = n %10;
            rev_num = rev_num * 10 + r ;
            n = n /10;


        }
        return rev_num;
    }
};

// Driver Code
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.reverseDigits(n);
        cout << ans << "\n";  // Print the reversed number

        cout << "~" << "\n";
    }
    return 0;
}
