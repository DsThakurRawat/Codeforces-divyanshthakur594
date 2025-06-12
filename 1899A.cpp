#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
      
      int n;
      cin >> n; 
      if( n % 3 == 0 )      cout << "Second" << endl;
      else cout<< "First" << endl;


      // n % 3 == 0 [ 3,6,9,12...] if players do play optimally then there is no chance that the vanya can win in this case
      // n % 3 == 1 [1,4,7,10...] if vanya want to win he will sub - 1 and hence num % 3 ==0
      // n % 3 == 2 [2,5,8,11...] if vanya wants to win he will  definately add +1 and make n % 3 =0

      


   }

    
} 