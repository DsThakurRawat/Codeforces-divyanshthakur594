#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
// in mathematics same parity means 
// both even oe both odd
   int n;
   cin >> n;
   int sum = 0;

   vector < int > v;
   for( int i = 0; i < n; i++){
    int x;
    cin >> x;
    sum = sum + x;
    v.push_back(x);
   }
   // so just got it we know what to do and now probelam is how we will implement this 
   // think like this we have to find 
   
   // odd + even = odd
   // even + even = even
   // odd + odd = even
   //If sum of all numbers is odd, then answer is NO, else YES....
  (sum % 2 ==0) ? cout << "YES" << endl : cout << "NO" << endl;
   

 



      
   }



      
       
      


   
   return 0;

    
} 