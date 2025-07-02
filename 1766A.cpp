#include<bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin >> t;
   while(t--){ 
    int n;
    cin >> n;
    int count = 0;
    int secondcount = 0;
    for(int i = 1; i <= n; i++){
        // extremely round if it had only one non zero digit


      int x = i;
      while(x > 0){
        if(x % 10 != 0) count++;
        x /= 10;
      }
      
    if( count == 1) secondcount++;
    



    }
      

   cout << secondcount << endl;
  
    
   }
   
return 0;

    
} 