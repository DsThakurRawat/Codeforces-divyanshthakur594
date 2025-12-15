// dp-17 count number of subset with sum k
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

signed main() {
    // input array 
    // we need to count subset having sum k
    vector<int > nums = {1,2,3,4,5};

   int n= nums.size();
   int target = 5;
   
  int ans = solve(nums,n-1,target);
    return 0;
}


int  solve(vector<int>&nums,int ind , int target) {
    if(target == 0) return 1;
    if(ind == 0) return (nums[ind] == target);

    int  not_pick = solve(nums,ind-1,target);
    int pick = 0;

    if(nums[ind] <= target) pick = solve(nums,ind-1,nums[ind]);

    return pick + not_pick;







   


}

