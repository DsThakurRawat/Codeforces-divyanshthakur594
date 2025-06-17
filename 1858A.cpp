#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){ 

    // each test consist of three integers a,b,c
    // a - the number of button pressed by anna
    // b - number of button can be pressed by katie
    // c - number of button pressed by either of them

    int a , b, c;
    cin >> a >> b >> c ;
    if( a > b ){
        cout << "First" << endl;
    }
    else if( b > a){
        cout << "Second" << endl;
    }
    else if( a==b ){
        if( c % 2 == 0) cout << "Second" << endl;
        else cout << "First" << endl;
    }

    

      
   }



      
       
      


   
   return 0;

    
} 