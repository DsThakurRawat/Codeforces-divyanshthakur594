//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        // Code here.
        int r ;
        int num =n;
        int rev_num =0;
        while(n > 0){
            r = n%10;
            n = n /10;
            rev_num = rev_num*10+r;
        }
        if(rev_num == num) return true;
        else return false;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        bool ans = ob.isPalindrome(n);
        cout << (ans ? "true" : "false") << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends