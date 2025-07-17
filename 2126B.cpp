#include<bits/stdc++.h>
using namespace std;
// solution by divyansh thakur

int main(){
   int t;
   cin >> t;
   while(t--){ 
    // so we have given array a of n numbers and a number k the value ai describes the weather on ith day 
    // if it rains on the day , then ai = 1; 
    // if weather is good means not rain then ai = 0;
    // so jean want to visit as many as park possible 
    // one hike to peak takes exactly k days and during each of these days weather will be goood ai = 0;
    // that is formallly he can start hike on day i only and only if all aj = 0;
    // after each hike she must take break of one day ok :) that means that day she can't go on hike
    // find the maximum number of hike jean can visit

    int n,k;
    cin >> n >> k;
    vector<int>a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

   // appraoch we need to count total hikes or maximum number of hikes
   //
   int hike_count = 0;
   int total_continuos_days=0;
   // for hike to make total continus days >= k;
   // and if there is 1 btw zero such like for
   /*
   tc 5 1
   0 1 0 0 0 
   ans = 3

   
   */






       
      
    
   }
   
return 0;

    
} 