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

   vector < int > v;
   for( int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
   }
   // so just got it we know what to do and now probelam is how we will implement this 
   // think like this we have to find 
   // if the array contain atleast one even and at least one odd element -- yes
   // else no
    bool has_even = false, has_odd = false;


   for(auto it : v){
    (it % 2 == 0) ? has_even = true : has_odd = true;

    
   }
 (has_even && has_odd) ? cout << "YES" << endl : cout << "NO" << endl;


      
   }



      
       
      


   
   return 0;

    
} 