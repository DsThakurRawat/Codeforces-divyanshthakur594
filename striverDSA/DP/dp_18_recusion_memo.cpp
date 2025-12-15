#include <bits/stdc++.h>
using namespace std;

int mod = (int)(1e9 + 7);

int f(int ind, int sum,vector<int>&num,vector<vector<int>>&dp){
    if(ind == 0){
        if(sum == 0 && num[0] == 0) return 2;
        if(sum == 0 || sum == num[0]) return 1;


    }
    if(dp[ind][sum] != -1) return dp[ind][sum];
    int notTake = f(ind-1,sum,num,dp);
    int take = 0;
    if(num[ind] <= sum ) take = f(ind-1,sum-num[ind],num,dp);

    return dp[ind][sum] =  (notTake + take) % mod;

}

int findways(vector<int>&num,int tar){
    int n = num.size();

    vector<vector<int>> dp(n,vector<int>(tar+1,-1));

    return f(n-1,tar,num,dp);

}

int countpartitions(int n, int d,vector<int>&arr){
    int totalSum = 0;

    for(auto &it : arr) totalSum += it;
    if(totalSum - d < 0  || (totalSum -d) % 2) return false;

    return findways(arr,(totalSum-d) / 2);

}