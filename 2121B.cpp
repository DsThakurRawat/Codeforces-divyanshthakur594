#include<bits/stdc++.h>
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   int t;
   cin >> t;
   while(t--){ 
    // ...existing code and comments...
   
   int n;
   cin >> n;
   string s;
   cin >> s;
   int flag = 0;

   // Optimized solution: Only need to check single characters
   for(int i = 1; i < n-1; i++){
        char b = s[i];  // middle character
        
        // Check if b appears in prefix
        for(int j = 0; j < i && !flag; j++){
            if(s[j] == b){
                flag = 1;
                break;
            }
        }
        
        // Check if b appears in suffix
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