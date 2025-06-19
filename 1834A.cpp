#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
    int n;
    cin >> n;
    vector<int>vect;

    for(int i =0; i < n; i++){
        int x;
        cin >> x;
        vect.push_back(x);

     }
     /*
     valid operations
     -1 -1 1 -1 
     s = -2
     p = -1
     op = -1 -1 1 1
     s = 0
     p = 1
     no of op = 1;
     s = l x -1 + k (+1) >=0
     -l + k >=0
     k>=l
     1s should be more than equal to more than -1s 

     a = {1,-1}
     -> 1
     or 
     -> -1 

      k = 1s
      l = -1s

      while( k < l || l % 2 == 1) {
      k++;
      l--;
      op++;

      
      }







     */
    int l =0;
    int k =0;



     for(int i = 0; i < n; i++){
        if(vect[i] == -1) l++;
        if(vect[i] == 1) k++;
     }
    int op;

     while( k < l || l % 2 ==1 ){
        k++;
        l--;
        op++;
     }



cout << op << endl;








      
   }



      
       
      


   
   return 0;

    
} 