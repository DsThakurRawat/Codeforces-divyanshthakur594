#include<bits/stdc++.h>
using namespace std;
// solution by divyansh thakur


int main(){
   int t;
   cin >> t;
   while(t--){ 
    /*
    <---- Problem Rough ---->
    so he will give damage to monster with highest health something like this
    okay
    if health is 0 or less than it will die 





    */
     int n,k;
     cin >> n >> k; // here k is max damage 
     vector<int>v;

    
     for(int i = 0; i < n; i++) cin >> a[i];
     
     for(auto &x : a){
        cin >> x;
        x %= k;
        if(!x) x = k;

     }

    vector<int> indexorder;
    iota(indexorder.begin(),indexorder.end(),0) // three parameter neede to pass

    stable_sort(indexorder.begin(),indexorder.end(),[&](int i , int j){
        return a[i] > a[j];
    });

     

    
   




       
       
      


   }
   return 0;

    
} 