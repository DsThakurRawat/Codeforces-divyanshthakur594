#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 

    /*

    */
   long long n ,k;
   cin >> n >> k;
//  2⋅x+k⋅y=n
/*

   long long x ;
   long long y ;
   int flag =0;
   for(x = 0;  x<= n/2; x++){
    for( y = 0; y <= n/k; y++){
        if(2*x + k*y == n){ 
            flag = 1; 
            break;
    }
   } */
 

   // optimize approach if n % 2 == 0 or (n - k) % 2 == 0
   // yes 
   //else no
 
if(n % 2 == 0 || (n-k) % 2 == 0) cout << "YES"<<endl;
else cout << "NO" << endl;












      
   }
   


  
      
   

   
   return 0;

    
}