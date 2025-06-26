#include<bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin >> t;
   while(t--){ 
      int k;
      string s;
      cin >> k >> s;
      vector<char> v;

      // we need to find smallest string 
      /*
      we can add 0 to one end and 1 to other end of string
      if str is 
      if string is given 
      100 --> answer is 1 bcz in one operation only 1 and 0 can be added each sid
      0111-> answer is 2 
      10101 -> answer is five arg: 1 if s[0] == s[s.size()-i -1] answer is s.size()
      101010 -> if len > 1 && s[i] != s[len-i-1]   cnt++   ans = len -  2*cnt

      
      */
   int count = 0;

   int n = s.size();

   for(int i = 0; i < n; i++){
      if(  n > 1 &&  s[i] == s[n-i-1]) break;
      else if( n > 1 && s[i] != s[n - i - 1]) count++;



   }
     int ans = n - 2*count;
    cout << ans << endl;


   








      


      
   }



      
       
      


   
   return 0;

    
} 