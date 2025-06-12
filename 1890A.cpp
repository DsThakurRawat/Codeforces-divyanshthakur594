#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
     int n;
    cin >> n;
     // from statement says 
     /* b1 + b2 = b2 + b3 
     means b1 = b3
     or specifically
     bi + b(i+1) = b(i+1) + b(i + 2)     
     mean 
     bi = bi+2;
     so b1 = b3
        b2 = b4
        b3=b5


     
     */
   

     map<int,int>mpp;// will store frequency here

     for (int i = 0; i < n; i++){
       int x;
       cin >> x;
       mpp[x]++;

     }
     if(mpp.size() >= 3) cout << "YES" << endl;
     else{
      if(abs(mpp.begin()->second - mpp.rbegin() -> second) <= 1){
         cout << "YES"<<endl;
      }
      else{
         cout << "NO" << endl;
      }


     }
       

   


       




      
       
      


   }
   return 0;

    
} 