#include<bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin >> t;
   while(t--){ 

    int a,x,y;
    cin >> a >> x >> y;
    /*
    arg -> yes if only and only
    a > x > y || a < x < y
   else no
    
    
    */
      if(a > x > y || a < x < y) cout << "YES" << endl;
      else cout << "NO"<<endl;





    
   }
   
return 0;

    
} 