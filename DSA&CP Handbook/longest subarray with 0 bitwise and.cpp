  
  
// simple template-test2
// code by divyansh rawat
  
#include <bits/stdc++.h>
using namespace std;

  
  class Solution {
        public:
            int longestNiceSubarray(vector<int>& nums) {
                int mask = 0, l = 0, ans = 0;

                for (int r = 0; r < nums.size(); r++) {
                    while (mask & nums[r]) {
                        mask ^= nums[l];
                        l++;
                    }
                    mask |= nums[r];
                    ans = max(ans, r - l + 1);
                }
                return ans;
            }
        };
