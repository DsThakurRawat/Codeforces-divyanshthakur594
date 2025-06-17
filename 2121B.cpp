#include<bits/stdc++.h>
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   int t;
   cin >> t;
   while(t--){ 
    
   
   int n;
   cin >> n;
   string s;
   cin >> s;
   int flag = 0;

   
for(int i = 1; i < n-1; i++){
        char b = s[i]; 
        
        
for(int j = 0; j < i && !flag; j++){
            if(s[j] == b){
                flag = 1;
                break;
            }
        }
        
 for(int j = i+1; j < n && !flag; j++){
            if(s[j] == b){
                flag = 1;
                break;
            }
        }
        
        if(flag) break;
   }
   
   cout << (flag ? "Yes" : "No") << '\n';
   }
   return 0;
}