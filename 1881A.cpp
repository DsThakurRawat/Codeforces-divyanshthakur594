#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
    int n,m;
    string x,s;
    cin >> x >> s;
    
    for(int i = 0; i < 6; i++){
      if(x.find(s) != string::npos){
         cout << i << endl;
         
      }
    }
    x +=x;


    

      




      
       
      


   }
   cout << -1 << endl;
   return 0;

    
} 