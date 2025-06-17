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
   // If the array contains at least one odd and one even →  YES
  //  If all are odd or all are even →  NO
   int odd = 0,even =0;
   
    for(int i = 0; i < n; i++){
        (v[i] % 2 == 0) ? even++ : odd++;
    }
    

    (even > 0 && odd > 0) ? cout << "YES" << endl :  cout << "NO" << endl;








      
   }



      
       
      


   
   return 0;

    
} 