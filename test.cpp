#include<bits/stdc++.h>
using namespace std;



int main(){
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    // delete all vowels
    string res ="";
    for(int i =0; i<s.size(); i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' ){
           res = res + s[i];

        }
         
    }
    // just want to add . before every consonant
       string result= "";
        for(auto c : res){
            result += '.';
      
           result +=c;

        }
        cout << result << endl; 

 
   
   return 0;


    
} 