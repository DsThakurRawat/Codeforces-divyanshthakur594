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
     vector<int>v;
     v.push_back(a);
     v.push_back(x);
     v.push_back(y);
     
     cout << (is_sorted(v.begin(),v.end()) ? "YES" : "NO" )<< endl;
     

     





    
   }
   
return 0;

    
} 