#include<bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin >> t;
   while(t--){ 

    int a,x,y;
    cin >> a >> x >> y;
    /*
    arg -> yes if only and only  if x and y lie on the same side of a.
    a > x > y || a < x < y
   else no
    
    
    */
   

      cout << ((a < x) == (a < y) ? "YES" : "NO") << '\n';



    
   }
   
return 0;

    
} 