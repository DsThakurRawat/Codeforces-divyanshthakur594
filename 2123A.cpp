#include<bits/stdc++.h>
using namespace std;
// code by divyansh thakur

int main(){
   int t;
   cin >> t;
   while(t--){ 
   


 /*
    <---- Problem Rough ---->

    so always first move is made by alice
    for n = 2
    0 1
    alice chooses => 0 say a =0;
    then bob dont have valid move as a + b = 3
    so no valid number available
    o/p -> alice

    // can we think like this 
    let n is odd then n = 5
    0 1 2 3 4
    so now we gonna just make pairs where 
    a + b = 3
    if all such pairs exist then simple bob wins 
    and if pairs is not possible he gonna not win
    (0,3)
    (1,2)
    (4 ,) -> alice 
    for n = 6
    0 1 2 3 4 5 
    (0,3)
    (1,2) for n = 6 alice wins




    */
   int n;
   cin >> n;
   vector<int>v(n);

  if( n % 4 == 0) cout << "ALICE" << endl;
  else cout << "BOB" << endl;

   


      
       
      


   }
   return 0;

    
} 