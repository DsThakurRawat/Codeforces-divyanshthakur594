#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 
    int n;
    cin >> n;
    vector<int>b;

    for(int i =0; i < n; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    /*   // now we need to guess 
    // length of string a that is m
    // in 2nd line output m integers a1,a2,a3,a4....am
    expected time complexity
    1s allows = 10^8 operations
    1 test = 2s = 2 x 10^8 operation
    sum of valuse of < 2x10^5
    n1 values n2 values 
    n1 + n2 + n3 +............ <= 2x10^5
    possible tc
    O(n^2)--- upper bound
    ... and anyhting below it
  -> every bi, if has been jotted from 
  a , must be greater or equal to the 
  prev
     ________________________________________________________________________________________________________________________________________________________________________________________
    |
  --|
    |________________________________________________________________________________________________________________________________________________________________________________________





      




      */
     vector < int > a;
     a.push_back(b[0]);
     for(int i = 1; i < n; i++){

      if(b[i] >= b[i-1]) a.push_back(b[i]);
      else {
        a.push_back(b[i]);
        a.push_back(b[i]);
      }
     }
     cout << a.size() << endl;
     for(auto it : a){
      cout << it << " ";
      cout << endl;
     }
     


      
       
       
      


   }
   return 0;

    
} 