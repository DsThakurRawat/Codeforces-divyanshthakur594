#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 

    /*

    */
   int n ,k;
   cin >> n >> k;


   int x ;
   int y ;
   int flag =0;
   for(x = 0;  x<= n/2; x++){
    for( y = 0; y <= n/k; y++){
        if(2*x + k*y == n){ 
            flag = 1; 
            break;
    }
   }


      
   }



   cout << (flag == 1 ? "YES" : "NO") << endl;

      


   
   return 0;

    
} 