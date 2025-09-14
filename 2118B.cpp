#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
      int n; cin >> n;
      cout << 2*n-1<< endl;

      for(int i = 1; i < n; i++){
         cout << i << " " << 1 << " " << i << endl;
         cout << i << " " << i + 1 << n << endl;
      }
      cout << n << " 1 " << n << endl;
    


      




      
       
      


   }
   return 0;

    
} 