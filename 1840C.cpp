#include<bits/stdc++.h>
using namespace std;
// code by divyansh thakur

int main(){
   int t;
   cin >> t;
   while(t--){ 
   
    int n,k,q;
    cin >> n >> k >>q; // can only go on vacaction if temp does not rise above q degrees 
    // the length of the array a, the minimum number of days at the resort, and the maximum comfortable temperature for Dima.
    vector<int>v(n);

    for(int i = 0; i < n; i++) cin >> v[i];  // this temperature at ski resort

  /// okay so we need to ouput number of ways dima to choose vacation dates at resor



 /*
    <---- Problem Rough ---->
    let me  go through prob again
    cond 1 : can only go vacaction if temp > q;
    condn 2 : he will only go for at least k days
      he can go on vacation only if the temperature does not rise above q
 degrees throughout the vacation.

  so let me make thing clear for a given array a day is valid if a[i] <= q;


    */
   for(int i = 0; i < n; i++){

       
            cin >> a[i];
            a[i] = (a[i] > q) ? 0 : 1;
     
   }

   long long count_of_1s = 0;
   long long ways = 0;

   for(int i = 0; i < n; i++){
      if(v[i] == 1) count_of_1s++;
      else {
        if(count_of_1s >= k){
         long long diff = count_of_1s - k + 1;
        ways += (diff * (diff + 1)) / 2;


   }
   count_of_1s = 0;
   
}


      
       
      


   }
   if(count_of_1s >= k){
      long long diff = count_of_1s - k + 1;
      ways += (diff * (diff + 1)) / 2;

   }


   cout << ways << endl;




   }

   return 0;

    
} 