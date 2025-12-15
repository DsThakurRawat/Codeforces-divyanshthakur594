/*

 0/1 Knapsack Problem Statement
You are given:

n items, each with:

a weight wt[i]

a value val[i]

A maximum weight capacity of a knapsack: W

 Goal:
Select a subset of the items such that:

The total weight does not exceed W

The total value is maximized

Each item can either be included once or not included at all (hence 0/1).

 Input:
int n — number of items

int W — maximum weight of the knapsack

int val[n] — array of item values

int wt[n] — array of item weights








the problem stating 
there is thief 
each of the item has w and v
wt-> 3 4 5
val-> 30 50 60
maxwt = 8



*/

// dp-17 count number of subset with sum k
#include <bits/stdc++.h>


using namespace std;
// only Recurisve appraoch

int recFn(vector<int>&wt,vector<int>&val,int ind, int w){
if(ind == 0){
  if(wt[0] <= w) return val[0];
  else return 0;
}
  int notTake = 0 + recFn(wt,val,ind-1,w);
  int Take = INT_MIN;
  
  if(wt[ind] <= w){
    Take = val[ind] + recFn(wt,val,ind,w);
  }
  return max(notTake,Take);

/* for recusrion tc = 2^n
space complexity = O(N)
*/



}

int memoDp(vector<vector<int>>& dp,vector<int>&wt,vector<int>&val,int ind,int w){

  if(ind == 0){
  if(wt[0] <= w) return val[0];
  else return 0;
}
  if(dp[ind][w] != -1) return dp[ind][w];

  int notTake = 0 + memoDp(dp,wt,val,ind-1,w);

  int Take = INT_MIN;
  
  if(wt[ind] <= w){
    Take = val[ind] + memoDp(dp,wt,val,ind,w - wt[ind]);
  }
  return dp[ind][w] =  max(notTake,Take);

  /*tc -> O(NxW)
    s.c. -> O(NxW) + O(N)


  
  
  */

}
//Tabulation dp
/* 1. write base case
   2. depending on number of parameter write number of for loop

   3. copy the recurrence

*/

int TabuDp(vector<vector<int>>&dp,vector<int>wt,vector<int>val,int n, int maxWeight){
    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, 0));

    // Base case: fill first row (index 0) with multiple copies of item 0
    for (int W = wt[0]; W <= maxWeight; W++) {
        dp[0][W] = (W / wt[0]) * val[0];
    }

    for (int ind = 1; ind < n; ind++) {
        for (int W = 0; W <= maxWeight; W++) {
            int notTake = dp[ind - 1][W];
            int take = INT_MIN;
            if (wt[ind] <= W) {
                take = val[ind] + dp[ind][W - wt[ind]];  // same index for unbounded
            }
            dp[ind][W] = max(take, notTake);
        }
    }

    return dp[n - 1][maxWeight];
}



// sapce optimized solution 







int main() {
    // input array 
    // we need to count subset having sum k
    int n = 100;
   int w = 1000;
   vector<vector<int>> dp(n, vector<int>(w + 1, 0));
   
   return 0;
}

