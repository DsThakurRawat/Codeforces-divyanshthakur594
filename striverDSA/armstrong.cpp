#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool armstrongNumber(int n) {
        int num = n;
        int sum = 0;
        int count = 0;
        
        // Step 1: Find the number of digits in the number
        while (n > 0) {
            count++;
            n = n / 10;
        }
        
        // Step 2: Calculate the Armstrong sum
        n = num;  // Restore the original number
        while (n > 0) {
            int r = n % 10;
            sum += pow(r, count);  // Raise each digit to the power of the number of digits
            n = n / 10;
        }
        
        // Step 3: Check if the sum is equal to the original number
        return sum == num;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        bool flag = ob.armstrongNumber(n);
        if (flag) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
        cout << "~" << "\n";
    }
    return 0;
}
