#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 

    // given a permutation  a of length n.
    int n;
    cin >> n;
    vector<int>vect;

    for(int i =0; i < n; i++){
        int x;
        cin >> x;
        vect.push_back(x);


    }
    /*
    permuatation 
     a1 + b1 <= a2 + b2.........<= an + bn
     ai + bi <= ai+1 + bi+1
     final condn 
     a1 + b1 = a2 + b2 = a3 + b3 =k //

     for a givwn  ai bi can be simply n + 1 - ai
     bi = n + 1 - ai

    */

    vector< int > vect2;
    for(int i = 0; i < n; i++){
        int b = n + 1 - vect[i];
        vect2.push_back(b);
    }


    for(int i = 0; i < n; i++) cout << vect2[i] << " ";





      
   }



      
       
      


   
   return 0;

    
} 