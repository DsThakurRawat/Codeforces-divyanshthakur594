#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
    int n,k;
    cin >> n >> k;
    
    string ans = "";

    for(int i=0; i < n - k; i++) ans = ans + '0';
    for(int i = 0; i < k; i++) ans +=1;

    cout << ans << endl;
  

      




      
       
      


   }
   return 0;

    
} 