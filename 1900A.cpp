#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
    // need to find minimum nombe of operation
    // . is empty cell
    // # is blocked can't fill or can't removed
    // if i have 3 continuos empty cell , answer is 2 else answer is count of all empty cell
   
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool coninuosempty = false;
    int total_count =0;

    for(int i = 0; i < n; i++ ){
      if(i + 2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
         coninuosempty = true;
         break;
         
      }
      if(s[i] == '.'){
         total_count++;
      }
      if(coninuosempty) cout << 2 << endl;
      else cout << total_count << endl;
    }
     
   
      
      


   }
   return 0;

    
}