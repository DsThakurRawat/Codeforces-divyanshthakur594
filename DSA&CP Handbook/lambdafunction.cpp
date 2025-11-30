#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {

        // Lambda reverse fn
        auto rev = [&](int a) {
            int b = 0;
            while (a > 0) {
                b = b * 10 + a % 10;
                a /= 10;
            }
            return b;
        };

        vector<int> A = nums;
        map<int, int> pre;
        int n = A.size(), res = n;

        for (int i = 0; i < n; ++i) {
            if (pre.count(A[i])) {
                res = min(res, i - pre[A[i]]);
            }
            pre[rev(A[i])] = i;   // using lambda here
        }

        return (res < n) ? res : -1;
    }
};
