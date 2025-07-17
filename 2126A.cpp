#include<bits/stdc++.h>
using namespace std;
// solution by divyansh thakur

int main(){
   int t;
   cin >> t;
   while(t--){ 
      string x;
      cin >> x;
      int result = -1;


      for(int i = 0; ; i++){
        string y = to_string(i);
        int flag = 0;

        for(char c : y){
            if(x.find(c) != string :: npos){
                result = i;
                flag = 1;
                break;
            }
        }

    if(flag)

      }
    
   }
   
return 0;

    
} 