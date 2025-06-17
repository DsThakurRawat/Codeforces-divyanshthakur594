#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
    // okay so a + b + c // both should be non-empty
    // condition check brrrrro
    /*
    s = should made up of a + b + c
    and 
    b = a+c
    // so we need to chek if there is such string where 
    s = a + b + c
    c = a+b;
    // how 
    s = a + b + a + b
    s = 2*(a + b) = a+b + a+ b
    s 


    */
   int n;
   cin >> n;
   string s;
   cin >> s;
   int flag = 0;

   for(int i = 1; i < s.size()-1; i++){
        for(int j = 1; j + i < n; j++){
     string s2 = s.substr(i, j);     
         string s1 = s.substr(0, i);      
        string s3 = s.substr(i+j);       
            if(s1.empty() || s2.empty() || s3.empty()) continue;

            string ac = s1 + s3;              
            size_t pos = ac.find(s2);        
            if(pos != string::npos){
                flag = 1;
                break;
            }
        }
        if(flag) break;
   }
   if(flag) cout << "Yes" << endl;
   else cout << "No" << endl;




      
   }



      
       
      


   
   return 0;

    
} 