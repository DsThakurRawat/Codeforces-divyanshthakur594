#include<bits/stdc++.h>
using namespace std;
// solution by divyansh 

int main(){
   int t;
   cin >> t;
   while(t--){ 

    string s;
    cin >> s;
    // we can only delete the character 
    // if we got equal number of 1 and 0 then the cost will be zero

    int count1 = 0, count0 = 0;
    int tsize = 0;
    

    


    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0' and count1 > 0){
            count1--,tsize++;

        }
        else if(s)
    }




       
      
    
   }
   
return 0;

    
} 