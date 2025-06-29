#include<bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin >> t;
   while(t--){ 

    int a,x,y;
    cin >> a >> x >> y;
    /*
    arg -> yes if only and only
    a > x > y || a < x < y
   else no
    
    
    */
     vector<int>arr;
     arr.push_back(a);
     arr.push_back(x);
     arr.push_back(y);
     
     cout << ((is_sorted(arr.begin(), arr.end()) || is_sorted(arr.rbegin(), arr.rend())) ? "YES" : "NO" )<< endl;
     

     





    
   }
   
return 0;

    
} 