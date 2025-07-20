#include<bits/stdc++.h>
using namespace std;
// solution by divyansh 

int main(){
   int t;
   cin >> t;
   while(t--){ 
       int n; // the number of arrays in list
      cin >> n;
     vector<vector<int>> arrays(n); // this thing here declare list of n arrays
     /*
    1. This creates a vector of size n, where each element is itself a vector of integers.
    2. That is, arrays[0], arrays[1], ..., arrays[n-1] are all empty vectors initially.
    3. Think of it like: 
    arrays = [
                 [],  // array 0
                 [],  // array 1
                          ...
                 []   // array n-1
            ];


     */
    for (int i = 0; i < n; ++i) { //For each of the n arrays, you first read how many elements it contains (mi).
    int mi;
    cin >> mi;
    arrays[i].resize(mi);
    for (int j = 0; j < mi; ++j) {
        cin >> arrays[i][j];
      }
       }

       // hm now we need to find maximum beuty :)
       // first we will sort all the array then 
       // we gonna make dumping array 
       // in which we will store first minimum 
       // now in this way the 2nd minimum of all array will become first minimum
       // we will do thhis till we find maximum dumped array :)

  /*
  validating my idea 
    3
    4
    1001 7 1007 5 a
    3
    8 11 6 b
    2 
    2 9 c
    sort  arrays
    5 7 1001 1007

    6 8 11

    2 9

    dump array =  which have lowest second minimum  all of the array
    so dump array = a
    new arrays
    5 7 1001 1007 6 2
    8 11
    9  
    so answer = 8 + 9 + 2= 19


    short trick
     a = a1 a2 a3 
     b = b1 b2 b3
     c = c1 c2 c3 
     d = d1 d2 d3



vector-> store all second minimums






  */

       
  











    
   }
   
return 0;

    
} 