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
       










    
   }
   
return 0;

    
} 