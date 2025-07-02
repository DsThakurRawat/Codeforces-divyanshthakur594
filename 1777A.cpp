#include<bits/stdc++.h>
using namespace std;










int main(){
   int t;
   cin >> t;
   while(t--){ 
   int n;
   cin >> n;

   vector < int > v;
   for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);

   }
   int count = 0;

   for(int i = 0; i < n; i++){

    if(v[i] % 2 != 0 && v[i+1] % 2 !=0) count++;
    else if(v[i] % 2 == 0 && v[i+1] % 2 == 0) count++;
    else continue;


   }


      
   




    
   }
   
return 0;

    
} 