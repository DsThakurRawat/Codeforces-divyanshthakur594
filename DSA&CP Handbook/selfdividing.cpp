/*

A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
A self-dividing number is not allowed to contain the digit zero.


*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSelfDividing(int x) {
        int n = x;
        while (n > 0) {
            int d = n % 10;
            if (d == 0 || x % d != 0) return false;
            n /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            if (isSelfDividing(i)) ans.push_back(i);
        }
        return ans;
    }
};
