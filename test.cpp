#include<bits/stdc++.h>
using namespace std;
// solution by divyansh 

int main(){
   int t;
   cin >> t;
   while(t--){ 
       long long a, b, x, y;
             cin >> a >> b >> x >> y;
       if(a == b) {
         cout << 0 << endl;
         continue;
      }
 long long c1 = abs(a - b) * x;
     
     
      long long a2 = a ^ 1;
      long long c2 = y + abs(a2 - b) * x;
      cout << min(c1, c2) << endl;
      
    
   }
   
return 0;

    
} 